//
// Created by lior on 11/19/22.
//


#include <stdlib.h>
#ifndef UNTITLED5_COUNT_LINES_H
#define UNTITLED5_COUNT_LINES_H
#include "stdio.h"
#include "string.h"
void count_lines (short unsigned int G) {
    FILE *myfile = fopen("out.txt", "r");
    int *g_count = (int*)malloc((G+1)*sizeof(int));
    int g;
    int trash;
//char *buffer
    char buffer[30];

    //loop through all lines
    while (fgets(buffer,30,myfile) ){

        //analyze lines
        sscanf(buffer,"%*[^234567890]%d%*[^234567890]%d",&trash,&g);
        //incremet generation
        g_count[g]+=1;

    }

}

#endif UNTITLED5_COUNT_LINES_H