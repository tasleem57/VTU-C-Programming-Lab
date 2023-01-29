/**
1.  Include necessary header
2.  Write recursive function to convert binary to decimal
3.  Get the binary number as input
4.  Call Recursive function
5.  Print output
**/

#include<stdio.h>

int binaryToDecimal(long num){

    int rem;

    if(!(num / 10)){
        return num;
    }else{
        //111001
        rem = num % 10;
        num = num / 10;
        return rem + binaryToDecimal(num) * 2;
    }
}

int main(){

    long binary;
    int decimal;

    printf("Enter the Binary Number: \n");
    scanf("%ld", &binary);

    decimal = binaryToDecimal(binary);

    printf("\nDecimal Number of %ld is %d\n", binary, decimal);

    return 0;
}
