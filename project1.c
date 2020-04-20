#include<stdio.h>
int main()
{
    int a,b;
    printf("enter value of a and b");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swapping of numbes a= %d,b=%dcreated swapping of numbers",a,b);
  }
