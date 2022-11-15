//fizzbuzz program
#include <stdio.h>

int main(){
    int x;
    printf("enter the integer: ");
    scanf("%d", &x);
    if (x%3==0, x%5==0){
        printf("fizz");
    }
    else if (x%11==0, x%13==0){
        printf("buzz");
    }
    else if(x%33==0,x%39==0, x%55==0, x%65==0){
        printf("fizzbuzz");
    }
    
    return 0;
}

