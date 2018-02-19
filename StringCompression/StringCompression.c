#include <stdio.h>
#include <string.h>

const char* compresults(char* string);

int main(){
    char string[15];

    scanf("%s",string);

    if(!strlen(string))
        puts("Invalid Input");
    else
        printf("%s",compresults(string));


    return 0;
}
const char* compresults(char* string){
    char* result = "";
    int len = strlen(string);
    char currentChar;
    int repeat = 1;
    char repeatToString;

    for(int x = 0;x < len; x++){
        if(string[x] != currentChar){
            strcat(result, &string[x]); 
            repeatToString = (char)repeat + 48;
            strcat(result, &repeatToString);
            currentChar = string[x];
            repeat = 1;
        }else{
            repeat+=1;
        }
    }

}
