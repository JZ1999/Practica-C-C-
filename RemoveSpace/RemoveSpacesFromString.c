#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char *string = (char *) malloc(80*sizeof(char));
    fgets(string,80,stdin);
    int len = strlen(string);
    if(!len)
        return 0;
    string = realloc(string, len*sizeof(char));
    char *output = (char *) calloc(len,sizeof(char));
    int y = 0;

    for(int x = 0; x < strlen(string); x++){
        if(!isspace(string[x])){
            output[y] = string[x];
            y++;
        }
    
    }
    output = realloc(output, strlen(output)*sizeof(char));
    puts(output);

    return 0;
}
