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


