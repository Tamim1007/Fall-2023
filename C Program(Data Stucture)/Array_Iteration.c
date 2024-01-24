#include <stdio.h>
#include <stdlib.h>

int main (){
    int n =5;// array size
    int arr[n]; // array declaration

    //random value assign
    for (int i = 0 ; i <n ;i++){
        arr[i] = rand() % 100 ;//random 2 digit value
    }

    // array print (forward printing)
    printf("Old Array: ");
    for (int i = 0 ; i <n ; i++){
        printf("%d\t",arr[i]);
    }


    // array print (backward printing)
     printf("\nNew Array: ");
    for (int i =0 ; i <n ; i++){
        printf("%d\t",arr[n-1-i]);
    }

    return 0;
}



