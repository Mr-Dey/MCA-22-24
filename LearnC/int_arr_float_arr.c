#include <stdio.h>
int main()
{
    printf("Enter the size of array(Both int and float array size would be same as you entered!)\n");
    int size;
    scanf("%d", &size);
    int arr_int[size];
    float arr_float[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the value of arr_int index %d.\n", i);
        scanf("%d", &arr_int[i]);
    }
    printf("Thank you.\n\n\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter the value of arr_float index %d.\n", i);
        scanf("%f", &arr_float[i]);
    }
    printf("Thank you.\n\n\n\n");

    printf("\nThe Array of int are!\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr_int[i]);
    }
    printf("\nThe Array of float are!\n");
    for (int i = 0; i < size; i++)
    {
        printf("%f ", arr_float[i]);
    }
    return 0;
}