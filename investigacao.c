#include <stdio.h>
int main()
{
    int resp, resp2, resp3 , resp4, resp5, soma;
    printf("Responda as questões com 1 - sim e 2 - não \n\n");
    printf("Telefonou para a vitima?");
    scanf("%d",&resp);
    printf("Esteve no local do crime?");
    scanf("%d",&resp2);
     printf("Mora perto da vitima?");
    scanf("%d",&resp3);
  
     printf("Devia para a vitima?");
    scanf("%d",&resp4);
     printf("Já trabalhou com a vitima?");
    scanf("%d",&resp5);
    soma = resp + resp2 + resp3 + resp4 + resp5;

if (soma>=9)
{
    printf("Inocente");
}
else if (soma==8)
{
    printf("Suspeito");
}
else if ((soma==6) || (soma==7))
{
  printf("Cúmplice");
}
else if (soma==5)
{
    printf("Assassino");
}
else{
    printf("Opcao invalida");
}



}
