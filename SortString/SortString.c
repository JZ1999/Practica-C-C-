#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

char* sort(int len, char *string){
    char *out = (char *) malloc(sizeof(string));
    int x = 0;
    for(;x < len; x++){


    }

}

int main(){
    char *str = (char *) calloc(20,sizeof(char));
    scanf("%s",str); 
    int len = strlen(str);
    str = (char *) realloc(str,len*sizeof(char));
    char *outStr = (char *) calloc(len,sizeof(char));
    int *valuesOfString = (int *) malloc(len*sizeof(char));
    
    outStr = sort(len, str);
    return 0;
}

