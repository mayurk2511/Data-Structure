#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10], i;

    for (i = 0; i < 10; i++)
        a[i] = rand() %10+80;

    for (i = 0; i < 10; i++)
    {
        printf("%d \t ", a[i]);
       
    }
}












// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int a[10];
//     int i;

//     for(i=0; i<10; i++)
//     {
//         a[i]=rand()%30+10;
//     }

//     for(i=0; i<10; i++)
//     {
//         printf("\n a[%d]: %d",i,a[i]);
//     }

// }