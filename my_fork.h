//
// Created by Nadav on 11/19/2022.
//
#include "stdlib.h"
#include "stdio.h"
#include <sys/wait.h>
#ifndef UNTITLED5_MY_FORK_H
#define UNTITLED5_MY_FORK_H
#include <fcntl.h>
#endif //UNTITLED5_MY_FORK_H
#include <unistd.h>

pid_t my_fork (void){
    pid_t pid = fork();
    if ((int)pid >= 0){
        return pid;
    }
    printf("error");
    exit(-1);
}
