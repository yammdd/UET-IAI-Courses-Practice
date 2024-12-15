/*
 * Word count application with one thread per input file.
 *
 * You may modify this file in any way you like, and are expected to modify it.
 * Your solution must read each input file from a separate thread. We encourage
 * you to make as few changes as necessary.
 */

/*
 * Copyright © 2021 University of California, Berkeley
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <pthread.h>

#include "word_count.h"
#include "word_helpers.h"

word_count_list_t word_counts;

void* count_words_thread(void* file_name) {
  // mở file .txt được truyền vào qua file_name
  FILE* infile = fopen(file_name, "r");

  // không mở được file thì in ra lỗi và exit
  if (infile == NULL) {
    perror(file_name);
    exit(-1);
  }

  // gọi hàm count_words trong word_helpers.h
  count_words(&word_counts, infile);
  // end
  fclose(infile);
  pthread_exit(NULL);
}

/*
 * main - handle command line, spawning one thread per file.
 */
int main(int argc, char* argv[]) {
  /* Create the empty data structure. */
  word_count_list_t word_counts;
  init_words(&word_counts);

  if (argc <= 1) {
    /* Process stdin in a single thread. */
    // dữ liệu từ stdin chỉ 1 luồng 
    count_words(&word_counts, stdin);

  } else {
    // nhiều danh sách đầu vào, mỗi danh sách ứng với 1 luồng
    pthread_t threads[argc - 1];
    for (int i = 0; i < argc - 1; ++i) {

      // tạo 1 luồng mới
      int rc = pthread_create(&threads[i], NULL, count_words_thread, (void*)argv[i + 1]);
      // exit nếu thất bại
      if (rc) {
        printf("ERROR; return code from pthread_create() is %d\n", rc);
        exit(-1);
      }
    }
    // chờ tất cả các luồng kết thúc
    for (int i = 0; i < argc - 1; ++i) {
      pthread_join(threads[i], NULL);
    }
  }

  /* Output final result of all threads' work. */
  // sắp xếp danh sách theo số lần xuất hiện từ ít đến nhiều
  wordcount_sort(&word_counts, less_count);
  // in ra
  fprint_words(&word_counts, stdout);
  return 0;
}
