#include <stdio.h>
#include<stdlib.h>

struct myarray
{
    int array_size;
    int used_array_size;
    int *ptr;
};

void construct_array_details(struct myarray*name,int array_size,int used_array_size){
    (*name).array_size=array_size; //it can be write like this
    name->used_array_size=used_array_size; //and this as well
    (*name).ptr=(int*)malloc(array_size*sizeof(int));
    
};

void construc_array(struct myarray*name){
    for(int i=0;i<name->used_array_size;i++){
        printf("Enter the element %d\n->",i+1);
        scanf("%d",&name->ptr[i]);
    };
};

void print_array(struct myarray*name){
    printf("[");
    for(int i=0;i<name->used_array_size;i++){
        printf("%d,",name->ptr[i]);
    }
    printf("\b]\n");
}

void array_insertion(struct myarray*name,int index,int value)
{
    int x=name->ptr[index];
    name->ptr[index]=value;
    name->ptr[name->used_array_size]=x;
};

void change_array_element(struct myarray*name,int index,int value){
    name->ptr[index]=value;
};

int main(){
    struct myarray x;
    construct_array_details(&x,10,5);
    printf("Array size is %d,\nUsed size is %d\n",x.array_size,x.used_array_size);
    construc_array(&x);
    print_array(&x);
    // array_insertion(&x,2,69);
    // print_array(&x);
    // printf("%d",x.ptr[x.used_array_size]);


    return 0;
}

//print array after insertion completly,and learn how to delete an array element