#include <stdio.h>

int main()
{
    int i=0,j=0, aux=0,comprimento;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &comprimento);
    
    int vet[comprimento];

    printf("-----------------------------\n");
    printf("Digite os elementos do vetor de tamanho %d: ", comprimento);
    while(i < comprimento){
        scanf("%d", &vet[i]);
        i++;
    }

    printf("-----------------------------\n");
    printf("O Vetor ordenado eh: ");
 
    while(j < comprimento){
        
        
        for(i=0; i<comprimento-1; i++){
            
            if(vet[i] > vet[i+1]){
                aux = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = aux;
            }
        }
        
        j++;
    }
    
    i=0;
    
    while(i<comprimento){
        printf("%d ",vet[i]);
        i++;
    }
    
    printf("\n");
     
    return 0;
}