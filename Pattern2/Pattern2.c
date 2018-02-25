#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int *arr = (int *) calloc(0,sizeof(int));
    int x = 0, inc = 1, y = 1,s;

    puts("\nPattern# 1");
    for(; x < 5; x++){
        for(s = 0; s <= x; y+=inc) {
            printf("%d ",y);
            inc+=2;
            s++;
        }
        puts("");
    }
    x = -1, inc = 1, y = 2,s;
    int next = 1;
    int val = 1;
    int cp;

    puts("\nPattern# 2");
    for(x = 2; x < 7; x++){
        cp = val;
        for(y = x;y >= 2; y--){
            printf("%d ",val--);
        
        }
        
        val=cp + x;
        puts("");
    }
    
    inc = 2;
    int Char = 65;
    puts("\nPattern# 3");
    for(x = 2; x != 12; x+=2){
        cp = Char;
        for(y = x;y != 0; y--){
            if(Char == 91)
                Char = 65;
            printf("%c ",(char)Char++);
        
        }
        Char = cp+inc;
        inc+=2;
        puts("");
    }


    puts("\nPattern# 4");
    char output[20] = "###";
    int pos;
    int len;
    char *temp;
    int sub = 2;
    bool inc2 = true;
    for(x = 0; x != 7; x++){
        len = strlen(output); 
        if(len < 7 && inc2){
            puts(output);
            temp = "#";
            strcat(output, temp);
        }else{
            inc2 = false;
            //output[strlen(output)-sub] = '\0';
            puts(output+sub);
            ++sub;
        }
    }



    puts("\nPattern# 5");
    char output2[20] = "######";
    int inc3 = 0;
    bool stop = false;;
    char *temp2 = "#";
    for(x = 0; x != 7; x++){
        if(!stop){
            if(inc3 == 3) stop=true;
            puts(output2+inc3);
            if(inc3 != 3) inc3++;
        }else{
            //strcat(output2,temp2);
            inc3--;
            puts(output2+inc3);
        }

    }
    return 0;
}
