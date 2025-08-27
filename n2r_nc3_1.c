#include <stdio.h>


int main() { 
    int idade = 0;
    float renda = 0.0;

    printf("Digite sua idade: "); 
    scanf("%d", &idade); 

    printf("Digite sua renda mensal: "); 
    scanf("%f", &renda);

    if (idade <= 18 || idade >= 60) 
    {
        printf("Aceito com relação à idade\n");
        if (renda < 2000)
        {
            printf("Voce tem direito ao desconto\n");
        } else {
            printf("Voce nao direito ao desconto devido a renda\n");
        }

    } else {
        printf("Voce nao atende os criterios de idade\n");
    }
}
