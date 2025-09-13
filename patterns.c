```Q)
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * * 
* * * * * * * 
* * * * * * * *
A)#include<stdio.h> 
int main()
{
    int n,rows,cols;
    printf("enter the number:");
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++)
    {
        for(cols=1;cols<=rows;cols++)
        {
        printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}

Q)
* * * * * * * 
* * * * * * * 
* * * * * * * 
* * * * * * * 
* * * * * * * 
* * * * * * * 
* * * * * * * 
A)#include<stdio.h>
int main()
{
    int rows,cols,n;
    printf("enter the number:");
    scanf("%d",&n);
    for(rows=0;rows<=n;rows++)
    {
        for(cols=0;cols<=n;cols++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

Q)
11111111
22222222
33333333
44444444
55555555
66666666
77777777
88888888
A)#include<stdio.h>
int main()
{
    int rows,cols,n;
    printf("enter the number:");
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++)
    {
        for(cols=1;cols<=n;cols++)
        {
            printf("%d",rows);
        }
        printf("\n");
    }
}

Q)123456
123456
123456
123456
123456
123456
A)#include<stdio.h>
int main()
{
    int rows,cols,n;
    printf("enter the number:");
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++)
    {
        for(cols=1;cols<=n;cols++)
        {
            printf("%d",cols);
        }
        printf("\n");
    }
}

Q)
1
22
333
4444
55555
A)#include<stdio.h>
int main()
{
    int rows,cols,n;
    printf("enter the number:");
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++)
    {
        for(cols=1;cols<=rows;cols++)
        {
            printf("%d",rows);
        }
        printf("\n");
    }
}

Q)
1
12
123
1234
12345
#include<stdio.h>
int main()
{
    int rows,cols,n;
    printf("enter the number:");
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++)
    {
        for(cols=1;cols<=rows;cols++)
        {
            printf("%d",rows);
        }
        printf("\n");
    }
}

Q)
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 21 
A)
#include<stdio.h>
int main()
{
    int rows,cols,n,count=1;
    printf("enter the number:");
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++)
    {
        for(cols=1;cols<=rows;cols++)
        {
            printf("%d ",count++);
        }
        printf("\n");
    }
}

Q)
A
BB
CCC
DDDD
EEEEE
A)#include<stdio.h>
int main()
{
    int rows,cols,n;
    printf("enter the number:");
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++)
    {
        for(cols=1;cols<=rows;cols++)
        {
            printf("%c",rows+64);
        }
        printf("\n");
    }
}

Q)
A
AB
ABC
ABCD
A)#include<stdio.h>
int main()
{
    int rows,cols,n;
    printf("enter the number:");
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++)
    {
        for(cols=1;cols<=rows;cols++)
        {
            printf("%c",cols+64);
        }
        printf("\n");
    }
}

Q)
* * * * * * 
* * * * * 
* * * * 
* * * 
* * 
* 
A)
#include<stdio.h>
int main()
{
    int rows,cols,n;
    printf("enter the number:");
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++)
    {
        for(cols=1;cols<=n-rows+1;cols++)
        {
            printf("* ");
        }
        printf("\n");
    }
}


Q)
6 6 6 6 6 6 
5 5 5 5 5 
4 4 4 4 
3 3 3 
2 2 
1 
A)
#include<stdio.h>
int main()
{
    int rows,cols,n;
    printf("enter the number:");
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++)
    {
        for(cols=1;cols<=n-rows+1;cols++)
        {
            printf("%d ",n-rows+1);
        }
        printf("\n");
    }
}

Q)
5 4 3 2 1 
5 4 3 2 
5 4 3 
5 4 
5 
A)
#include<stdio.h>
int main()
{
    int rows,cols,n;
    printf("enter the number:");
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++)
    {
        for(cols=1;cols<=n-rows+1;cols++)
        {
            printf("%d ",n-cols+1);
        }
        printf("\n");
    }
}

Q)
    *
   **
  ***
 ****
*****
A)
#include<stdio.h>
int main()
{
    int rows,cols,n,spaces;
    printf("enter the number:");
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++)
    {
        for(spaces=1;spaces<=n-rows;spaces++)
        {
            printf(" ");
        }
            for(cols=1;cols<=rows;cols++)
            {
                printf("*");
            }
            printf("\n");
        }
}
Q)
     5
    44
   333
  2222
 11111
A)
#include<stdio.h>
int main()
{
    int rows,cols,n,spaces;
    printf("enter the number:");
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++)
    {
        for(spaces=1;spaces<=n-rows+1;spaces++)
        {
            printf(" ");
        }
        for(cols=1;cols<=rows;cols++)
        {
            printf("%d",n-rows+1);
        }
        printf("\n");
    }
}


