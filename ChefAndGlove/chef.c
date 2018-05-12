#include <stdio.h>
#include <stdlib.h>

int main(){
   int pruebas, dedos;
   scanf("%d", &pruebas);
   while (pruebas--){
       scanf("%d", &dedos);
       int chef[dedos], guante;
       int respaldo = dedos;
       while (dedos--){
           scanf("%i", &chef[respaldo - (dedos+1)]);
       }
       dedos+=1;

       int *res = (int *) calloc(2, sizeof(int));
       while (respaldo--){
           scanf("%i", &guante);
           if(chef[dedos] > guante)
                res[0] = 1;
           if(chef[respaldo] > guante)
               res[1] = 1;
           dedos++;
       }
       int indice;
       if(!res[0] && !res[1])
        puts("both");
       else if(!res[0])
           puts("front");
       else if(!res[1])
           puts("back");
       else
           puts("none");


   }
return 0;
   }
