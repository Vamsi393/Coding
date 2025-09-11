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
