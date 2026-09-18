#include <stdio.h>
#include <stdlib.h>

int main(){
/* EX 0 */
    #include <stdio.h>

int main()
{
    int capacidade, qtd_itens, n_mochilas, resto;
    
    printf("Insira a quantidade de itens a serem dispostos nas mochilas: \n");
    scanf("%d",&qtd_itens);
    printf("Insira a capacidade de itens de cada mochila: \n");
    scanf("%d",&capacidade);
    
    n_mochilas = qtd_itens/capacidade;
    resto = qtd_itens%capacidade; 
    
    printf("Legendario, são %d mochilas para seus itens, e sobram %d itnes", n_mochilas, resto);
    
 // EX 1
    return 0;
}
