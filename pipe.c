#include <stdio.h>

//fd[0] this is the read file descriptor of the pipe

//fd[1] this is the write file descriptor of the pipe

int main(int argc, chat* argv[]) {
    int fd[2]; //this is our process.
    pipe(fd); //Initialize a pipe, to communicate between procresses
    if (pipe(fd)==-1) {
        printf("An error occured with opening the pipe\n");
        return -1;
    }

    int id = fork(); //this is a new process.
    //file descriptors get inherited to the new process, this file descriptors have to get closed beucase they are open.


    if (id == 0)  {
        int x;
        printf("Input an number: ");
        scanf("%d", %x);

        write(fd[1], &x, sizeof(int)); //file descriptor to write, a piep has two ends
        close(fd[1]); //after using a file descriptor I have to close, just after using it 
    }
   return 0;

}