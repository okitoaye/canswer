// Q20: Sort an array in ascending order
#include <stdio.h>
int main() {
    int a[100], n, i, j, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for(i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}

// Q21: Matrix addition
#include <stdio.h>
int main() {
    int a[10][10], b[10][10], sum[10][10], r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter elements of first matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d", &a[i][j]);
    printf("Enter elements of second matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d", &b[i][j]);
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            sum[i][j] = a[i][j] + b[i][j];
    printf("Sum of matrices:\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
    return 0;
}

// Q22: Matrix multiplication
#include <stdio.h>
int main() {
    int a[10][10], b[10][10], res[10][10], r1, c1, r2, c2, i, j, k;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
    if(c1 != r2) {
        printf("Multiplication not possible");
        return 0;
    }
    printf("Enter first matrix:\n");
    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
            scanf("%d", &a[i][j]);
    printf("Enter second matrix:\n");
    for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
            scanf("%d", &b[i][j]);
    for(i=0;i<r1;i++)
        for(j=0;j<c2;j++) {
            res[i][j] = 0;
            for(k=0;k<c1;k++)
                res[i][j] += a[i][k] * b[k][j];
        }
    printf("Resultant matrix:\n");
    for(i=0;i<r1;i++) {
        for(j=0;j<c2;j++)
            printf("%d ", res[i][j]);
        printf("\n");
    }
    return 0;
}
