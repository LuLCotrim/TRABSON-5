#include <stdio.h>
#include <stdlib.h>
#include <time.h>


static int mat[15][10],i,j;
static char poltronas[15][10];

struct Armazena {

    int vazia;
    int inteira;
    int meia;
    int valor;    


} cinema;

void calcularPoltronas(){
    if(mat[i][j] == 0){
        cinema.vazia++;
    }
    else if(mat[i][j] == 1){
        cinema.inteira++;
        cinema.valor+=12;
    }
    else{
        cinema.meia++;
        cinema.valor+=6;
    }
}

int main(){

    srand((unsigned)time(NULL));

    for(i = 0; i < 15; i++){
        for(j = 0; j < 10; j++){
            
            mat[i][j] = rand() % 3;

            calcularPoltronas();
        }
    }



    for(i=0; i<15; i++){
        for(j=0; j<10; j++){

            if(mat[i][j] == 0){
                poltronas[i][j] = 'V';     

            }
            else if(mat[i][j] == 1){
                poltronas[i][j] = 'I';
            }
            else if(mat[i][j] == 2){
                poltronas[i][j] = 'M';
            }

            printf("[%c] ",poltronas[i][j]);
        }
        printf("\n");
    }

    printf("\nV - Vazia\n");
    printf("I - Inteira\n");
    printf("M - Meia\n");

    printf("\nPoltronas vazias: %d\n",cinema.vazia);
    printf("Pagantes inteiros: %d\n",cinema.inteira);
    printf("Pagantes de meia:: %d\n",cinema.meia);
    printf("Valor arrecadado: %d\n",cinema.valor);

    return 0;
}
