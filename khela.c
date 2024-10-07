
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
#include <stdio.h>
int main() {
    for(int i=-4;i>=0;i++)
    {
        for(int j=5;j<2;j++)
        {
            printf("hi ");
        }
    }
}
#include <stdio.h>
int main() {
    for(int i=0; i<=10; i++)
    {
        printf("hi ");
        if(i>2)
        {
            break;
        }
    }
}