#include <stdio.h>
#include <string.h>


int main(void) {
    char str[21];
    memset(str,'\0',20);
    scanf(" %20[^\n]", str);
    for(int i = 19; i >= 0; i--) {
        if(str[i] != '\0') printf("%c", str[i]);
    }
    printf("\n");

    return 1;
}