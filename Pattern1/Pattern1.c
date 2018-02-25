#include <stdio.h>
#include <stdlib.h>
#define NUM 48
 int main(){
    char *string = (char *) calloc(0,sizeof(char));
    int x,y;

    puts("\nPattern #1\n");
    for( x = 1; x <= 5; x++){
        string = realloc(string, x*sizeof(string));
        string[x-1] = (char) x+NUM;
        printf("%s\n",string);
    }
    puts("\nPattern #2\n");
    string = realloc(string, 0);

    for( x = 1; x <= 5; x++){
        for( y = x;y != 0; y--)
            printf("%d",x);
        puts("");

    }
    
    puts("\nPattern #3\n");
    for( x = 1; x < 10; x+=2){
        for( y = 1; y <= x; y+=2)
            printf("%d",y);
        puts("");
    }

    puts("\nPattern #4\n");
    for( x = 0; x <= 5; x++){
        for( y = 0; y <= x; y++)
            printf("%d",y%2);
        puts("");
    }

    return 0;
}
