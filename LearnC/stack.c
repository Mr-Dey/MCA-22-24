#include <stdio.h>
#include <stdlib.h>

//stack structure
struct stack
{
    int *data;
    int index;
    int size;
};

//push operation
int push(struct stack*stack_name,int data)
{
    if(stack_name->index<stack_name->size)
    {
    stack_name->data[stack_name->index]=data;
    printf("%d is added at index %d\n",data,stack_name->index);
    stack_name->index++;
    return 0;
    }
    else
    {
        printf("Push operation Out of range. Error code -1\n");
        return -1;
    }
}

//pop operation
int pop(struct stack*stack_name)
{
    if(stack_name->index>0 && stack_name->index<=stack_name->size)
    {
        printf("%d is removed from index %d\n",stack_name->data[stack_name->index-1],stack_name->index-1);
        stack_name->index--;
        return 0;
    }
    else
    {
        printf("Pop opetion Out of range. Error code -2\n");
        return -2;
    }
}

//stack traversel
void print_stack(struct stack*stack_name)
{
    printf("[");
    for(int z=0;z<stack_name->index;z++)
    {
        printf("%d,",stack_name->data[z]);
    }
    printf("]\n");
};

//main function
int main()
{
    struct stack*stack0;
    stack0=(struct stack*)malloc(sizeof(int));
    stack0->index=0;
    stack0->size=5;

    push(stack0,10);
    push(stack0,20);
    push(stack0,30);
    push(stack0,30);
    push(stack0,30);
    push(stack0,30);
    
    print_stack(stack0);

    pop(stack0);
    pop(stack0);
    pop(stack0);
    pop(stack0);
    pop(stack0);
    pop(stack0);

    print_stack(stack0);
    return 0;
}