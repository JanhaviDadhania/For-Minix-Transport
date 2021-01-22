#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int main(int argc, char *argv[]) {
    int pid;
    int status;
    char string[11] = "Hello World";

    // int index = 0;
    // while(index++ < 11) {
    //     pid = fork();
    //     printf("%c PID: %d\n", string[index-1], (int) getpid());
    //     int status;
    //     pid = wait(&status);
    //     break;
    // }

    if(pid > 0) {
        printf("H         PID: %d\n", (int) getpid());
        pid = fork();
        pid = wait(&status);

        if (pid > 0) {
            printf("E         PID: %d\n", pid);
            pid = fork();
            pid = wait(&status);

            if( pid > 0) {
                printf("L         PID: %d\n", pid);
                pid = fork();
                pid = wait(&status);

                if( pid > 0) {
                    printf("L         PID: %d\n", pid);
                    pid = fork();
                    pid = wait(&status);

                    if( pid > 0) {
                        printf("O         PID: %d\n", pid);
                        pid = fork();
                        pid = wait(&status);

                        if( pid > 0) {
                            printf("          PID: %d\n", pid);
                            pid = fork();
                            pid = wait(&status);

                            if( pid > 0) {
                                printf("W         PID: %d\n", pid);
                                pid = fork();
                                pid = wait(&status);

                                if( pid > 0) {
                                    printf("O         PID: %d\n", pid);
                                    pid = fork();
                                    pid = wait(&status);

                                    if( pid > 0) {
                                        printf("R         PID: %d\n", pid);
                                        pid = fork();
                                        pid = wait(&status);

                                        if( pid > 0) {
                                            printf("L         PID: %d\n", pid);
                                            pid = fork();
                                            pid = wait(&status);

                                            if( pid > 0) {
                                                printf("D         PID: %d\n", pid);
                                                pid = wait(&status);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }

            }
        }
    }

    // int pid;
    // pid = fork();
    //
    // if (pid > 0) {
    //     printf("Parent : child PID = %d\n", pid);
    //     int status;
    //     pid = wait(&status);
    //     printf("Parent : child %d exited\n", pid);
    // }
    // else {
    //     printf("In child Process\n");
    //     exit(0);
    // }

    // **********************************************************************

    // printf("Hello world (pid:%d) \n", (int) getpid());
    // int rc = fork();
    //
    // if (rc < 0) {
    //     // fork failed
    //     fprintf(stderr, "fork failed\n");
    //     exit(1);
    // }
    // else if (rc == 0) {
    //     // child (new Process)
    //     printf("Hello, I am child (pid:%d) \n", (int) getpid());
    // }
    // else {
    //     // parent goes down this path (main)
    //     int rc_wait = wait(NULL);
    //     printf("Hello, I am parent of %d (rc_wait:%d) (pid:%d) \n", rc, rc_wait, (int) getpid());
    // }
    return 0;
}
