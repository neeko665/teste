#include <stdio.h>

int main(){
    int idade;
    int dependentes;
    float renda;

      // A primeira condição idade do usuário está entre 18 e 65 anos.
      // A segunda condição se a renda do usuário é menor que 3000.
      // A terceira condição verificam se o numero de dependented é maior que 2.

  printf("Digite a sua idade: ");
  scanf("%d", &idade);
  printf("digite a sua renda mensal: ");
  scanf("%f", &renda);
  printf("digite o número de dependentes: ");
  scanf("%d", &dependentes);

  if (idade >= 18 && idade <65) {
   if (renda < 3000) {
      if (dependentes > 2)
     {
     printf("você atende a todos os criterios\n");
     }else
      { printf("Você não atende ao critério dependente\n");

        
      }
      
      
     //condicao verdadeira
    }else
    {
      printf("você não atende ao critério renda");
    }
    
    
    //condicão verdadeira
  } 
  
   }