#include <stdio.h>

void unionC(char a[], int tA, char u[], int tU);  
void diferencia(char a[], int tA, char u[], int tU);      
int encontrado(char a[], int tA, char u);         

int main(){
    char A[]= {1, 3, 5, 7};  
    char U[]= {1, 2, 3, 4, 5, 6, 7, 8};  
    int tA = 4;  
    int tU= 8;  

    printf("Union de A y U: ");
    unionC(A, tA, U, tU);  
    printf("\nDiferencia A - U:");
    diferencia(A, tA, U, tU);      
    return 0;
}
void unionC(char a[], int tA, char u[], int tU){
    int i;
    for(i= 0; i< tA; i++){
        printf("%i ", a[i]);
    }
    for(i= 0; i< tU; i++){
        if(!encontrado(a, tA, u[i])){  
            printf("%i ", u[i]);
        }
    }
}
void diferencia(char a[], int tA, char u[], int tU){
    int i;
    for(i= 0; i< tA; i++){
        if(!encontrado(u, tU, a[i])){  
            printf("%i ", a[i]);
        }
    }
}
int encontrado(char a[], int tA, char u){
    int i;
    for(i= 0; i< tA; i++){
        if(a[i]== u){
            return 1;  
        }
    }
    return 0;  
}
