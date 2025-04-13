#include <stdio.h>

int main(){
    int idade;
    float renda;
    /* if(condicao1){
      if(condicao2){
             //condicao a ser executado se condicao1 e condicao2 forem verdadeiras
                 } else {
                   }
               }*/
               /* programa que verifica se uma pessoa está qualificada para um 
               desconto especial com base na idade e na renda mensal.
               A pessoa deve ter mais de 60 anos ou menos de 18 e ter
               uma renda mensal abaixo de 2000 */
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("digite sua renda mensal: ");
    scanf("%f", &renda);

    if (idade <= 18 || idade >= 60)
    {
       if (renda < 2000)
       {
        printf("voce tem direito ao desconto!\n");
       } else
       {
        printf("voce nao tem direito ao desconto devido à renda!");
       }
       
       
    } else {
        printf("voce nao atende aos criterios devido a idade:\n");
    }
    

}