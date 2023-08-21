# COS1512
Linux Users:
    Prerequisites:
    { 
        Most linux distros come with C and C++ standard libraries installed. However if you dont have any in your distro see the distro's forums.
        In debia and ubuntu based distros you can install the libraries with the ' sudo apt install lib-xxx ' or ' sudo apt install libXXX' command. !!!Note!!! you will need administrative privilages to do so. Replace 'XXX' with the library name. Or visit the website of the library you want and follow the install guide.
    }
    i. Make sure you have the c++ specification installed
        i.i Debian users(and ubuntu or debian based distro users) run 'which c++' to see where, if anywhere, your standard c++ library is installed.
        i.ii Next check if you have a c++ compiler. A good open and free c++ compiler is the GNU compiler for c++ called g++. Use the the 'which g++' command to see where you might have g++ installed.

    ii. If you don't any c++ and g++ installed run ' sudo apt install make g++  ' to install 'make','g++', to get the things we need to make and run the programs.
        ii.i   Or use ' sudo apt install build-essential' to get a series of packages essential for makeing and building for linux.

    Building/Make:
    1. If you're on linux you should use 'make' to make the test programs. 
    2. Then use './qX.elf' to run the programs in the terminal, where 'X' is the question number you want to run. '.elf' Is the program's chosen extension. You might want to take a look in the 'Makefile'
    3. To compile question 1, use the command 'make q1', and './q1.elf' to run the program's in cli-mode.
Windows Users:

1. Navigate to the 'bin' folder to find pre-compiled windows binaries for each question.
    The binaries are cmd/powershell cli-binaries, hence the '.bat' file extension
