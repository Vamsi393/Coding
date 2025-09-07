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

Q)print square of array elements in c?
A)#include<stdio.h>
int main()
{
    int arr[10];
    int i,n,square;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements in the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        square=arr[i]*arr[i];
        printf("%d\n",square);
        
    }
    
}
OUTPUT:enter the size of array:5
enter the elements in the array:1 2 3 4 5
1
4
9
16
25
array

Q)print ascii values using array in c?
A)#include<stdio.h>
int main()
{
    char arr[10];
    int i,n;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the elements in the array");
    for(i=0;i<n;i++)
    {
        scanf(" %c",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("ascii value of a character is '%c' %d\n",arr[i],arr[i]);
    }
}
OUTPUT:enter the size of array4
enter the elements in the arraya b c d
ascii value of a character is 'a' 97
ascii value of a character is 'b' 98
ascii value of a character is 'c' 99
ascii value of a character is 'd' 100

Q)Write a program in C to find the majority element of an array.
A)#include<stdio.h>
int main()
{
    int arr[10];
    int i,j,n,count;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements in the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if (arr[i]==arr[j])
            {
                count++;
            }
            if(count>n/2)
            {
                printf("majority of the element is:%d\n",arr[i]);
                return 0;
            }
        }
        printf("there is no majority elements in the array");
        return 0;
        
    }
    
    
    
}
OUTPUT:enter the size of array:3
enter the elements in the array:1 2 3
there is no majority elements in the array
enter the size of array:5
enter the elements in the array:1 2 1 4 1
majority of the element is:1


Q)1. Write a program to check if a given element is present in an array.
A)#include<stdio.h>
int main()
{
    int arr[10];
    int i,n,key;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements in the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the key number:");//key means element inside key number is present or not
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if (arr[i]==key)
        {
            printf("found at the elemnet index is:%d",i);
            break;
        }
    }
    if(arr[i]!=key)
    {
        printf("there is no found at the element");
    }
    
}

OUTPUT:enter the size of array:5
enter the elements in the array:1 2 3 4 5
enter the key number:4
found at the elemnet index is:3
enter the size of array:5
enter the elements in the array:1 2 3 4 5
enter the key number:7
there is no found at the element

Q)Write a program in C for adding two matrices of the same size?
A)#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],r1,r2,c1,c2,i,j;
    printf("enter rows of matrix a:");
    scanf("%d",&r1);
    printf("enter the columns of matrix a:");
    scanf("%d",&c1);
    printf("enter the rows of materix b:");
    scanf("%d",&r2);
    printf("enter the columns of matrix b:");
    scanf("%d",&c2);
    //reading of matrix a
     printf("enter the matrix a elements:",(r1*c1));
     for(i=0;i<r1;i++)
     {
         for(j=0;j<c1;j++)
         {
         scanf("%d",&a[i][j]);
         }
     }
     //reading of matrix b;
     printf("enter the matrix b elements:",(r2*c2));
     for(i=0;i<r2;i++)
     {
         for(j=0;j<c2;j++)
         {
             scanf("%d",&b[i][j]);
         }
     }
     //addition logic
     for(i=0;i<r1;i++)
     {
         for(j=0;j<c1;j++)
         {
             c[i][j]=a[i][j]+b[i][j];
         }
     }
     //printing of matrix a;
     printf("the matrix a is given:\n");
     for(i=0;i<r1;i++)
     {
         for(j=0;j<c1;j++)
         {
             printf("%d\t",a[i][j]);
         }
         printf("\n");
     }
     //printing matrix b;
     printf("the matrix b is given:\n");
     for(i=0;i<r2;i++)
     {
         for(j=0;j<c2;j++)
         {
             printf("%d\t",b[i][j]);
         }
         printf("\n");
     }
     //printing matrx c is ;
     printf("the matrix c is given:\n");
     for(i=0;i<r1;i++)
     {
         for(j=0;j<c1;j++)
         {
             printf("%d\t",c[i][j]);
         }
         printf("\n");
     }
     return 0;
     
}
OUTPUT:
enter rows of matrix a:3
enter the columns of matrix a:3
enter the rows of materix b:3
enter the columns of matrix b:3
enter the matrix a elements:1
2
3
4
5
6
7
8
9
enter the matrix b elements:1
2
3
4
5
6
7
8
9
the matrix a is given:
1	2	3	
4	5	6	
7	8	9	
the matrix b is given:
1	2	3	
4	5	6	
7	8	9	
the matrix c is given:
2	4	6	
8	10	12	
14	16	18


Q). Write a program in C for the subtraction of two matrices.
A)#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,r1,c1,r2,c2;
    printf("enter the how many rows in matrix a:");
    scanf("%d",&r1);
    printf("enter the how many columns in matrix a:");
    scanf("%d",&c1);
    printf("enter the how many rows in matrix b:");
    scanf("%d",&r2);
    printf("enter the how many columns in matrix b:");
    scanf("%d",&c2);
    //reading of matrix a;
    printf("enter the elements in matrix a:",(r1*c1));
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        scanf("%d",&a[i][j]);
    }
    //reading of matrix b;
    printf("enter the elements in matrix b:",(r2*c2));
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    //logic of subtraction;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
    }
    //printing of matrix a ;
    printf("the matrix a is given:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
  }
  //printing of matrix b;
  printf("the matrix b is given:\n");
  for(i=0;i<r2;i++)
  {
      for(j=0;j<c2;j++)
      {
          printf("%d\t",b[i][j]);
      }
      printf("\n");
  }
  //printing the matrix c;
  printf("the matrix c is given:\n");
  for(i=0;i<r1;i++)
  {
      for(j=0;j<c1;j++)
      {
          printf("%d\t",c[i][j]);
      }
      printf("\n");
  }
  return 0;
  
}
output:enter the how many rows in matrix a:2
enter the how many columns in matrix a:2
enter the how many rows in matrix b:2
enter the how many columns in matrix b:2
enter the elements in matrix a:1
2
3
4
enter the elements in matrix b:1
2
3
4
the matrix a is given:
1	2	
3	4	
the matrix b is given:
1	2	
3	4	
the matrix c is given:
0	0	
0	0


Q). Write a program in C for the multiplication of two square matrices?
A)#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2,i,j;
    printf("enter the how many rows in matrix a:");
    scanf("%d",&r1);
    printf("enter the how many columns in matrix a:");
    scanf("%d",&c1);
    printf("enter the how many rows in matrix b:");
    scanf("%d",&r2);
    printf("enter the how many columns in matrix b:");
    scanf("%d",&c2);
    //reading of matrix a;
    printf("enter the elements in matrix a is\n",(r1*c1));
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //reading of matrix b;
    printf("enter the elements in matrix b is\n",(r2*c2));
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    //logic of multiplication
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            c[i][j]=a[i][j]*b[i][j];
        }
    }
    //printing matrix a;
    printf("the original matrix a is:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    //printing matrix b is ;
    printf("the original matrix b is:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    //printing matrix c is
    printf("the original matrix c is:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}
OUTPUT:enter the how many rows in matrix a:2
enter the how many columns in matrix a:2
enter the how many rows in matrix b:
2
enter the how many columns in matrix b:2
enter the elements in matrix a is
1
2
3
4
enter the elements in matrix b is
1
2
3
4
the original matrix a is:
1	2	
3	4	
the original matrix b is:
1	2	
3	4	
the original matrix c is:
1	4	
9	16


Q)Write a program in C to find the transpose of a given matrix?
A)#include<stdio.h>
int main()
{
    int a[10][10],t[10][10],i,j,r,c;
    printf("enter the how many rows in matrix:");
    scanf("%d",&r);
    printf("enter the how many columns in matrix:");
    scanf("%d",&c);
    //reading of matrix
    printf("enter the elements in matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //logic of transpose
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            t[j][i]=a[i][j];//swap indicates
        }
    }
    //printing of matrix a;
    printf("original matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
        
    }
    //printing of transpose is ;
    printf("transpose matrix is:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",t[i][j]);
        }
        printf("\n");
        
    }
    return 0;
}
OUTPUT:enter the how many rows in matrix:2
enter the how many columns in matrix:2
enter the elements in matrix:
1
2
3
4
original matrix is:
1	2	
3	4	
transpose matrix is:
1	3	
2	4

Q). Write a program in C to find the sum of the right diagonals of a matrix?
A)#include<stdio.h>
int main()
{
    int a[10][10],i,j,r,c,sum=0;
    printf("enter the rows in matrix:");
    scanf("%d",&r);
    printf("enter the columns in matrix:");
    scanf("%d",&c);
    //reading of matrix;
    printf("enter the elements in matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //printing of matrix;
    printf("original matrix given is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
        
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("sum of the right diaognlas in matrtix is %d",sum);
}
OUTPUT:
enter the rows in matrix:3
enter the columns in matrix:3
enter the elements in matrix:
1
2
3
4
5
6
7
8
9
original matrix given is:
1	2	3	
4	5	6	
7	8	9	
sum of the right diaognlas in matrtix is 15

Q). Write a program in C to find the sum of the left diagonals of a matrix?
A) #include<stdio.h>
 int main()
{
    int a[10][10],i,j,r,c,sum=0;
    printf("enter the rows in matrix:");
    scanf("%d",&r);
    printf("enter the columns in matrix:");
    scanf("%d",&c);
    //reading of matrix;
    printf("enter the elements in matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //printing of matrix;
    printf("original matrix given is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
        
            if(i==j)
       {
             sum=sum+a[i][j];
        }
        
    }
}
printf("sum of the left diaognlas in matrtix is %d",sum);
}
OUTPUT:enter the rows in matrix:3
enter the columns in matrix:3
enter the elements in matrix:
1
2
3
4
5
6
7
8
9
original matrix given is:
1	2	3	
4	5	6	
7	8	9	
sum of the left diaognlas in matrtix is 15

    

Q). Write a program in C to find the sum of rows and columns of a matrix?
A)#include<stdio.h>
int main()
{
    int a[10][10],i,j,r,c;
    int sumrow=0,sumcolumn=0;
    printf("enter the rows in matrix:");
    scanf("%d",&r);
    printf("enter the columns in matrix:");
    scanf("%d",&c);
    //reading of matrix;
    printf("enter the elements in matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //printing of matrix;
    printf("original matrix given is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    //logic
        for(i=0;i<r;i++)
        {
            sumrow=0;
            for(j=0;j<c;j++)
            {
             sumrow=sumrow+a[i][j];   
            }
            printf("sum of the rows is %d\n",sumrow);
        }
        for(i=0;i<r;i++)
        {
            sumcolumn=0;
            for(j=0;j<c;j++)
            {
             sumcolumn=sumcolumn+a[j][i];   
            }
            printf("sum of the column is %d\n",sumcolumn);
        }
}
OUTPUT:enter the rows in matrix:3
enter the columns in matrix:3
enter the elements in matrix:
1
2
3
4
5
6
7
8
9
original matrix given is:
1	2	3	
4	5	6	
7	8	9	
sum of the rows is 6
sum of the rows is 15
sum of the rows is 24
sum of the column is 12
sum of the column is 15
sum of the column is 18
