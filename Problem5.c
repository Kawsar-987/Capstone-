#include<stdio.h>
int main(){
    int age;
    printf("Enter candidate's age: \n");
    scanf("%d", &age);

    if(age>18){
        printf("Candidate is eligible for casting his/her vote.");
    }
    else{
        printf("Grow up kid. You are not eligible for vote.");
    }

    return 0;
}