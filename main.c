#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <string.h>
#include "count_lines.h"

int main(){
    int N = 2;
    int G = 3;
    int cur_gen = 0;
    for(int i = 0; i < N; i++){
        wait(0);
        if(cur_gen == G){
            break;
        }
        int cur_fork = fork();

        if(cur_fork == 0){
            i = -1;
            cur_gen++;


        }
    }
    wait(0);
    printf("my pid is %d, my gen is %d\n", (int)getpid(), cur_gen);
    //printf("my pid is %d\n", (int)getpid());