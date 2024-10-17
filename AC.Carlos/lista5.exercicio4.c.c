#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra[20];
    int i,count = 0;
    printf("digite a palavra:");
    scanf("%s",palavra);
    printf("a primeira letra e: %c\n",palavra[0]);


    for (i=0;i<20;i++){
        if (palavra[i] != '\0'){
            count++;
        }
        if (palavra[i] == '\0'){
            break;
        }
    }
    printf("a ultima letra e: %c \n",palavra[count-1]);
    printf("o numero de letras da palavra e: %i",count);

    return 0;
}
