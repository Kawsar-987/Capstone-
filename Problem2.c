#include<stdio.h>
int main()
{
    int num;
    printf("Enter a integer value:\n");
    scanf("%d", &num);

    if(num%2==0)
    {
        printf("Your given value is %d and it is an even number.\n");
    }
    else
    {
      printf("Your given value is %d and it is an odd number.\n");  
    }
    return 0;
}