import subprocess
import os

if __name__ == '__main__':
    # first, we clean and make the directory
    subprocess.run(['make', 'clean'])
    subprocess.run(['make'])
    # run this command and get last line of output: btest -g -r 2
    # output is in the form: "Total points: 0/44"
    output = subprocess.check_output(['./btest', '-g', '-r', '2']).decode("utf-8").splitlines()[-1]
    # get the last two numbers of the output
    # output is in the form: "Total points: 0/44"
    # we want the 0 and the 44
    points = output.split()[-1].split('/')
    # return the first number
    print("Score: ", points[0], "/", points[1])
    if points[0] == points[1]:
        print("Passed!")
        exit(0)
    else:
        print("Failed!")
        exit(1)

