#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "count_lines.h"
#include "print_pids.h"
#include "print_threads.h"
#include "my_fork.h"
int main(int argc, char* argv[]) {
    char* p;
    long N = strtol(argv[1],&p,10);
    long G = strtol(argv[2],&p,10);
    //open a file
    FILE * f = fopen("out.txt","w");

    //call print pids
    print_pids(f,N,G);

    //call count lines to check it
    count_lines(G);

    //call print threads
    print_threads(N);

    char *s = "jjh3232 juaj au 88 53 3131";
    int i;
    int j;
//    sscanf(s,"%*[^234567890]%d%*[^234567890]%d",&i,&j);
//    printf("%d %d",i,j);
    return(0);
}