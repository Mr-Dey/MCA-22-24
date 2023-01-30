#include <stdio.h>

void bubbleshort(int *arr_name, int arr_size)
{
    for (int x = 0; x < arr_size - 1; x++)
    {
        for (int y = 0; y < arr_size - 1 - x; y++)
        {
            if (arr_name[y] > arr_name[y + 1])
            {
                int temp = arr_name[y + 1];
                arr_name[y + 1] = arr_name[y];
                arr_name[y] = temp;
            }
        }
    }
}

void print_arr(int *arr_name, int arr_size)
{
    printf("[");
    for (int x = 0; x < arr_size; x++)
    {
        printf("%d,", arr_name[x]);
    }
    printf("\b]\n");
};
int main()
{
    int arr[] = {10, 25, 9, 5, 15, 18};
    int arr_size = sizeof arr / sizeof arr[0];
    print_arr(arr, arr_size);   // before sort
    bubbleshort(arr, arr_size); // bubblesort
    print_arr(arr, arr_size);   // after sort

    return 0;
}