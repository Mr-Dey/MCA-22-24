#include <stdio.h>
#include <stdlib.h>

// this structure make link in linked list
struct node
{
    int data;
    struct node *next;
};

// this function print linked list

int linked_list_len(struct node* node_name)
    {
        int x=0;
        while(node_name!=NULL)
        {
            node_name=node_name->next;
            x++;
        }
        printf("The length of Linked list is %d\n",x);
        return x;
    }
void linkedtraversal(struct node *pointer)
{
    printf("[");
    while (pointer != NULL)
    {
        printf("%d,", pointer->data);
        pointer = pointer->next;
    };
    printf("\b]\n");
};

// adding elemnt in begining of a linked list
struct node *insert_at_first(struct node *head, int data)
{
    printf("%d is inserted as a first element\n",data);
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    
    ptr->next = head;
    return ptr;
}

// struct node* insert_in_between(struct node*node_name,int value,int index)
// {
//     printf("%d is now inserted at %d node.\n",value,index);
//     struct node*pointer=(struct node*)malloc(sizeof(struct node));
//     pointer->data=value;
//     pointer->next=index;
//     return pointer;
// }

// adding element in between of a linked list
struct node *insert_at_index(struct node *head, int data, int index)
{
    printf("%d is trying to insert at the index %d\n",data,index);
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    for (int i = 0; i != index - 1; i++)
    {
        p = p->next;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    printf("%d is now inserted at the index %d\n",data,index);
    // return head;
}

// adding element at the end
struct node *insert_at_the_end(struct node *first_element, int element_data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = element_data;

    struct node *first_element_clone = first_element;
    while (first_element_clone->next != NULL)
    {
        first_element_clone = first_element_clone->next;
    }
    // printf("now the end element data is %d\n",first_element_clone->data);
    first_element_clone->next = ptr;
    ptr->next = NULL;
    return first_element;
}

// can insert element after node.
struct node *insert_after_given_node(struct node *given_node, int data)
{
    struct node *pointer = (struct node *)malloc(sizeof(struct node));
    pointer->data = data;
    pointer->next = given_node->next;
    given_node->next = pointer;
}


//can delete in between element from linked list and heap meory. 
void deletion_between(struct node*node_name,int index)
{
    struct node*ptr=node_name;//to calcualte the length
    int len=0;
    while(ptr!=NULL)
    {
        ptr=ptr->next;
        len++;
    }
    printf("The length of Linked list are %d\n",len);
    if(index<1 || index>=len)
    {
        printf("index out of range! select between 1 to %d\n",len-1);
    }
    else
    {
        struct node*clone0=node_name;
        for(int i=0;i<index-1;i++)
        {
            clone0=clone0->next;
        }
       struct node*clone1=clone0;
       clone1=clone1->next;
        clone0->next=clone1->next;
        printf("Index %d, value %d is removed from linkedlist and heap memory.\n",index,clone1->data);
        free(clone1);
    };
}

//delete the first node
struct node* delete_node0 (struct node*node_name)
{
    printf("Deleting the first node %d.\n",node_name->data);
    struct node*node_name0=node_name->next;
    free(node_name);
    printf("This function return new node head,catch the node head.\n");
    return node_name0;
}

//delete node with value
void delete_node_value(struct node*node_name,int val)
{
    struct node*ptr=node_name;//to calcualte the length
    int len=0;
    while(ptr!=NULL)
    {
        ptr=ptr->next;
        len++;
    }
    printf("The length of Linked list are %d\n",len);

    printf("Trying to delete %d from linkedlist\n",val);
    struct node*clone=node_name;
    struct node*clone1=node_name;
    int index=0;
    while(clone->data!=val)
    {
        clone=clone->next;
        index++;
        if (index>1)
        {
            clone1=clone1->next;
        }
    }
    // if(index==0 || index==len-1)
    // {
    //     printf("First value and last value cant be deleted with this method.\n");
    // }
    // else
    // {
    // for(int i=0;i<index-1;i++)
    // {
    //     clone1=clone1->next;
    // }
    clone1->next=clone->next;
    free(clone);
    printf("The value %d is deleted from index %d.\n",val,index);
};

// main function
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = NULL;

    // printing linked list
    linkedtraversal(head);


    // head=insert_at_first(head,11);
    // linkedtraversal(head);
  
    insert_at_index(head,99,2);
    linkedtraversal(head);
    deletion_between(head,2);
    linkedtraversal(head);
    head=delete_node0(head);
    linkedtraversal(head);
    delete_node_value(head,30);
    linkedtraversal(head);


    // insert_at_the_end(head,99);
    // linkedtraversal(head);
    // insert_after_given_node(third, 33);
    // linkedtraversal(head);

    return 0;
};