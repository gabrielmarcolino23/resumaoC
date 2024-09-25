#include <stdio.h>
#include <string.h>

void abertura() {
    printf("|****************|\n");
    printf("| Jogo de Forca  |\n");
    printf("|****************|\n\n");
}

int main() {
    char palavraSecreta[20];
    sprintf(palavraSecreta, "ANA");

    int acertou = 0;
    int enforcou = 0;

    char chutes[26];
    int tentativas = 0;

    abertura();

    do {

        for(int i = 0; i < strlen(palavraSecreta); i++) {

            int achou = 0;

            for(int j = 0; j < tentativas; j++){
                if(chutes[j] == palavraSecreta[i]) {
                    achou = 1;
                    break;
                }
            }

            if(achou) {
                printf("%c ", palavraSecreta[i]);
            } else {
            printf("_ ");
            }
        }
        printf("\n");
        
        char chute;
        printf("\nChute uma letra: ");
        scanf(" %c", &chute);

        chutes[tentativas] = chute;
        tentativas++;
    

                

    } while (!acertou && !enforcou);

}