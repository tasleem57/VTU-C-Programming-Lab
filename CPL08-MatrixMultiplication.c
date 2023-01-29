/**
1. Include necessary headers
2. Declare all variables
3. Get matrix size as inputs
4. Check if matrix multiplication is possible
5. Get matrix elements as inputs
6. Perform Matrix multiplication
7. Print input matrices and output matrix
**/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int m,n,p,q,i,j,k,a[50][50], b[50][50];
    int c[50][50] = {0};

    printf("Enter the first matrix dimensions\n");
    scanf("%d %d", &m , &n);

    printf("Enter the second matrix dimensions\n");
    scanf("%d %d", &p , &q);

    if(n != p){
        printf("Matrix multiplication is not possible\n");
        exit(0);
    }

    printf("Enter the first matrix elements\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the second matrix elements\n");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            scanf("%d", &b[i][j]);
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            //(1*9) + (2*7) + (3*2)
            for(k=0;k<n;k++){
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    printf("First Matrix is \n");
    for(i=0;i<m;i++){
        for(j=0;j<n; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("Second Matrix is \n");
    for(i=0;i<p;i++){
        for(j=0;j<q; j++){
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    printf("Product Matrix is \n");
    for(i=0;i<m;i++){
        for(j=0;j<q; j++){
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;


}
