#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

#include <fcntl.h>
#include <string.h>
//#include "count_lines.h"
//#include "print_pids.h"
//#include "print_threads.h"

int main(int argc, char* argv[]) {
//    //open a file
//    FILE * f = fopen("out.txt","w");
//
//    //call print pids
//    print_pids(f,argv[1],argv[2]);
//
//    //call count lines to check it
//    count_lines(argv[2]);
//
//    //call print threads
//    print_threads(argv[1]);

    char *s = "jhkjh3232 juaj au 88";
    int i;
    int j;
    sscanf(s,"%*[^234567890]%d%*[^234567890]%d",&i,&j);
    printf("%d\n%d",i,j);
}