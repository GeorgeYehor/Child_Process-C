# Child_Process-C

This is a C program that creates a child process using the fork function. The child process then runs the vi text editor by calling the system function with the path to vi and any command line arguments passed to the program. The atexit function registers the exit_func function to be called when the program terminates.

The getpid function is used to get the process ID of the current process and getppid function is used to get the process ID of the parent process.

The strcat function is used to concatenate (join) the strings in path_to_vi and argv[1] and store the result back in path_to_vi. This is done to append the name of the file that the user wants to open with vi to the path of the vi executable.

The exit function is called at the end of the program to indicate that it has completed successfully. The EXIT_SUCCESS macro is passed to the function to indicate that the program terminated normally.
