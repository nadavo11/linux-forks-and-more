//
// Created by pc user on 11/19/2022.
//
#include <unistd.h>
#ifndef UNTITLED5_PRINT_THREADS_H
#include "stdio.h"
#include <sys/wait.h>


void print_threads(short unsigned int N){
    int i = 0;
    int pid = 0;

    //repeat N times
    for(int i=0; i<N; i++){

        //only the newest thread prints a messege
        if(pid == 0)
            printf( " Hi. I'm thread number %d\n", i);
        // ONLY THEN make a child, then shut up forever.
        pid = fork();
        wait(0);
    }
}
#define UNTITLED5_PRINT_THREADS_H

#endif //UNTITLED5_PRINT_THREADS_H
