### fibanocci series?
```#include<stdio.h>
int main(){
int n,result;
int a=0,b=1;
printf("enter the value of n");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    result=a+b;
    a=b;
    b=result;
}
printf("fibanoci number is %d",result);
}
OUTPUT:
enter the value of n5
fibanoci number is 8```

Q)swap of two numbers?
include<stdio.h>
int main()
{
    int n1,n2,temp;
    printf("enter the n1 value");
    scanf("%d",&n1);
    printf("enter the n2 value");
    scanf("%d",&n2);
    temp=n1;
    n1=n2;
    n2=temp;
    printf("swap numbers of two numbers a is %d,b is %d",n1,n2);
    
    
    
}
