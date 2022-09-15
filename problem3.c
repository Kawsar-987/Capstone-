
#include<stdio.h>
int main(){
    double number;
    printf("Enter a number:\n");
    scanf("%lf", &number);

    if(number>0){
        printf("%lf is a Positive Number",number);
    }
    else if(number<0){
        printf("%lf is a Negative Number",number);
    }
    else{
        printf("%lf is a Zero");
    }
    return 0;
}