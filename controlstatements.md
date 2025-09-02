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
