#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int main(int argc, char *argv[]) {
    int pid;
    int status;
    int number;
    int rc = fork();

    if (rc == 0) {
        // child no. one to be executed
        printf("H  %d\n", (int) getpid());
        int number = rand() % 4;
        sleep(number + 1);
        exit(1);
    }
    else {
        wait(NULL);
        rc = fork();

        if(rc == 0) {
            // no. two to be executed
            printf("e  %d\n", (int) getpid());
            int number = rand() % 4;
            sleep(number + 1);
            exit(1);
        }
        else {
            wait(NULL);
            rc = fork();

            if(rc == 0) {
                // no. three to be execulted
                printf("l  %d\n", (int) getpid());
                int number = rand() % 4;
                sleep(number + 1);

                exit(1);
            }
            else {
                wait(NULL);
                rc = fork();

                if(rc == 0) {
                    // no. four to be execulted
                    printf("l  %d\n", (int) getpid());
                    int number = rand() % 4;
                    sleep(number + 1);

                    exit(1);
                }
                else {
                    wait(NULL);
                    rc = fork();

                    if(rc == 0) {
                        // no. five to be execulted
                        printf("o  %d\n", (int) getpid());
                        int number = rand() % 4;
                        sleep(number + 1);

                        exit(1);
                    }
                    else {
                        wait(NULL);
                        rc = fork();

                        if(rc == 0) {
                            // no. six to be executed
                            printf("   %d\n", (int) getpid());
                            int number = rand() % 4;
                            sleep(number + 1);

                            exit(1);
                        }
                        else {
                            wait(NULL);
                            rc = fork();

                            if(rc == 0) {
                                // no. seven to be executed
                                printf("W  %d\n", (int) getpid());
                                int number = rand() % 4;
                                sleep(number + 1);

                                exit(1);
                            }
                            else {
                                wait(NULL);
                                rc = fork();

                                if(rc == 0) {
                                    // no. eight to be executed
                                    printf("o  %d\n", (int) getpid());
                                    int number = rand() % 4;
                                    sleep(number + 1);

                                    exit(1);
                                }
                                else {
                                    wait(NULL);
                                    rc = fork();

                                    if(rc == 0) {
                                        // no. nine to be executed
                                        printf("r  %d\n", (int) getpid());
                                        int number = rand() % 4;
                                        sleep(number + 1);

                                        exit(1);
                                    }
                                    else {
                                        wait(NULL);
                                        rc = fork();

                                        if(rc == 0) {
                                            // no. ten to be executed
                                            printf("l  %d\n", (int) getpid());
                                            int number = rand() % 4;
                                            sleep(number + 1);

                                            exit(1);
                                        }
                                        else {
                                            wait(NULL);
                                            rc = fork();

                                            if(rc == 0) {
                                                // no. eleven to be executed
                                                printf("d  %d\n", (int) getpid());
                                                int number = rand() % 4;
                                                sleep(number + 1);

                                                exit(1);
                                            }
                                            else {
                                                //THE REAL PARENT PROCESS SPECE :)
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

    return 0;
}
