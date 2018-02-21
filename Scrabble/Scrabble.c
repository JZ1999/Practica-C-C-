//INCOMPLETE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int trans(char c);
void lowerStr(char *str);
int main(){
    char *words = (char *) malloc(80*sizeof(char));
    fgets(words,80,stdin); 
    lowerStr(words);
    int len = strlen(words);
    if(len)
       words = (char *) realloc(words,len*sizeof(char)); 
    else
        return 0;
    char *word = (char *) calloc(len,sizeof(char));
    char *resW = (char *) calloc(len,sizeof(char));
    int result = 0;
    int val = 0;
    char sym = ' ';
    int pos = 0;
    for(int x = 0; x < strlen(words); x++){
        if(words[x] != sym){
            val+=trans(words[x]);
            word[pos] = words[x];
            pos++;
        }
        else{
            if(strlen(word) > 10) return 0;
            pos = 0;
            if(val > result){
                result = val;
                char *z = "";
                char *tocmp = (char *) calloc(len,sizeof(char));
                for(z = &words[x];*z != sym; z--);
                for(;*z != sym;z++){
                    resW[pos] = *z;
                    pos++;

                }
                pos = 0;

            }
            val = 0;
        }

    }
    puts(word);
    
    return 0;

}
void lowerStr(char *str){
    for(int x = 0; x < strlen(str);x++)
        str[x] = tolower(str[x]);
}

int trans(char c){
    switch(c){
        case 'e':
        case 'a':
        case 'i':
        case 'o':
        case 'n':
        case 'r':
        case 't':
        case 'l':
        case 's':
        case 'u':
            return 1;
        case 'd':
        case 'g':
            return 2;
        case 'b':
        case 'c':
        case 'm':
        case 'p':
            return 3;
        case 'f':
        case 'h':
        case 'v':
        case 'w':
        case 'y':
            return 4;
        case 'k':
            return 5;
        case 'j':
        case 'x':
            return 8;
        case 'q':
        case 'z':
            return 10;
        default:
            return 0;
    }
}
