#include <string.h>

void swap(char* vet, int a, int b) {
    char temp = vet[a];
    vet[a] = vet[b];
    vet[b] = temp;
}

char* bubblesort(char * str) {
    int len = strlen(str);
    int swaped;
    do {
        swaped = 0;
        for(int i = 1; i < len; i++) {
            if (str[i-1] > str[i]) {
                swap(str, i, i-1);
                swaped = 1;
            }
        }
    } while (swaped != 0);

    return str;
}

int particiona(char *str, int low, int high) {
    char pivot = str[high];
    int i = low -1;
    for(int j = low; j < high; j++) {
        if (str[j] < pivot) {
            i = i+1;
            swap(str, i, j);
        }
    }
    if (pivot < str[i+1]) {
        swap(str, i+1, high);
    }
    return i +1;
}

char* quicksort(char *str, int low, int high) {
    if (high > low) {
        int p = particiona(str, low, high);
        quicksort(str, low, p-1);
        quicksort(str, p+1, high);
    }
    return str;

}