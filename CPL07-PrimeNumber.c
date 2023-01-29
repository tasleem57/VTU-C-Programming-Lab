/**
1. Include necessary headers
2. Write Function to check if given number is prime
3. Declare variables and get the input from user
4. Call Function and print output
**/

#include<stdio.h>
#include<stdlib.h>

int isPrime(int num) {
    int i;
    if(num == 1){
        printf("1 is neither Prime nor Composite\n");
        exit(0);
    }

    for( i =2; i< num; i++ ){
        if(num%i == 0){
            return 0;
        }
    }

    return 1;
}


int main() {

    int num;

    printf("Enter a number\n");
    scanf("%d", &num);

    if(isPrime(num)){
        printf("%d is a Prime Number\n", num);
    } else {
        printf("%d is not a Prime Number\n", num);
    }

    return 0;
}
