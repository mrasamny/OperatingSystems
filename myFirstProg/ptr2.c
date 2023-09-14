#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 20

int main()
{
    unsigned char message[MAX_LEN] = "This is a string";
    
    unsigned char* msgPtr = 
        (unsigned char *)malloc(MAX_LEN*sizeof(unsigned char));
    
    //memset(msgPtr,'\0',sizeof(unsigned char)*MAX_LEN);
    strcat(message, msgPtr);
    
    printf("message is \"%s\" (%ld/%ld)\n",
           message, sizeof(message),strlen(message));
    printf("msgPtr is \"%s\" (%ld/%ld)\n",
           msgPtr, sizeof(unsigned char)*MAX_LEN, strlen(msgPtr));
    
    for(int index=0; index < MAX_LEN && msgPtr[index] != '\0'; index++){
        printf("%c -- %d\n",msgPtr[index],msgPtr[index]);
    }
    
    free(msgPtr);
    return 0;
}

