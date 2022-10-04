#include <stdio.h>

int main()
{
    FILE* myFile = fopen("data.txt","r");
    if (myFile == NULL){
        fprintf(stderr, "data.txt does not exist or pemission denied!");
    }
    
    char line[100];
    fgets(line,99, myFile);
    printf("%s",line);
    
    fclose(myFile);
}
