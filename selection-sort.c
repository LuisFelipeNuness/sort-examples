#include <stdio.h>

int main()
{
    int i=0, j=0, vet[5], aux=0;

    while(i < 5){
        scanf("%d", &vet[i]);
        i++;
    }

    for(i=0; i<5; i++){
        for(j=i; j<5; j++){
            if(vet[i] > vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }

    i=0;
    
    while(i<5){
        printf("%d ",vet[i]);
        i++;
    }
}