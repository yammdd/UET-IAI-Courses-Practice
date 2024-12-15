import os, subprocess, sys, glob, time

def check_corressness():
    # Clean and rebuild
    print("Rebuilding...")
    subprocess.run(["make", "clean"])
    subprocess.run(["make"])
    # espect the output of the program lwords 
    # to be the same as running word program
    # with the input file
    print("Checking correctness...")
    correct_file = 0
    total_file = 0
    for file_text in glob.glob("gutenberg/*.txt"):
        res1 = subprocess.run(["./words"], stdin=open(file_text, "r"), stdout=open("output1.txt", "w"), stderr=open("output1.txt", "w"))
        res2 = subprocess.run(["./lwords"], stdin=open(file_text, "r"), stdout=open("output2.txt", "w"), stderr=open("output2.txt", "w"))
        res3 = subprocess.run(["./pwords"], stdin=open(file_text, "r"), stdout=open("output3.txt", "w"), stderr=open("output3.txt", "w"))
        print("Comparing " + file_text)
        if open("output1.txt", "r").read() == open("output2.txt", "r").read() and open("output1.txt", "r").read() == open("output3.txt", "r").read():
            correct_file += 1
        total_file += 1
    print("Grade: " + str(correct_file) + "/" + str(total_file))
    if correct_file == total_file:
        print("Good job!")
        return True
    else:
        print("Incorrect. Try again.")
        return False

def check_speed():
    # espect the speed of the program pwords would faster than lwords and words
    # with the input file
    for file_text in glob.glob("gutenberg/*.txt"):
        print("Checking speed of " + file_text)

        tik = time.time()
        res1 = subprocess.run(["./words"], stdin=open(file_text, "r"), stdout=open("output1.txt", "w"), stderr=open("output1.txt", "w"))
        tok = time.time()
        time_elapsed1 = tok - tik
        print("Time elapsed for words program: " + str(time_elapsed1))

        tik = time.time()
        res2 = subprocess.run(["./lwords"], stdin=open(file_text, "r"), stdout=open("output2.txt", "w"), stderr=open("output2.txt", "w"))
        tok = time.time()
        time_elapsed2 = tok - tik
        print("Time elapsed for lwords program: " + str(time_elapsed2))

        tik = time.time()
        res3 = subprocess.run(["./pwords"], stdin=open(file_text, "r"), stdout=open("output3.txt", "w"), stderr=open("output3.txt", "w"))
        tok = time.time()
        time_elapsed3 = tok - tik
        print("Time elapsed for pwords program: " + str(time_elapsed3))

        if res2.returncode != 0 or res3.returncode != 0:
            print("Incorrect. Try again.")
            return False
        if time_elapsed3 > time_elapsed1 or time_elapsed3 > time_elapsed2:
            print("Incorrect. Try again.")
            return False
    print("Good job!")
    return True

if __name__ == "__main__":
    if check_corressness():
        exit(0)
        # if check_speed():
    exit(1)
