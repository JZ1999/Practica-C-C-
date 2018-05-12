#include <stdio.h>
#include <stdlib.h>
int main(){
    int casos;
    scanf("%i", &casos);
    while(casos--){
        int N;
        scanf("%i",&N);
        int respaldoN = N;
        int *S = (int *) calloc(N,sizeof(int));
        int *respaldoS = (int *) calloc(N,sizeof(int));
        int anterior = 0;
        while(N--){
            scanf("%i",&S[respaldoN-(N+1)]);
            respaldoS[respaldoN-(N+1)] = S[respaldoN-(N+1)];
            S[respaldoN-(N+1)]+=anterior;
            anterior = S[respaldoN-(N+1)];
        }
        for(int i =0; i < respaldoN;i++){
            int respuesta = 0;
            for(int j =0; j < respaldoN;j++){
                if(i==j){
                   // printf("%i %i\n",S[i],S[j]);
                    continue;
                }else if(i < j){//Revisa si esta mas a la derecha
                  //  printf("ese si %i %i\n",S[i],S[j]);
                    if(respaldoS[j] >= (S[j-1] - S[i])){
                        respuesta++;
                    }
                }else{
                   // printf("error %i %i\n",S[i],S[j]);
                    if(respaldoS[j] >= (S[i-1] - S[j])){
                        respuesta++;
                    }
                }
            }
            printf("%i ",respuesta);
        }
        puts("");

    }
    return 0;
}
