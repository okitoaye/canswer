#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Q23: Transpose of a Matrix
void q23() {
    int a[10][10], trans[10][10], r, c;
    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter matrix:\n");
    for (int i=0;i<r;i++)
        for (int j=0;j<c;j++)
            scanf("%d", &a[i][j]);

    for (int i=0;i<r;i++)
        for (int j=0;j<c;j++)
            trans[j][i] = a[i][j];

    printf("Transpose:\n");
    for (int i=0;i<c;i++) {
        for (int j=0;j<r;j++)
            printf("%d ", trans[i][j]);
        printf("\n");
    }
}

// Q24: Insert Element in Array
void q24() {
    int a[100], n, pos, val;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    printf("Enter position and value: ");
    scanf("%d%d", &pos, &val);
    for(int i=n;i>=pos;i--)
        a[i] = a[i-1];
    a[pos-1] = val;
    n++;
    printf("New array: ");
    for(int i=0;i<n;i++)
        printf("%d ", a[i]);
}

// Q25: Delete Element from Array
void q25() {
    int a[100], n, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    for(int i=pos-1;i<n-1;i++)
        a[i] = a[i+1];
    n--;
    printf("New array: ");
    for(int i=0;i<n;i++)
        printf("%d ", a[i]);
}

// Q26: Linear Search
void q26() {
    int a[100], n, val, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    printf("Enter value to search: ");
    scanf("%d", &val);
    for(int i=0;i<n;i++) {
        if(a[i] == val) {
            printf("Found at position %d\n", i+1);
            found = 1;
            break;
        }
    }
    if(!found)
        printf("Not found\n");
}

// Q27: Copy One String to Another
void q27() {
    char s1[100], s2[100];
    printf("Enter string: ");
    scanf("%s", s1);
    strcpy(s2, s1);
    printf("Copied string: %s", s2);
}

// Q28: Length of String Without Library
void q28() {
    char s[100];
    int i = 0;
    printf("Enter string: ");
    scanf("%s", s);
    while(s[i] != '\0') i++;
    printf("Length: %d", i);
}

// Q29: Palindrome String
void q29() {
    char s[100];
    int i, len, flag = 1;
    printf("Enter string: ");
    scanf("%s", s);
    len = strlen(s);
    for(i=0; i<len/2; i++) {
        if(s[i] != s[len-1-i]) {
            flag = 0;
            break;
        }
    }
    if(flag) printf("Palindrome\n");
    else printf("Not Palindrome\n");
}

// Q30: Count Vowels, Consonants, Digits, Spaces
void q30() {
    char str[100];
    int v=0, c=0, d=0, s=0;
    printf("Enter string: ");
    gets(str);
    for(int i=0; str[i]!='\0'; i++) {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')) {
            if(strchr("aeiouAEIOU", str[i]))
                v++;
            else
                c++;
        }
        else if(str[i]>='0' && str[i]<='9') d++;
        else if(str[i]==' ') s++;
    }
    printf("Vowels: %d, Consonants: %d, Digits: %d, Spaces: %d\n", v, c, d, s);
}

// Q31: Simple Calculator using Switch
void q31() {
    int a, b;
    char op;
    printf("Enter expression (a op b): ");
    scanf("%d %c %d", &a, &op, &b);
    switch(op) {
        case '+': printf("Result = %d", a+b); break;
        case '-': printf("Result = %d", a-b); break;
        case '*': printf("Result = %d", a*b); break;
        case '/': if(b!=0) printf("Result = %d", a/b); else printf("Divide by 0"); break;
        default: printf("Invalid operator");
    }
}

// Q32: Factorial Using Recursion
int fact(int n) {
    if(n==0) return 1;
    return n * fact(n-1);
}
void q32() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Factorial = %d", fact(n));
}

// Q33: nth Fibonacci Using Recursion
int fib(int n) {
    if(n==0) return 0;
    if(n==1) return 1;
    return fib(n-1) + fib(n-2);
}
void q33() {
    int n;
    printf("Enter term: ");
    scanf("%d", &n);
    printf("Fibonacci term = %d", fib(n));
}

// Q34: Pointer Arithmetic
void q34() {
    int a = 10, *p;
    p = &a;
    printf("Value: %d\n", *p);
    printf("Address: %p\n", p);
    p++;
    printf("Next address: %p\n", p);
}

// Q35: Swap Using Pointers
void q35() {
    int a, b, *p1, *p2, temp;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    p1 = &a;
    p2 = &b;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("Swapped: a=%d b=%d", a, b);
}

// Q36: Bubble Sort using Function
void bubbleSort(int a[], int n) {
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(a[j]>a[j+1]) {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
}
void q36() {
    int a[100], n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for(int i=0;i<n;i++) scanf("%d", &a[i]);
    bubbleSort(a, n);
    printf("Sorted array: ");
    for(int i=0;i<n;i++) printf("%d ", a[i]);
}

// Q37: Structure for Student Info
struct Student {
    char name[50];
    int age;
};
void q37() {
    struct Student s;
    printf("Enter name and age: ");
    scanf("%s %d", s.name, &s.age);
    printf("Student: %s, Age: %d", s.name, s.age);
}

// Q38: Read and Write File
void q38() {
    FILE *f = fopen("file.txt", "w");
    fprintf(f, "Hello File\n");
    fclose(f);
    f = fopen("file.txt", "r");
    char c;
    while((c = fgetc(f)) != EOF) printf("%c", c);
    fclose(f);
}

// Q39: Merge Two Files
void q39() {
    FILE *f1 = fopen("f1.txt", "r");
    FILE *f2 = fopen("f2.txt", "r");
    FILE *f3 = fopen("f3.txt", "w");
    char c;
    while((c = fgetc(f1)) != EOF) fputc(c, f3);
    while((c = fgetc(f2)) != EOF) fputc(c, f3);
    fclose(f1); fclose(f2); fclose(f3);
    printf("Files merged into f3.txt");
}

// Q40: Dynamic Memory Allocation
void q40() {
    int *p, n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    p = (int*)malloc(n * sizeof(int));
    printf("Enter elements: ");
    for(int i=0;i<n;i++) scanf("%d", &p[i]);
    printf("Array: ");
    for(int i=0;i<n;i++) printf("%d ", p[i]);
    free(p);
}

