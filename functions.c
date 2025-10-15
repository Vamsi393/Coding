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
    
