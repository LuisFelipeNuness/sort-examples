#include <stdio.h>

int main()
{
    int i=0, j=0, vet[5], aux=0, menor=0;

    while(i < 5){
        scanf("%d", &vet[i]);
        i++;
    }

    for(i=0; i<4; i++){
        menor = i;
        for(j=i+1; j<5; j++){
            if(vet[j] < vet[menor]){
                menor=j;
            }
        }
        if(i != menor){
            aux = vet[i];
            vet[i] = vet[menor];
            vet[menor] = aux;
        }
    }

    i=0;
    
    while(i<5){
        printf("%d ",vet[i]);
        i++;
    }

    printf("\n");
}