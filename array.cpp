#include<stdio.h>
#define SIZE 10
//#define pr printf
int a[SIZE],top=-1;
void push(int val)
{
    
    
    if(top>=10)
    {
        printf("Stack Overflow");

    }
    else
    {
    
        printf("Enter value :");
        scanf("%d",val);
        
        a[++top]=val;
    }

}
void pop(int x)
{
    if(top<0)
    {
        printf("stack underflow");

    
    }
    else
    {
        x=a[top--];
    }
}
int main()
{
    push(10);
    pop(0);
                                                                                                                                                                                                                                                           
}