#include <stdio.h>

int main(){
    char A[]= {1,3,5,7};
    char U[]= {1,2,3,4,5,6,7,8};
    int tamA=4;  
    int tamU=8;  
    int unionAlf[12]; 
    int diferencia[4]; 
    int tamUnion=0;  
    int tamDiferencia=0;  
    int i, j;
    int encontrado;

    for(i=0; i < tamA; i++){
        unionAlf[tamUnion]= A[i];
        tamUnion++;
    }
    for(i=0; i < tamU; i++){
        unionAlf[tamUnion]= U[i];
        tamUnion++;
    }
    printf("Union de A y U: ");
    for(i=0; i < tamUnion; i++){
        printf("%d ", unionAlf[i]);
    }
    printf("\n");
    for(i=0; i < tamA; i++){
        encontrado= 0;
        for(j=0; j< tamU; j++){
            if(A[i]== U[j]){
                encontrado = 1;
            }
        }
        if(!encontrado){
            diferencia[tamDiferencia]= A[i];
            tamDiferencia++;
        }
    }
    printf("Diferencia A - U: ");
    for(i= 0; i< tamDiferencia; i++){
        printf("%c ", diferencia[i]);
    }
    printf("\n");
    return 0;
}
