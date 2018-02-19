#include <stdio.h>
#include <string.h>

int main(){
    char x[100];
    char a = 'q';
    strcat(x,&a);
    printf("%c",x[0]);

    return 0;
}
