#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN 200
#define NUM_OF_RECS 4

typedef struct _RecType {
    char first_name[NAME_LEN];
    char last_name[NAME_LEN];
    int id;
    double balance;
}RecType;

int main(int argc, char** argv)
{
    RecType rec;
    RecType *recPtr;
    RecType *recCursor;
    
    memset(&rec,0,sizeof(rec));
    
    strcpy(rec.first_name,"Isabelle");
    sprintf(rec.last_name,"%s", "Desu");
    rec.id=1000;
    rec.balance = 252;
    
    printf("first: %s\nlast: %s\nID: %d\nBalance: $%.2f\n",         rec.first_name,rec.last_name, rec.id, rec.balance);
    
    /* Dynamic allocation of RecTypes */
    
    recPtr = malloc(NUM_OF_RECS*sizeof(RecType));
    recCursor = (RecType*)recPtr;
    
    for(int i=0; i < NUM_OF_RECS; i++,recCursor++){
        strcpy(recCursor->first_name,"Marwan");
        strcpy(recCursor->last_name,"Rasamny");
        recCursor->id = 1000+i;
        recCursor->balance = 5*i;
    }
    
    recCursor = (RecType*)recPtr;
    for(int i=0; i < NUM_OF_RECS; i++,recCursor++){
        printf("first: %s\nlast: %s\nID: %d\nBalance: $%.2f\n",         recCursor->first_name,recCursor->last_name, recCursor->id, recCursor->balance);
    }
    
    return 0;
}

