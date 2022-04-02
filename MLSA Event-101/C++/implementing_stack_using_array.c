# include <stdio.h>
# include <stdlib.h>
struct stack{
        int *arr;
        int top;
        int size;
};

int isempty(struct stack *p){
    if(p->top==-1){
        return 1;
    }
    return 0;
}

int isfull(struct stack* p){
    if(p->top==(p->size)-1){
        return 1;
    }
    return 0;
}

void push(struct stack *ptr,int element){
    if(isfull(ptr)){
        printf("stack overflow,cannot push\n");
    }
    else{
        (ptr->top)++;
        ptr->arr[ptr->top]=element;
    }
}
int pop(struct stack *ptr){
    if(isempty(ptr)){
        printf("stack underflow,cannot pop\n");
    }
    else{
       int element=ptr->arr[ptr->top];
       (ptr->top--);
       free(&(ptr->arr[(ptr->top)+1]));
    
       return element;
    }
}


void show(struct stack *ptr){
    for(int i=0;i<=ptr->top;i++){
        printf("%d\n",ptr->arr[i]);
    }

}
int peek(struct stack *ptr,int pos){
    int arrind=-pos+1+(ptr->top);
    if(pos<=(ptr->top)+1){
    return ptr->arr[arrind];
    }
    else{
        return -1;
        }

}
int stacktop(struct stack *ptr){
    return ptr->arr[ptr->top];
}
int stackbottom(struct stack *ptr){
    return ptr->arr[0];
}
int main(){
    struct stack * s;
    s=(struct stack*)malloc(sizeof(struct stack));
    s->top=-1;
    s->size=10;
    (s->arr)=(int*)malloc((s->size)*sizeof(int));
    
   
    if(isempty(s)){
        printf("Stack is empty\n");
    }
    else{
         printf("The stack is not empty\n");
     }
    // if(isfull(s)){
    //     printf("Stack is full\n");
    // }
    // else{
    //     printf("The stack is not full\n");
    // }
    
    push(s,34);
    push(s,32);
    push(s,36);
    push(s,39);
    push(s,35);
    if(isempty(s)){
        printf("Stack is empty\n");
    }
    else{
         printf("The stack is not empty\n");
     }

     int a=pop(s);

    show(s);
    printf("element at position %d is %d\n",3,peek(s,3));
return 0;
}