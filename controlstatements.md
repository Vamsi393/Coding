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

Q)NUMBER IS PRIME OR NOT?
A)#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("this is not prime number %d",n);
            break;
        }
        else
        {
            printf("this is prime number%d",n);
        }
    }
}

OUTPUT:enter the number:4
this is not prime number 4
enter the number:3
this is prime number3

Q)NUMBER IS ARMSTRONG OR NOT?
A)#include<stdio.h>
int main()
{
    int n,rem,cube,sum=0,vamsi;
    printf("enter the number:");
    scanf("%d",&n);
    vamsi=n;
    while(n>0)
    {
        rem=n%10;
        cube=rem*rem*rem;
        sum=sum+cube;
        n=n/10;
    }
    if(vamsi==sum)
    {
        printf("this is armstrong number");
    }
    else
    {
        printf("this is not armstrong number");
    }
}
OUTPUT:enter the number:153
this is armstrong number
enter the number:123
this is not armstrong number

Q)WRITE A C PROGRAM CONVERT DECIMAL NUMBER TO BINARY NUMBER?
A)#include<stdio.h>
int main()
{
    int n,i=0,j,binary[32];
    printf("enter the decimal number:");
    scanf("%d",&n);
    while(n>0)
    {
        binary[i]=n%2;
        n=n/2;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",binary[j]);
    }
    return 0;
}
OUTPUT:enter the decimal number:29
11101
enter the decimal number:9
1001

Q)WRITE A C PROGRAM CONVERT DECIMAL NUMBER TO octal NUMBER?
A)#include<stdio.h>
int main()
{
    int n,octal[32],i=0,j;
    printf("enter the decimal number:");
    scanf("%d",&n);
    while(n>0)
    {
        octal[i]=n%8;
        n=n/8;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",octal[j]);
    }
}
OUTPUT:enter the decimal number:30
36

Q)WRITE A C PROGRAM CONVERT DECIMAL NUMBER TO HEXANUMBER?
A)#include<stdio.h>
int main()
{
    int n,i=0,j,hexa[32];
    printf("enter the decimal number:");
    scanf("%d",&n);
    while(n>0)
    {
    hexa[i]=n%16;
    n=n/16;
    i++;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%x",hexa[j]);
    }
    
}
OUTPUT:enter the decimal number:30
1e

Q)WRITE A C PROGRAM CONVERT BINARY NUMBER TO DECIMAL NUMBER?
A)#include<stdio.h>
int main()
{
int n,decimal=0,base=1,rem;
printf("enter the binarry number:");
scanf("%d",&n);
while(n>0)
{
    rem=n%10;
    decimal=decimal+rem*base;
    n=n/10;
    base=base*2;
}
printf("%d",decimal);

}
OUTPUT:enter the binarry number:1110
14
enter the binarry number:10101
21

Q)Q)WRITE A C PROGRAM CONVERT octal NUMBER TO DECIMAL NUMBER?
A)#include<stdio.h>
int main()
{
    int n,decimal=0,base=1,rem;
    printf("enter the octal number:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        decimal=decimal+rem*base;
        n=n/10;
        base=base*8;
    }
    printf("decimal number is=%d",decimal);
}
OUTPUT:enter the octal number:234
decimal number is=156
enter the octal number:131
decimal number is=89

Q))WRITE A C PROGRAM CONVERT HEXA DECIMAL NUMBER TO DECIMAL NUMBER?
A)#include<stdio.h>
int main()
{
    int n,decimal=0,base=1,rem;
    printf("enter the hexa decimal number:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        decimal=decimal+rem*base;
        n=n/10;
        base=base*16;
    }
    printf("decimal number=%d",decimal);
    return 0;
}
OUTPUT:enter the hexa decimal number:1e2a
decimal number=1
enter the hexa decimal number:1011
decimal number=4113

Q)WRITE A PROGRAM FIND THE LARGEST OF TWO NUMBERS?
A)
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("emter the number a:");
    scanf("%d",&a);
    printf("enter the number b:");
    scanf("%d",&b);
    //printf("enter the number c:");
    //scanf("%d",&c);
  if(a>b)
   {
       printf(" larger number is a");
  }
   else
   {
       printf(" larger number is b");
   }
  // else if (c>a)
   //{
       //printf("c is larger");
   //}
  // else
   //printf("three numbers are equal");
  // int res=(a>b)?((a>c)?a:c):((b>c)?b:c);
   //printf("largest of three numbers is %d",res);
  //int res=(a>b)?printf("a is larger"):printf("b is larger");
}
OUTPUT:
emter the number a:45
enter the number b:99
 larger number is b
USING TERNARY OPERATOR?
A)
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("emter the number a:");
    scanf("%d",&a);
    printf("enter the number b:");
    scanf("%d",&b);
    //printf("enter the number c:");
    //scanf("%d",&c);
  //if(a>b)
   //{
      // printf(" larger number is a");
  //}
   //else
   //{
       //printf(" larger number is b");
   //}
  // else if (c>a)
   //{
       //printf("c is larger");
   //}
  // else
   //printf("three numbers are equal");
  // int res=(a>b)?((a>c)?a:c):((b>c)?b:c);
   //printf("largest of three numbers is %d",res);
  int res=(a>b)?printf("a is larger"):printf("b is larger");
}
OUTPUT:
emter the number a:89
enter the number b:12
a is larger


Q)WRITE A PROGRAM FIND THE LARGEST OF THREE NUMBERS?
A)#include<stdio.h>
int main()
{
    int a,b,c;
    printf("emter the number a:");
    scanf("%d",&a);
    printf("enter the number b:");
    scanf("%d",&b);
    printf("enter the number c:");
    scanf("%d",&c);
  if(a>b)
  if (a>c)
   {
      printf(" larger number is a");
  }
   else
   {
       printf(" larger number is c");
   }
   else
   if(b>c)
   {
       printf("b is larger");
   }
   else
   {
       printf("c is larger");
   }
 // else
   //printf("three numbers are equal");
  // int res=(a>b)?((a>c)?a:c):((b>c)?b:c);
   //printf("largest of three numbers is %d",res);
  //int res=(a>b)?printf("a is larger"):printf("b is larger");
}
OUTPUT:
emter the number a:34
enter the number b:45
enter the number c:67
c is larger
OR
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("emter the number a:");
    scanf("%d",&a);
    printf("enter the number b:");
    scanf("%d",&b);
    printf("enter the number c:");
    scanf("%d",&c);
  if(a>b && a>c)
  printf("a is larger");
  else if (b>c)
  printf("b is larger");
  else 
  printf("c is larger");
 // else
   //printf("three numbers are equal");
  // int res=(a>b)?((a>c)?a:c):((b>c)?b:c);
   //printf("largest of three numbers is %d",res);
  //int res=(a>b)?printf("a is larger"):printf("b is larger");
}
USING TERNARY OPERATOR?
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("emter the number a:");
    scanf("%d",&a);
    printf("enter the number b:");
    scanf("%d",&b);
    printf("enter the number c:");
    scanf("%d",&c);
 // if(a>b && a>c)
  //printf("a is larger");
 // else if (b>c)
  //printf("b is larger");
  //else 
  //printf("c is larger");
 // else
   //printf("three numbers are equal");
   int res=(a>b)?((a>c)?a:c):((b>c)?b:c);
   printf("largest of three numbers is %d",res);
  //int res=(a>b)?printf("a is larger"):printf("b is larger");
}
OUTPUT:
emter the number a:34
enter the number b:45
enter the number c:47
largest of three numbers is 47


Q)WRITE A PROGRAM MINI CALCULATOR USING SWITCH CASE?
A)#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf ("enter the operator op:");
    scanf(" %c",&op);
    switch(op)
    {
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        printf("%d",a/b);
        break;
        case '%':
        printf("%d",a%b);
        break;
        default :
        printf("invalid operator");
        
    }
}
OUTPUT:
enter the value of a:56
enter the value of b:67
enter the operator op:+
123
enter the value of a:34
enter the value of b:6
enter the operator op:*
204

Q)WRITE A PROGRAM ATM MACHINE USING SWITCH CASE?
A)#include<stdio.h>
int main()
{
    int n,notes,choice;
    printf("enter the amount:");
    scanf("%d",&n);
    printf("enter the chice u be want:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 100:
        notes=n/100;
        printf(" %d",notes);
        n=n%100;
        break;
        
        case 50:
        notes=n/50;
        printf(" %d",notes);
        n=n%50;
        break;
        
        case 1000:
        notes=n/1000;
        printf(" %d",notes);
        n=n%1000;
        break;
        
        case 500:
        notes=n/500;
        printf(" %d",notes);
        n=n%500;
        break;
        
        case 200:
        notes=n/200;
        printf(" %d",notes);
        n=n/200;
        break;
        
        case 10:
        notes=n/10;
        printf(" %d",notes);
        n=n/10;
        break;
        
        case 5:
        notes=n/5;
        printf(" %d",notes);
        n=n/5;
        break;
        
        case 2:
        notes=n/2;
        printf(" %d",notes);
        n=n/2;
        break;
        
        case 1:
        notes=n/1;
        printf(" %d",notes);
        n=n/1;
        break;
        
        default:
        printf("invalid money");
}
}
OUTPUT:
enter the amount:12000
enter the chice u be want:100
 120






