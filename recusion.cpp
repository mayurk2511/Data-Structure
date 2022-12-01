#include<stdio.h>
void rec(int n)
{
    printf("\n before %d",n);
    if(n<5)
    rec(n+1);
    printf("\n After %d",n);
}
int main()
{
    rec(1);
}




// winding stage