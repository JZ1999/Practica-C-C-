/*String compression Challenge
 * Example,
 * input: aaabbbbccd
 * output: a3b4c2d1
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const char* compresults(char* string, int *nums);
int arrayLen(char *str);

typedef struct compress{
    char *string;
    int diffLetters;
    int *nums;
    char *chars;

} compress;


int main(){
    //Vars setup
    compress cmpr;
    cmpr.string = (char *) calloc(15,sizeof(int));
    scanf("%s",cmpr.string);
    int len = arrayLen(cmpr.string);
    cmpr.nums = (int *) calloc(len,sizeof(char));



    

    if(!strlen(cmpr.string))
        puts("Invalid Input");
    else{

        printf("%s\n",compresults(cmpr.string,cmpr.nums));
    }


    return 0;
}
const char* compresults(char* string, int *nums){
    char curr = '\0'; 
    int pos = -1;
    
    for(int x = 0; x < strlen(string); x++){
        if(curr != string[x]){
            curr = string[x];
            pos++;
            nums[pos]++;
        
        }else{
            nums[pos]++;

        }
    
    }
    int y;
    for(y = 0; nums[y] != 0; y++);
    nums = (int *) realloc(nums, y*sizeof(int));
    char *chars = (char *) calloc(y+1,sizeof(char));
    curr = '\0';
    pos = 0;
    for(int x = 0; x < strlen(string);x++){
        if(curr != string[x]){
            curr = string[x];
            chars[pos] = string[x]; 
            pos++;
        }
    
    }
    char *res = (char *) calloc((y*2)+1,sizeof(char));
    int x = 0;
    while(y--){
        res[x+x] = chars[x];
        res[x+x+1] = nums[x]+48;
        x++;
    }
    return res;
}

int arrayLen(char *str){
    int len = 0;
    char c = str[0];
    while(c != '\0'){
        len++;
        c = str[len];
    }
    return len;
}
