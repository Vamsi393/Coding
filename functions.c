Q)IMPLEMENT A TO YOUR OWN STRING LENGTH MANIPULATION FUNCTION?
A)```#include<stdio.h>
int vstrlen(char *ptr);
int main()
{
    char str[10];
    printf("enter the string:");
    scanf("%s",str);
    int len=vstrlen(str);
    printf("length of the string is %d",len);
}
int vstrlen(char *ptr)
{
    int count=0;
    while(*ptr!='\0')
    {
        count++;
        ptr++;
    }
    return count;
}
OUTPUT:enter the string:vamsikrishna
length of the string is 12
  enter the string:vamsi krishna
length of the string is 5```

Q)IMPLEMENT A TO YOUR OWN STRING LENGTH MANIPULATION FUNCTION?
A)#include<stdio.h>
char astrcpy(char *destination,char *source);
int main()
{
    char str1[10]="vamsi";
    char str2[10];
    astrcpy(str2,str1);
    printf("%s",str2);
}
char astrcpy(char *destination,char *source)
{
    char *p=destination;
    while(*destination=*source)
    {
        destination++;
        source++;
    }
    return *p;
}
OUTPUT:vamsi  

Q)WRITE A PROGRAM FOR NUMBER IS PRIME OR NOT USING FUNCTIONS?
A)#include<stdio.h>
int prime(int n);
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if (prime(num))
        printf("number is prime");
    else
    printf("number is not prime");
}
int prime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
    if(n%i==0)
    {
        //printf("not prime number");
        return 0;
       // flag=0;
        break;
    }
    //if(flag==1)
    else
    {
       // printf("prime number");
        return 1;
    }
    }

}
OUTPUT:enter the number:10
number is not prime
enter the number:2
number is prime

Q)WRITE A PROGRAM CONVERT DECIMAL TO BINARY USING FUNCTION?
A)#include<stdio.h>
int decbin(int n);
int main()
{
    int binary[32],i,j,num;
    printf("enter the number:");
    scanf("%d",&num);
    int res=decbin(num);
    printf("%d",res);
}
int decbin(int n)
{
    int binary=0,base=1;
    while(n>0)
    {
         int rem=n%2;
         binary=binary+rem*base;
        n=n/2;
        base=base*10;
    }
    return binary;
}
OUTPUT:
enter the number:10
1010
    enter the number:5
101

Q)WRITE A PROGRAM CONVERT DECIMAL TO octal USING FUNCTION?
A)#include<stdio.h>
int decoct(int n);
int main()
{
    int num;
    printf("enter the decimal number:");
    scanf("%d",&num);
    int res=decoct(num);
    printf("%d",res);
}
int decoct(int n)
{
    int octal=0,base=1;
    while(n>0)
    {
        int rem=n%8;
        octal=octal+rem*base;
        n=n/10;
        base=base*10;
    }
    return octal;
}
OUTPUT:
enter the decimal number:10
12

Q)Q)WRITE A PROGRAM CONVERT DECIMAL TO HEXADECIMAL USING FUNCTION?
A)#include<stdio.h>
int dechex(int n);
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    int res=dechex(num);
    printf("%x",res);
}
int dechex(int n)
{
    int hexa=0,base=1;
    while(n>0)
    {
        int rem=n%16;
        hexa=hexa+rem*base;
        n=n/16;
        base=base*10;
    }
    return hexa;
    
}
OUTPUT:
enter the number:1010
1c4

Q)WRITE A PROGRAM CONVERT BINARY TO DECIMAL USING FUNCTION?
A)#include<stdio.h>
int bindec(int n);
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    int res=bindec(num);
    printf("%d",res);
}
int bindec(int n)
{
    int decimal=0,base=1;
    while(n>0)
    {
        int rem=n%10;
        decimal=decimal+rem*base;
        n=n/10;
        base=base*2;
    }
    return decimal;
    
}
OUTPUT:
enter the number:1010
10

Q)WRITE A PROGRAM CONVERT OCTAL TO DECIMAL USING FUNCTION?
A)#include<stdio.h>
int octdec(int n);
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    int res=octdec(num);
    printf("%d",res);
}
int octdec(int n)
{
    int decimal=0,base=1;
    while(n>0)
    {
        int rem=n%10;
        decimal=decimal+rem*base;
        n=n/10;
        base=base*8;
    }
    return decimal;
    
}
OUTPUT:
enter the number:131
89

Q)WRITE A PROGRAM CONVERT HEXADECIMAL TO DECIMAL USING FUNCTION?
A)#include<stdio.h>
int hexdec(int n);
int main()
{
    int num;
    printf("enter the number:");
    scanf("%x",&num);
    int res=hexdec(num);
    printf("%d",res);
}
int hexdec(int n)
{
    int decimal=0,base=1;
    while(n>0)
    {
        int rem=n%10;
        decimal=decimal+rem*base;
        n=n/10;
        base=base*16;
    }
    return decimal;
    
}
OUTPUT:
enter the number:0x1
1

Q)WRITE A PROGRAM CONVERT DECIMAL TO ROMAN NUMBER USING FUNCTION?
A)#include<stdio.h>
int roman(int n,int k,char ch);
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(num>=1000)//fun inv
    {
    num=roman(num,1000,'M');
    }
    if(num>=500)//fun inv
    {
        num=roman(num,500,'D');
    }
    if(num>=100)//fun inv
    {
        num=roman(num,100,'C');
    }
    if(num>=50)//fun inv
    {
        num=roman(num,50,'L');
    }
    if(num>=10)//fun inv
    {
        num=roman(num,10,'X');
    }
    if(num>=5)//fun inv
    {
        num=roman(num,5,'v');
    }
    if(num>=1)
    {
        num=roman(num,1,'I');
    }
}
    int roman(int n,int k,char ch)
    {
        while(n>=k)
        {
            printf("%c",ch);
            n=n-k;
        }
        return n;
    }
OUTPUT:
enter the number:51
LI
    enter the number:1010
MX
    enter the number:878
DCCCLXXvIII



