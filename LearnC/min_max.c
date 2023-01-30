#include <stdio.h>

int max();
int min();

int main()
{
    int arr[] = {10, 20, 30, 40, 90, 50, 5};
    int array_size = sizeof arr / sizeof arr[0];
    int max0 = max(arr, array_size);
    printf("Max size of array %d\n", max0);
    int min0=min(arr,array_size);
    printf("Min size of array %d\n",min0);
}

int max(int array_name[], int array_size)
{
    int max = 0;
    for (int i = 0; i < array_size; i++)
    {
        if (array_name[i] > max)
        {
            max = array_name[i];
        }
    }
    return max;
}

int min(int arr_name[], int array_size)
{
    int max=0;
    int min;
    for(int i=0;i<array_size;i++)
    {
        if(arr_name[i]>max)
        {
            max=arr_name[i];
        }
    }
    for(int i=0;i<array_size;i++)
    {
        if(arr_name[i]<max)
        {
            max=arr_name[i];
            min=arr_name[i];
        }
    }
    return min;
}
