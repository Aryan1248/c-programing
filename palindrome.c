#include<stdio.h>
#define size 10

typedef struct stack{
    int arr[size];
    int top;
}stack;

stack stk;
int isEmpty(){
    return stk.top==-1;
}
int isFull(){
    return stk.top==size-1;
}
void push(int num){
    if(!isFull()){
        stk.top++;
        stk.arr[stk.top] = num;
    }
    else{
        printf("Stack is Full");
    }
}
int pop(){
    if(!isEmpty()){
        int item;
        item = stk.arr[stk.top];
        stk.top--;
        return item;
    }
    else{
        printf("Stack is Empty");
        return 0;
    }
}
int peek(){
    if(!isEmpty())
    return stk.arr[stk.top];
    else printf("Stack is Empty");
    return 0;
}
void show(){
    for(int i=stk.top; i>=0; i--){
        printf("%d ",stk.arr[i]);
    }
    printf("\n");
}

int main(){
    char str[size];
    printf("enter any string:");
    gets(str);
    char reverse[size];

    int i=0;
    while(str[i]!='\0')
    {
        push(str[i]);
        i++;
    }
    i=0;
    while(!isEmpty())
    {
        reverse[i]=pop();
        i++;
    }
    reverse[i]='\0';
    printf("reverse=%s",reverse);
}


