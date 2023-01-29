/**
1. Include necessary headers
2. Declare variables
3. Get number as input
4. Write logic to find square root
5. Print output
**/

#include<stdio.h>

int main(){

    int num, root, temp;

    printf("Enter a Number\n");
    scanf("%d", &num);

    temp =0;
    root = num / 2;

    while(root != temp){
        temp = root;
        root = (root + num / root) / 2;
    }

    printf("\nSquare root of %d is %d\n", num, root);

    return 0;

}
