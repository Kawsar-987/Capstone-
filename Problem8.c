#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three integer value:\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c)
    {
        printf("%d is largest of three numbers.", a);
    }
    else if(b > a && b > c)
    {
        printf("%d is largest of three numbers.", b);
    }
    else
    {
        printf("%d is largest of three numbers.", c);
    }
    return 0;
}