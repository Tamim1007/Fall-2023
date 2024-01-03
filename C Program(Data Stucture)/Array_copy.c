#include <stdio.h>
#include<stdlib.h>
#include <conio.h>

int main(){

    int n =5;// array size
    int arr[n]; // array declaration

    //random value assign
    for (int i = 0 ; i <n ;i++){
        arr[i] = rand() % 100 ;//random 2 digit value
    }

	// Method 1
	int new_array [n];

	// Array is copied by index to index
	for (int i = 0 ; i < 5 ; i++){
		new_array[i] = arr[i];
	}

	 // array print (forward printing) : Old Array
	  printf("Old Array : ");
    for (int i = 0 ; i <n ; i++){
        printf("\t%d", arr[i]);
    }

	 // array print (forward printing) : New Array
	  printf("\nNew Array : ");
    for (int i = 0 ; i <n ; i++){
        printf("\t%d", new_array[i]);
    }

    getch();
}
