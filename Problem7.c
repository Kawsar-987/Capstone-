
#include<stdio.h>
int main()
{
    double height;
    printf("Enter your height in centimeter: \n");
    scanf("%lf", &height);

    printf("Category on your height:\n");

    if(height < 150)
    {
        printf("Dwarf.\n");
    }
    else if(height >= 150 && height <= 165)
    {
        printf("Average Height.\n");
    }
    else if(height >= 165 && height <= 190)
    {
        printf("Taller.\n");
    }
    else
    {
        printf("Abnormal Height.\n");
    }

    return 0;
}