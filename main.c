#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

#include <fcntl.h>
#include <string.h>
#include "count_lines.h"

int main() {
    char *s = "jhkjh3232";
    int i;
    sscanf(s,"/^[^%d]%d",&i);
    printf("%d",i);
}