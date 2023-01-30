#include <stdio.h>

int binarysearch(int array_name[],int value,int size){
    printf("running binarysearch\n");
    int arr_index_size=size-1;
    int low,mid,high;
    low=0;
    high=arr_index_size;
    

    while(low!=high)
    {
        mid=(low+high)/2;
        printf("mid is now set to %d\n",mid);
        if(array_name[mid]==value)
        {
            printf("returning mid\n");
            return mid;
        }
        else if (array_name[mid]<value)
        {
            printf("mid<value\n");
            low=mid+1;
        }
        else
        {
            printf("mid>value\n");
            high=mid-1;
        }
    }

}

int main()
{
    int arr[]={10,20,30,40,50};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Enter the value for search.\n");
    int search_element;
    scanf("%d",&search_element);
    int x=binarysearch(arr,search_element,size);
    
    printf("The value %d is at index %d\n",search_element,x);
}
