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




 4. Write a program in C to copy the elements of one array into another array?
A)include<stdio.h>
int main()
{
    int arr1[5],arr2[5],i;
    printf("enter the elements in arr1 is :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<5;i++)
    {
        arr2[i]=arr1[i];
    }
    for(i=0;i<5;i++)
    {
    printf("%d",arr2[i]);
    }
}
OUTPUT:enter the elements in arr1 is :1 2 3 4 5
12345

 11. Write a program in C to sort elements of an array in ascending order?
A)include<stdio.h>
int main()
{
    int arr[6];
    int i,j,a;
    printf("enter the elements:");
    for(i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<6;i++)
    {
    for(j=i+1;j<6;j++)
    {
        if(arr[i]>arr[j])
        {
          a=arr[i];
          arr[i]=arr[j];
          arr[j]=a;
        }
    }
    }
    printf("elements in ascending order");
    for(i=0;i<6;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
OUTPUT:enter the elements:1 3 2 5 4 6
elements in ascending order123456

Q)12. Write a program in C to sort the elements of the array in descending order?
A)#include<stdio.h>
int main()
{
    int arr[5];
    int i,j,a;
    printf("enter the elements in array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[i]<arr[j])
            {
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }
        }
    }
    printf("elements in descending order\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
OUTPUT:enter the elements in array:11 2 5 10 7
elements in descending order
11
10
7
5
2

Q) 10. Write a program in C to separate odd and even integers into separate arrays?
A)#include<stdio.h>
int main()
{
    int arr[6];
    int i,even=0,odd=0;
    printf("enter the elements in the array:");
    for(i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<6;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d\n",even);
    printf("%d\n",odd);
}
OUTPUT:enter the elements in the array:2 4 6 8 1 3
4
2

Q)find the duplicate elements in the array?
A)#include<stdio.h>
int main()
{
    int arr[5];
    int i,j,duplicate=0;
    printf("enter the elements in the array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++){
            if (arr[i]==arr[j])
            {
                duplicate++;
            }
            
        }
    }
    printf("%d",duplicate);
}
OUTPUT:enter the elements in the array:1 2 3 3 2
2

Q)REMOVE DUPLICATE ELEMENTS OR UNIQUE  ELEMENTS PRINTED?
A)#include<stdio.h>
int main()
{
    int arr[5];
    int i,j,count=0;
    printf("enter the elements in the array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        count=0;
        for(j=i+1;j<5;j++){
                if(arr[i]==arr[j])
                {
                count++;
            }
}
if (count==0)
        printf("%d",arr[i]);
}
}
OUTPUT:enter the elements in the array:1 2 2 3 1
231


