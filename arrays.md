###Q)1. Write a program in C to store elements in an array and print them?
A)#include<stdio.h>
int main()
{
int arr[5],i;
printf("enter the elements in the array:");
for(i=0;i<5;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<5;i++)
{
    printf("%d",arr[i]);
}
}
OUTPUT:
enter the elements in the array:1 2 3 4 5
12345
