import os, subprocess, sys, glob, time

def check_corressness():
    # Clean and rebuild
    print("Rebuilding...")
    subprocess.run(["make", "clean"])
    subprocess.run(["make"])
    print("Checking correctness...")
    if not os.path.exists("testdir"):
        os.makedirs("testdir")
    # Run the program
    output = subprocess.run(["./shell"], stdin=open("command.txt", "r"), stdout=subprocess.PIPE).stdout.decode("utf-8").strip()
    output = output.split("\n")
    # expected output
    current_dir = os.getcwd()
    test_dir = os.path.join(current_dir, "testdir")
    wc_result = subprocess.run(["wc", "shell.c"], stdout=subprocess.PIPE).stdout.decode("utf-8").strip()
    expected_output = [wc_result, wc_result, current_dir, test_dir, current_dir]
    
    for i in range(len(expected_output)):
        if expected_output[i].strip() != output[i].strip():
            print("test failed!")
            print("Expected output:\n", expected_output)
            print("Your output: \n", output)
            return False

    print("Correctness test passed!")
    return True

if __name__ == "__main__":
    if check_corressness():
        exit(0)
    exit(1)
