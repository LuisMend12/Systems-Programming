#include <stdio.h>



int main(int argc, chat* argv[]) {
    int fd[2]; //this is our process.
    pipe(fd); //Initialize a pipe, to communicate between procresses
    if (pipe(fd)==-1) {
        printf("An error occured with opening the pipe\n");
        return -1;
    }

    int id = fork(); //this is a new process.
    //file descriptors get inherited to the new process, this file descriptors have to get closed beucase they are open.


    if (id == 0)  
   return 0;

}