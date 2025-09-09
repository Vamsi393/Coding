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
Q)power of the number?
A)#include<stdio.h>
#include<math.h>
int main()
{
    int result,base,exponent;
    printf("enter the base number:");
    scanf("%d",&base);
    printf("enter the exponent number:");
    scanf("%d",&exponent);
    result=pow(base,exponent);
    printf("power of the numbers is %d",result);
}
OUTPUT:enter the base number:5
enter the exponent number:2
power of the numbers is 25


Q)squareroot of the number?
A)#include<stdio.h>
#include<math.h>
int main()
{
    int n,sqareroot;
    printf("enter the number of square:");
    scanf("%d",&n);
    sqareroot=sqrt(n);
    printf("square of the number is %d",sqareroot);
    
}
OUTPUT:enter the number of square:64
square of the number is 8

Q)SQUARE OF THE NUMBER?
#include<stdio.h>
#include<math.h>
int main()
{
   int n,result;
   printf("enter the number:");
   scanf("%d",&n);
   result=n*n;
   printf("square of the number is %d",result);
}
OUTPUT:enter the number:2
square of the number is 4
enter the number:9
square of the number is 81
enter the number:12
square of the number is 144

Q)SUM OF THE DIGITS OF NUMBER?
A)#include<stdio.h>
int main()
{
    int n,rem,sum=0;
    printf("enter the number of digits:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
     printf("%d",sum);
    
}
OUTPUT:enter the number of digits:12345
15
Q)PRODUCT OF THE NUMBER OF DIGITS?
A)#include<stdio.h>
int main()
{
    int n,rem,product=1;
    printf("enter the digits of number:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        product=product*rem;
        n=n/10;
    }
    printf("product of the number is %d",product);
}
OUTPUT:enter the digits of number:247
product of the number is 56

Q)FACTORIAL OF THE NUMBER?
A)#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("enter the factorial number:");
    scanf("%d",&n);
    while(n>0)
    {
        fact=fact*n;
        n--;
    }
    printf("factorial of the number is %d",fact);
}
OUTPUT:enter the factorial number:5
factorial of the number is 120

Q)REVERSE OF THE NUMBER?
A)#include<stdio.h>
int main()
{
    int n,reverse=0,rem;
    printf("enter the digits of number:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        reverse=(reverse*10)+rem;
        n=n/10;
    }
    printf("reverse of the number is %d",reverse);
}
OUTPUT:enter the digits of number:123
reverse of the number is 321

Q)NUMBER IS PALINDROME OR NOT?
A)#include<stdio.h>
int main()
{
    int n,reverse=0,rem,original;
    printf("enter the digits of number:");
    scanf("%d",&n);
    original=n;
    while(n>0)
    {
        rem=n%10;
        reverse=(reverse*10)+rem;
        n=n/10;
    }
    printf("reverse of the number is %d\n",reverse);
    if(reverse == original)
    {
    printf("this number is palindrome :%d",original);
    }
    else
    {
        printf("this number is not palindrome:%d",original);
    }
}
OUTPUT:enter the digits of number:345
reverse of the number is 543
this number is not palindrome:345
enter the digits of number:454
reverse of the number is 454
this number is palindrome :454 



