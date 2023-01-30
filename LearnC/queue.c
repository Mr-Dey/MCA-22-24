#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int front;
    int end;
    int * array;
};

int isFull(struct queue* queue_name){
    if (queue_name->end==queue_name->size-1){
        return 1;
    }
    else{
        return 0;

    };
};

int isEmpty(struct queue*queue_name){
    if(queue_name->end<queue_name->size-1){
        printf("Queue has %d space left.\n",(queue_name->size-1)-queue_name->end);
        return 1;
    }
    else{
        printf("queue is full");
        return 0;
    }
}

void add_in_queue(struct queue*queue_name,int value){
    if(isFull(queue_name)){
        printf("Queue overflow");
    }
    else
    {
        queue_name->end++;
        queue_name->array[queue_name->end]=value;
    };
};



int traversal_array(struct queue*queue_name){
    printf("[");
    for(int i=0;i<queue_name->size;i++){
        printf("%d,",queue_name->array[i]);
    }printf("\b]");
}

int main()
{
    struct queue q;
    q.end=-1;
    q.front=0;
    q.size=2;
    q.array=(int*)malloc(q.size*sizeof(int));    
    
    add_in_queue(&q,10);
    add_in_queue(&q,12);

    traversal_array(&q);
    
    // isEmpty(&q);
}