#include <stdio.h>

void createArray(int size)
{
    int arr[size];
    
    for (int i=0; i<size; i++){
        arr[i] =i*10;
    }

    for (int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");
}
int main(){
    createArray(5);
    createArray(20);
}