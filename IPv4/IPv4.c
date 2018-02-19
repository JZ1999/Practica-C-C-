#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool ValidSection(int n);
int main(){

    int ip[4];
    int x;
    int len = 4;
    int aux;
    if(scanf("%d.%d.%d.%d.%d",&ip[0],&ip[1],&ip[2],&ip[3],&aux) > 4){
        puts("Invalid");
        return 0;
    }

    for(x = 0; x < len ; x++){
        if(!ValidSection(ip[x]))
            break;
    }
    if(x == len)
        puts("Valid");
    else
        puts("Invalid");
    return 0;
}

bool ValidSection(int n){
    if(n > 255 || n < 0)
        return false;
    return true;


}
