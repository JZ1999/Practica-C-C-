#include <stdio.h>
#include <stdbool.h>
int main(){
    int n, primeNum;
    bool aux = false;
    int arr[] = {2,3,5};
    scanf("%d",&n);
    if(n == 1){
        puts("It is an Ugly number.");
        return 0;
    }

    for(int x = 0; x < 3; x++){
        if(n%arr[x] == 0){
            aux = true;
            break;
        }
    }
    if(aux){
        aux = false;
        for(int x = 7; x < n; x+=2){
            if(n%x == 0){
                aux = true;
                puts("Not an ugly number.");
            }
        } 
        if(!aux)
            puts("It is an Ugly number.");
    }else{
        puts("Not an ugly number.");
    }
    return 0;
}

int[] getPrimes(int n){


    return primes;
}
