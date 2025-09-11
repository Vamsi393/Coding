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
    
