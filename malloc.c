#include<stdio.h>
#include<stdlib.h>

int main() {

    int *arr = (int*)calloc(10,sizeof(int));

    if(arr == NULL){
        printf("Kechirasiz hotiradan joy ajratilmadi\n");
        return 1;
    }

    for(int i = 0; i < 10; i++){
        printf("%d\n", arr[i]);
    }

    for(int i = 0; i < 10; i++){
        arr[i] = i + 10;
    }

    for(int i = 0; i < 10; i++){
        printf("%d\n", arr[i]);
    }

    free(arr);

    for (int i = 0; i < 10; i++){
        printf("%d\n", arr[i]);
    }

return 0;    
}