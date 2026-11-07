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
            if (campo[i][j] == 11) printf("|-");
            if (campo[i][j] == 1 ) printf("|%d",campo[i][j]);
            // printf("|%d",campo[i][j]);
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
            }else campo[i][j] = 9;
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

void abre_casa(int linha, int coluna){
    int i, iM, iP, j, jM, jP;
    int q1, q2;
    for( iM = iP = linha; iM > 1 || iP < 10; iM--,iP++ ){
        for( jM = jP = coluna; jM > 1 || jP < 10; jM--,jP++ ){
            
        }
    }
}

int verifica_jogada(int linha, int coluna){
    if(campo[linha][coluna] == 0){
        system("clear");
        printf("MORREU");
        return 0; 
    }else{
        abre_casa(linha, coluna);
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
