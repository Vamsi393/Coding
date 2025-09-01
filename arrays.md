###Q)1. Write a program in C to store elements in an array and print them?
```A)#include<stdio.h>
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
}```
OUTPUT:
enter the elements in the array:1 2 3 4 5
12345

Q)Write a program in C to read n number of values in an array and display them in reverse 
order?
A)#include<stdio.h>
int main()
{
    int arr[5];
    int i;
    printf("enter the elements:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=4;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
}
OUTPUT:enter the elements:1 2 3 4 5
54321

3Q) Write a program in C to find the sum of all elements of the array?
A)#include<stdio.h>
int main()
{
    int arr[6];
    int i,sum=0;
    printf("enter the elements:");
    for(i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=5;i++)
    {
        sum=sum+arr[i];
    }
    printf("sum of the array all elements is:%d",sum);
}
OUTPUT:
enter the elements:1 2 3 4 5 6
sum of the array all elements is:21

Q 9. Write a program in C to find the maximum and minimum elements in an array?
A)#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int max=arr[0];
    for(int i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("max element in the array is %d",max);
}
OUTPUT:max element in the array is 5
#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int min=arr[0];
    for(int i=0;i<5;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("max element in the array is %d",min);
}
OUTPUT:max element in the array is 1





