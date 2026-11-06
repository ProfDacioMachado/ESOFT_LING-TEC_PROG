/******************************************************************************
 *  Implementação de um CAMPO MINADO com MATRIZ 10x10
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int campo[10][10]; // variavel global que define a matriz do campo. 

void atualizaTela(){
    int i,j; 
    printf("\t--- CAMPO MINADO ---\n\t");
    for(i= 0; i < 10; i++){
        for(j=0; j<10; j++){
            if (campo[i][j] == 0 || campo[i][j] == 9)printf("|_");
            else
            printf("|%d",campo[i][j]);
        }
        printf("|\n\t");
    }
     printf("\n");
}

void inicializaCampo(){
    int cont, i, j; 
    for(i= 0, cont = 0; i < 10; i++){
        for(j=0; j<10; j++){
            // se aleatoriamente cair bomba, coloque a casa como bomba
            if(rand()%10 == 0 && cont < 10) {
                campo[i][j] = 0;
                cont++; 
            }
            else campo[i][j] = 9;
        }
    }
}

int jogada (char Seletor){
    int valor; 

    printf("\n__________________________________\n\t"); 
    if(Seletor == 'l'){
        printf("Qual Linha deseja Jogar: \n");
        scanf("%d", &valor);
    }else if (Seletor == 'c'){
        printf("Qual Coluna deseja Jogar: \n");
        scanf("%d", &valor);
    }

    return valor; 
}    

void verifica_casas(int linha, int coluna){
    int distanciaI, i;
    int distanciaJ, j;
     // for(incialização; verifcação; incremento;) 
     for(i= 0; i<10; i++){
        for(j=0; j<10; j++){
            if (campo[i][j] == 0)
        }
     }
}

int verifica_jogada(int linha, int coluna){
    if(campo[linha][coluna] == 0){
        system("clear");
        printf("MORREU");
        return 0; 
    }else{
        verifica_casas(linha, coluna); 
        return 1; 
    }
    
}


int main(){
    
    int i, j, jogadaL, jogadaC;
    srand(time(NULL));
    
    inicializaCampo();
   do{ 
    atualizaTela();
   }while(verifica_jogada(jogada('l'), jogada('c')));
   
    return 0;
}
