
#include<stdio.h>
int main(){
    int m;
    printf("Enter a integer value of m:\n");
    scanf("%d", &m);

    if(m > 0){
        printf(" \'1'\ ");
    }
    else if(m < 0){
        printf(" \'-1'\ ");
    }
    else{
        printf(" \'0'\ ");
    }

    return 0;
}