#include<stdio.h>
#include<conio.h>
int main()
{   
    int a,b,sum;
    printf("enter a number a:");
    scanf("%d",&a);
    printf("enter a number b:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swap\na=%d\nb=%d",a,b);
    getch();
}
    
    
