
#include <stdio.h>
int main()
{
    double a = 15/4;
    printf("%lf",a);
}

#include <stdio.h>
int main()
{
    int a = 5;
    a--;
    printf("%d", --a);
}

#include <stdio.h>
int main()
{
    int a = 10;
    int x = a++;
    --x;
    a--;
    int y = --x;
    printf("%d", y--);
}

#include <stdio.h>
int main()
{
    int x = 10;
    int y = 12;
    if(x>=y && x<=y)
    {
        printf("hi");
    }
    else
    {
        printf("hello");
    }
}

#include <stdio.h>
int main()
{
    int x = 10;
    int y = 12;
    if(x>=y || x<=y)
    {
        printf("hi ");
    }

    printf("hello");
}

#include <stdio.h>
    int main()
    {
        int x = 5;
        if (x < 10) {
            printf("hello ");
        }
        if (x == 5) {
            printf("hi");
        }
        else {
            printf("no");
        }
    }

#include <stdio.h>
int main()
{
    for (int j = 5; j <= 10; j++)
    {
        printf("hi ");
    }
}
#include <stdio.h>
int main()
{

    int i=0,j=0;
    for(j=1;j<=5;j++)
    {
        i++;
    }
    printf("%d",j);


}
#include <stdio.h>
int main()
{
    for(int i=0;i<=5;i++)
{
     for(int j=1;j<3;j++)
     {
         printf("*");
     }
}
}
#include <stdio.h>
int main()
{
    int i = 5;
    while(i<10)
    {
        printf("i");
        i++;
    }
}
int main()
{
     int i = -5;
    while(i<3)
    {
        printf("hello ");
        i+=2;
    }
}
#include <stdio.h>
int main()
{
     int i = 1;
    do
    {
        printf("%d ",i);
        i++;
    } while (i<5);
}
#include <stdio.h>
int main()
{
    for(int i=0;i<=10;i++)
    {
        int x = 4;
    }
    printf("%d",i);
}