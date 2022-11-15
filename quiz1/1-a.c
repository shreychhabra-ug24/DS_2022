//fizzbuzz program
#include <stdio.h>

void basicFizzBuzz(int x){
    
    if(x%3==0||x%5==0){
        printf("fizz\n");
    }
    if(x%11==0||x%13==0){
        printf("buzz\n");
    }
    if(x%33==0||x%39==0||x%55==0||x%65==0){
        printf("fizzbuzz\n");
    }
    else(printf("%d"));
}

int main(){
    int x;
    printf("enter the integer: ");
    scanf("%d", &x);
    basicFizzBuzz(x);
}

