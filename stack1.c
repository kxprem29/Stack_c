#include<stdio.h>
#include<stdlib.h>
#define N 4
int stack[N];
int x;
int top=-1;
//Insertion in stack
void push(int data){
   if(top==N-1) printf("\n Stack overflow");
   else {
    top++;
    stack[top]=data;
   }
}
//Deletion from stack
void pop(){
    int item;
    if(top==-1) printf("\nStack underflow");
    else{
        item=stack[top];
        top--;
        printf("\nPopped element is %d",item);
    }
}
//Displaying top element
void peek(){
    if(top==-1) printf("Stack is empty!");
    else{
        printf("%d",stack[top]);
    }
}
//Traversal
void display(){
    for(int i=top;i>=0;i--){
        printf("%d \t ",stack[i]);
    }
}
void main(){
    int ch;
    do{
    printf("\nEnter your choice:\n 1.Push\n 2.Pop\n 3.Peek\n 4.Display\n 5.Exit\n ");
    scanf("%d",&ch);
    switch(ch){
        case 1: printf("Enter element to be pushed");
        scanf("%d",&x);
        push(x); break;
        case 2: pop(); break;
        case 3: peek(); break;
        case 4: display(); break;
        case 5: exit(0); break;
        default : printf("\nInvalid"); break;
    }
    } while (ch!=5);
}