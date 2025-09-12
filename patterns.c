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




