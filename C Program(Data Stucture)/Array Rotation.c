#include<stdio.h>
#include <conio.h>

// Function to print the elements of the array
void print(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}

// Function to rotate elements of the array
int* rotation(int arr[], int n, int r, int lr)
{
    if (lr == 1)
    {
        // Rotate to the right
        for (int k = 0; k < r; k++)
        {
            int first = n - 1, second = first - 1;
            int temp = arr[n - 1];
            for (int i = 0; i < n; i++)
            {
                arr[first] = arr[second];
                first = (first - 1) % n;
                second = (first - 1) % n;
            }
            arr[0] = temp;
        }
    }
    else
    {
        // Rotate to the left
        for (int k = 0; k < r; k++)
        {
            int first = 0, second = first + 1;
            int temp = arr[0];
            for (int i = 0; i < n; i++)
            {
                arr[first] = arr[second];
                first = (first + 1) % n;
                second = (first + 1) % n;
            }
            arr[n - 1] = temp;
        }
    }

    return arr; // Returning the array after rotation
}

int main()
{
    int n = 5;
    int arr[] = {10, 20, 30, 40, 50};
    print(arr, n);

    while (5 > 1)
    {
        printf("\nThis is your array, Now how many rotations do you want? \n");
        int r;
        scanf("%d", &r);
        int lr;
        printf("Right  = 1 and Left = 0\n");
        scanf("%d", &lr);
        arr == rotation(arr, n, r, lr); // Fix: assignment instead of comparison
        printf("\n");
        print(arr, n);
    }

    getch();
}
