//
// Created by pc user on 11/19/2022.
//

#ifndef UNTITLED5_PRINT_PIDS_H
#define UNTITLED5_PRINT_PIDS_H

#endif //UNTITLED5_PRINT_PIDS_H

void print_pids (int fd, short unsigned int N, short unsigned int G){
    int gen = 0;
    for(int i = 0; i < N; i++){
        wait(0);
        if(gen == G){
            break;
        }
        int cur_fork = fork();

        if(cur_fork == 0){
            i = -1;
            gen++;

        }
    }
    wait(0);
    printf("my pid is %d, my gen is %d\n", (int)getpid(), gen);
    //printf("my pid is %d\n", (int)getpid());

}