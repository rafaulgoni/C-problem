
// #include <stdio.h>
// int main()
// {
//     double a = 15/4;
//     printf("%lf",a);
// }

// #include <stdio.h>
// int main()
// {
//     int a = 5;
//     a--;
//     printf("%d", --a);
// }

// #include <stdio.h>
// int main()
// {
//     int a = 10;
//     int x = a++;
//     --x;
//     a--;
//     int y = --x;
//     printf("%d", y--);
// }

// #include <stdio.h>
// int main()
// {
//     int x = 10;
//     int y = 12;
//     if(x>=y && x<=y)
//     {
//         printf("hi");
//     }
//     else
//     {
//         printf("hello");
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int x = 10;
//     int y = 12;
//     if(x>=y || x<=y)
//     {
//         printf("hi ");
//     }

//     printf("hello");
// }

// #include <stdio.h>
//     int main()
//     {
//         int x = 5;
//         if (x < 10) {
//             printf("hello ");
//         }
//         if (x == 5) {
//             printf("hi");
//         }
//         else {
//             printf("no");
//         }
//     }

// #include <stdio.h>
// int main()
// {
//     for (int j = 5; j <= 10; j++)
//     {
//         printf("hi ");
//     }
// }
// #include <stdio.h>
// int main()
// {

//     int i=0,j=0;
//     for(j=1;j<=5;j++)
//     {
//         i++;
//     }
//     printf("%d",j);

// }
// #include <stdio.h>
// int main()
// {
//     for(int i=0;i<=5;i++)
// {
//      for(int j=1;j<3;j++)
//      {
//          printf("*");
//      }
// }
// }
// #include <stdio.h>
// int main()
// {
//     int i = 5;
//     while(i<10)
//     {
//         printf("i");
//         i++;
//     }
// }
// int main()
// {
//      int i = -5;
//     while(i<3)
//     {
//         printf("hello ");
//         i+=2;
//     }
// }
// #include <stdio.h>
// int main()
// {
//      int i = 1;
//     do
//     {
//         printf("%d ",i);
//         i++;
//     } while (i<5);
// }
// #include <stdio.h>
// int main()
// {
//     for(int i=0;i<=10;i++)
//     {
//         int x = 4;
//     }
//     printf("%d",i);
// }

// #include <stdio.h>
// int main()
// {
//     int a = 5, b = 1 ,c = 3;

//     if(a>b && b>c)
//     {
//         printf("%d",a);
//     }
//     else if(b>a && c>b)
//     {
//         printf("%d",b);
//     }
//     else
//     {
//         printf("%d",c);
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int x = 4;
//    if(x%2!=0)
//     {
//         printf("Even ");
//     }
//     else
//     {
//         printf("Odd ");
//     }
//     if(x>0)
//     {
//         printf("Positive ");
//     }
//     else
//     {
//         printf("Negative ");
//     }
// }
// #include <stdio.h>
// int main()
// {
//     int x = 1;
//     if (x < 5)
//     {
//         printf("hello");
//     }
//     if (x <= 10)
//     {
//         printf("hi");
//     }
//     else
//     {
//         printf("no");
//     }
//     return 0;
// }

// int main()
// {
//     int num = 5;
// if (num > 10) {
//    printf("Greater than 10");
// } else if (num < 10) {
//    printf("Less than 10");
// } else {
//    printf("Equal to 10");
// }
// }

// int main()
// {
//     int marks;
//     if(marks >= 80)
//     {
//         printf("A+");
//     }
//     else if(marks >= 70)
//     {
//         printf("A");
//     }
//     else if(marks >= 70)
//     {
//         printf("A-");
//     }
// }
// int main()
// {
//     int marks;
//     if(marks >= 80)
//     {
//         printf("A+");
//     }
//     if(marks >= 70)
//     {
//         printf("A");
//     }
//     if(marks >= 70)
//     {
//         printf("A-");
//     }
// }

// int main()
// {
//     int x = 0;
//     if (x == 1)
//     {
//         if (x == 0)
//         {
//             printf("inside if if\n");
//         }
//         else
//         {
//             printf("inside if else\n");
//         }
//     }
//     else
//     {
//         printf("inside else\n");
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int x = 5;
// int y = 4;
//     if(x>=y && x<y+4)
//     {
//         if(y<5)
//         {
//             printf("hi ");
//         }
//         else if(y<10)
//         {
//             printf("hi ");
//         }
//     }
//     else
//     {
//         printf("hello ");
//     }
// }
// #include <stdio.h>
// int main()
// {
//     int x = 5;
// int y = 4;
// if (x >= y && x < y + 4)
// {
//     if (y < 5)
//     {
//         printf("hi ");
//     }
//     if (y < 10)
//     {
//         printf("hi ");
//     }
// }
// else
// {
//     printf("hello ");
// }
// }
// int main()
// {
//     int x = 0;
//     if (x == 1)
//     {
//         if (x >= 0)
//         {
//             printf("true\n");
//         }
//         else
//         {
//             printf("false\n");
//         }
//     }
//     return 0;
// }

//-----------------------------------------------

// #include <stdio.h>
// int main() {

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int A, B, C;

//     scanf("%d %d %d", &A, &B, &C);
//     int min = A;
//     int max = A;

//     if (B < min) {
//         min = B;
//     }
//     if (C < min) {
//         min = C;
//     }

//     if (B > max) {
//         max = B;
//     }
//     if (C > max) {
//         max = C;
//     }

//     printf("%d %d\n", min, max);

//     return 0;
// }

// #include <stdio.h>
// int main() {
//     char X;

//     scanf("%c", &X);

//     if (X >= '0' && X <= '9') {
//         printf("IS DIGIT\n");
//     }

//     else if (X >= 'A' && X <= 'Z') {
//         printf("ALPHA\n");
//         printf("IS CAPITAL\n");
//     }

//     else if (X >= 'a' && X <= 'z') {
//         printf("ALPHA\n");
//         printf("IS SMALL\n");
//     }

//     return 0;
// }
// #include <stdio.h>
// int main() {
//     for(int i=-4;i>=0;i++)
//     {
//         for(int j=5;j<2;j++)
//         {
//             printf("hi ");
//         }
//     }
// }
// #include <stdio.h>
// int main() {
//     for(int i=0; i<=10; i++)
//     {
//         printf("hi ");
//         if(i>2)
//         {
//             break;
//         }
//     }
// }
//-------------------------------------------

// #include <stdio.h>

// int main() {
//     char c;

//     scanf("%c", &c);
//     if (c == 'z') {
//         printf("a\n");
//     } else {
//         printf("%c\n", c + 1);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     long long a, b, c, d;

//     scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
//     if (a + b + c == d || a + b - c == d || a - b + c == d || a - b - c == d || a * b + c == d || a * b - c == d || a + b * c == d || a - b * c == d || a * b * c == d) {
//         printf("YES\n");
//     } else {
//         printf("NO\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int N;
//     scanf("%d", &N);
//     for (int i = 1; i <= N; i++) {
//         if (N % i == 0) {
//             printf("%d\n", i);
//         }
//     }

//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int N;
//     int foundEven = 0;

//     scanf("%d", &N);

//     for (int i = 1; i <= N; i++) {
//         if (i % 2 == 0) {
//             printf("%d\n", i);
//             foundEven = 1;
//         }
//     }
//     if (!foundEven) {
//         printf("-1\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int N, tens, ones;

//     scanf("%d", &N);

//     tens = N / 10;
//     ones = N % 10;

//     if (ones != 0 && (tens % ones == 0 || ones % tens == 0)) {
//         printf("YES\n");
//     } else {
//         printf("NO\n");
//     }

//     return 0;
// }

//..........................................

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//      for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             printf(" ");
//         }
//         for (int k=1; k<=i; k++){
//             printf("* ");
//         }
//         printf("\n");
//      }
//     return 0;
// }

// int main(){
//     int n;
//     scanf("%d", &n);
//     for(int i=1; i<=n; i++){
//         for(int j =1; j<=n-i; j++){
//             printf("  ");
//         }
//         for(int j = 1; j<=2*i-1;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

// int main(){
//     int n;
//     scanf("%d", &n);
//     for(int i=1; i<=n; i++){
//         for(int j =1; j<=n-i; j++){
//             printf("  ");
//         }
//         for(int j = 1; j<=2*i-1;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//      for(int i=n; i>=1; i--){
//         for(int j=1; j<=n-i; j++){
//             printf(" ");
//         }
//         for (int k=1; k<=i; k++){
//             printf(" *");
//         }
//         printf("\n");
//      }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//      for(int i=1; i<=n; i++){
//            char ch = 'A' + i ;
//         for(int j=1; j<=i; j++){
//             printf("%c " &ch);
//         }
//             }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n, row, col;
//     scanf("%d", &n);

//     for (row = 1; row <= n; row++)
//     {
//         for (col = 1; col <= n - row; col++)
//         {
//             printf(" ");
//         }
//         for (col = 1; col <= 2 * row - 1; col++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for (row = n; row >= 1; row--)
//     {
//         for (col = 1; col <= n - row; col++)
//         {
//             printf(" ");
//         }
//         for (col = 1; col <= 2 * row - 1; col++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }


//exam...

// #include <stdio.h>
// int main() {
//     char c;
//     scanf("%c", &c);
//     if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
//         printf("Vowel\n");
//     } else {
//         printf("Consonant\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int N, i, num;
//     int count0 = 0, count1 = 0;

//     scanf("%d", &N);

//     for (i = 0; i < N; i++) {
//         scanf("%d", &num);
//         if (num == 0) {
//             count0++;
//         } else if (num == 1) {
//             count1++;
//         }
//     }
//     printf("%d %d\n", count0, count1);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int N, X;
//     scanf("%d", &N);
//     int arr[N];
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &arr[i]);
//     }
//     scanf("%d", &X);
//     arr[X-1] = arr[X-1] == 0 ? 1 : 0;
//     for (int i = 0; i < N; i++) {
//         printf("%d ", arr[i]);
//     }
    
//     return 0;
// }




// #include <stdio.h>

// int main() {
//     int N;
//     scanf("%d", &N);
//     int salami[N];
//     int max_salami = 0;
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &salami[i]);
//         if (salami[i] > max_salami) {
//             max_salami = salami[i];
//         }
//     }
//     for (int i = 0; i < N; i++) {
//         printf("%d ", max_salami - salami[i]);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int N;
//     scanf("%d", &N);
    
//     int A[N];
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &A[i]);
//     }
    
//     for (int i = 0; i < N; i++) {
//         if (A[i] <= 10) {
//             printf("A[%d] = %d\n", i, A[i]);
//         }
//     }
    
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int N;
//     scanf("%d", &N);
//     int A[N];
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &A[i]);
//     }
//     for (int i = 0; i < N; i++) {
//         if (A[i] <= 10) {  
//             printf("A[%d] = %d\n", i, A[i]);
//         }
//     }
    
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     char str[20] = "HelloW\0rld";
//     printf("%s",str);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     char str[20];
//     scanf("%s",&str);
//     printf("%s",str);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     char str[20];
//     scanf("%c",&str);
//     printf("%s",str);
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int N;
//     scanf("%d", &N);
    
//     int A[N];
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &A[i]);
//     }
    
//     for (int i = N - 1; i >= 0; i--) {
//         printf("%d ", A[i]);
//     }
    
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int N;
//     scanf("%d", &N);
    
//     int A[N];
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &A[i]);
//     }

//     int isPalindrome = 1;  
    
//     for (int i = 0; i < N / 2; i++) {
//         if (A[i] != A[N - i - 1]) {
//             isPalindrome = 0; 
//             break;
//         }
//     }
    
//     if (isPalindrome) {
//         printf("YES\n");
//     } else {
//         printf("NO\n");
//     }
    
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// // int main()
// // {
// // char str[] = "hello\0world";
// // printf("%d",strlen(str));
// // }

// int main()
// {
// char str[] = "hi, we are learning string! ";
// printf("%d",strlen(str));
// }


// #include <stdio.h>
// #include <string.h>

// int main() {
//     char a[] = "hello";
//     char b[] = "world";
    
//     char original_b[6]; 
//     strcpy(original_b, b); 
//     strcpy(b, a);
//     printf("Original b (world): %s\n", original_b);

//     return 0;
// }




// mid trem exam.....................

// #include <stdio.h>

// int main() {
//     int N, K;
//     scanf("%d %d", &N, &K);
//     for(int i = 0; i < N; i++) {
//         for(int j = 1; j <= K; j++) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int N, T;
//     scanf("%d %d", &N, &T);
    
//     int books[N];
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &books[i]);
//     }
//     int sum = 0;   
//     int count = 0; 
//     for (int i = 0; i < N; i++) {
//         sum += books[i];
//         if (sum > T) {
//             break;
//         }
//         count++;
//     }
//     printf("%d\n", count);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int N, X, Y;
//     scanf("%d %d %d", &N, &X, &Y);
//     int count = 0;
//     for (int i = 0; i < N; i++) {
//         int price;
//         scanf("%d", &price);
//         if (price >= X && price <= Y) {
//             count++;
//         }
//     }
//     printf("%d\n", count);
    
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int N;
//     scanf("%d", &N);
//     for (int i = 0; i < N; i++) {
//         int experience;
//         scanf("%d", &experience);
//         if (experience < 1) {
//             printf("Entry-level candidate\n");
//         } else if (experience >= 1 && experience <= 3) {
//             printf("Junior candidate\n");
//         } else if (experience >= 4 && experience <= 7) {
//             printf("Mid-level candidate\n");
//         } else {
//             printf("Senior candidate\n");
//         }
//     }
    
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main() {
//     int x = 10;
// int *p = &x;
// x++;
// printf("%d",*p);
// //     char S1[1000], S2[1000], S3[1000];
// //     scanf("%s %s %s", S1, S2, S3);
    
// //     char *minStr = S1;
// //     char *maxStr = S1;
// //     if (strcmp(S2, minStr) < 0) {
// //         minStr = S2;
// //     }
// //     if (strcmp(S3, minStr) < 0) {
// //         minStr = S3;
// //     }
// //     if (strcmp(S2, maxStr) > 0) {
// //         maxStr = S2;
// //     }
// //     if (strcmp(S3, maxStr) > 0) {
// //         maxStr = S3;
// //     }
// //     printf("%s\n", minStr);
// //     printf("%s\n", maxStr);
    
//     return 0;
// }

//Assignment 03 | Introduction to C programming | Batch 06

// #include <stdio.h>

// int main() {
//     int N;
//     scanf("%d", &N);
    
//     int isMatrix = 1;
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             int value;
//             scanf("%d", &value);
            
//             if ((i == j && value != 1) || (i != j && value != 0)) {
//                 isMatrix = 0;
//             }
//         }
//     }
    
//     if (isMatrix) {
//         printf("YES\n");
//     } else {
//         printf("NO\n");
//     }
    
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int N, M, X;
//     scanf("%d %d %d", &N, &M, &X);
    
//     int matrix[N][M];
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }
//     for (int q = 0; q < X; q++) {
//         int target;
//         scanf("%d", &target);
        
//         int count = 0;
//         for (int i = 0; i < N; i++) {
//             for (int j = 0; j < M; j++) {
//                 if (matrix[i][j] == target) {
//                     count++;
//                 }
//             }
//         }
        
//         printf("%d\n", count);
//     }
    
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main() {

//     int N;
//     scanf("%d", &N);
    
//     int *arr = (int *)malloc(N * sizeof(int));
//     int *count = (int *)calloc(100001, sizeof(int));
    
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &arr[i]);
//         count[arr[i]]++;
//     }
    
//     int uniqueCount = 0;
//     for (int i = 0; i < N; i++) {
//         if (count[arr[i]] == 1) {
//             uniqueCount++;
//         }
//     }
    
//     printf("%d\n", uniqueCount);
    
//     free(arr);
//     free(count);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int N;
//     scanf("%d", &N);
//     int *arr = (int *)malloc(sizeof(int));
//     int size = 1;
//     for (int i = 0; i < N; i++) {
//         int num;
//         scanf("%d", &num);
        
//         if (i >= size) {
//             size++;
//             arr = (int *)realloc(arr, size * sizeof(int));
//         }
//         arr[i] = num;
//     }
//     for (int i = 0; i < N; i++) {
//         printf("%d ", arr[i]);
//     }
    
//     free(arr);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    
    int *ptrA = &A;
    int *ptrB = &B;
    
    int difference = abs(*ptrA - *ptrB);
    
    printf("%d\n", difference);
    
    return 0;
}
