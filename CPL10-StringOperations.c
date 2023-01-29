/**
1. Include necessary headers
2. Declare all needed functions
3. Declare variables inside main function
4. Get input strings
5. Call functions and pass required parameters;
6. Write function body for String Length
7. Write function body for String Concatenation
8. Write function body for String Compare
**/

#include<stdio.h>
#include<string.h>

void stringLength(char s1[50], char s2[50]);
void stringConcatenation(char s1[50], char s2[50]);
void stringCompare(char s1[50], char s2[50]);

int main(){

    char a[50], b[50];

    printf("Enter the first String:\n");
    scanf("%s", a);
    printf("Enter the second String:\n");
    scanf("%s", b);

    stringLength(a, b);
    stringCompare(a,b);
    stringConcatenation(a,b);

    return 0;
}

void stringLength(char s1[50], char s2[50]) {
    int len1, len2;
    len1 = strlen(s1);
    len2 = strlen(s2);

    printf("\nLength of first string is %d", len1);
    printf("\nLength of second string is %d", len2);
}

void stringConcatenation(char s1[50], char s2[50]) {
    printf("\nConcatenated String is %s", strcat(s1,s2));
}

void stringCompare(char s1[50], char s2[50]) {
    if(strcmp(s1,s2) == 0){
        printf("\nStrings are equal");
    }else {
        printf("\nStrings are not equal");
    }
}
