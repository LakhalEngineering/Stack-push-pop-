#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 5   
#define EMPTY (-1)
#define STACK_EMPTY INT_MIN

int mystack[STACK_SIZE];
int top = EMPTY;

bool push(int value)
{
    // check if stack is full
    if(top >= STACK_SIZE-1) return false;
    // if not +
    top++;
    mystack[top]=value;
    return true;

}

int pop()
{
    // check if stack empty
    if(top == EMPTY) return STACK_EMPTY;
    // if not -
    int result = mystack[top];
    top--;
    return result;
}

int main(){
    push(56);
    push(87);
    push(13);
    push(77);

    int t = pop();
    while((t = pop()) != STACK_EMPTY){
        printf("t = %d\n",t);
    }
    
}