#include <stdio.h>

int main()
{
    int N, i; 
    double media, soma, cont, menor;
    printf("Quantas pessoas serao digitadas: ");
    scanf("%d", &N);
    
    char nomes[N][50];
    int idades[N];
    double alturas[N];
    
    for(i = 0; i < N; i++){
        printf("Dados da %da pessoa\n", i+1);
        printf("Nome: ");
        scanf("%s", &nomes[i]);
        printf("Idade: ");
        scanf("%d", &idades[i]);
        printf("Altura: ");
        scanf("%lf", &alturas[i]);
        
    }
    
    soma = 0;
  
    for (int i = 0; i < N; i++){
     soma = soma + alturas[i];
     
    }
    media = soma / N;
    printf("Alturas medias das pessoas: %.2lf\n", media);
    
    cont = 0;
    for (i = 0; i <N; i++){
     if ( idades[i] < 16){
         cont++;
     } 
    }
     menor = cont * 100 / N;
    printf("Pessoas com menor de 16 anos: %.1lf %%\n", menor);
    for (int i =0; i < N; i++){
        if (idades[i] < 16) {
            printf("%s\n", nomes[i]); 
        }
    }

    return 0;
}
