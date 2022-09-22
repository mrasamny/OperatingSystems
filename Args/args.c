#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    for(int index=0; index < argc; index++){
        printf("argv[%d] is %s\n",index,argv[index]);
    }
    return 0;
}
