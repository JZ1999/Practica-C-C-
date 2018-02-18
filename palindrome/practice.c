#include <stdio.h>
#include <stdbool.h>

int length(int n){
    int aux = 0;
    while(n/=10) {
       aux+=1;
    }
    return aux;
}

bool amountDigitsEven(int n){
    return n%2==0 ? true : false;
}

int isPalindrome(int n){
    int len = length(n);
    int lencp = len;
    int pow = 1;
    int mod = 10;
    int inc = 1;
    while(lencp--)
        pow*=10;
    len+=1;
    len/=2;
    while(len--){
        if((n%mod)/inc != (n/pow)%10)
            return 0;
        inc*=10;
        mod*=10;
        pow/=10;

    }
    
    
    return 1;

}
int main(){

    int num;

    scanf("%d",&num);

    isPalindrome(num) ? puts("Yes") : puts("No");
    
    return 0;
}
