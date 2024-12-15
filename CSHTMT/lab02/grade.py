import subprocess

if __name__ == '__main__':
    myinput = open('solution.txt')
    res = subprocess.run(['./bomb'], stdin=myinput, stdout=subprocess.PIPE)
    output = res.stdout.decode('utf-8').split('\n')[-2].strip()
    print(output)
    if output == "Congratulations! You've defused the bomb!":
        exit(0)
    else:
        exit(1)