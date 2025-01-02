//-1

#include <stdio.h>
#include <stdlib.h>
void divide (double , double);
int main()
{
    double num1,num2;
    printf("enter  number 1 : ");
    scanf("%lf",&num1);
    fflush(stdin);
    printf("enter  number  : ");
    scanf("%lf",&num2);
    divide(num1,num2);
    return 0;

}
void divide(double a , double b )
{

    printf("the result = %.3f",(a/b));

}

//-2
#include <stdio.h>
#include <stdlib.h>
int bitc(int);
int main()
{
    int x;
    printf("enter a number : ");
    scanf("%d",&x);
    printf("the number of bits of number %d is %d bits ",x,bitc(x));
    return 0;


}
int bitc(int a)
{
    int count =0;
    while(a)
    {
        count ++;
        a >>=1;

    }
      return  count;
}


//-5
#include <stdio.h>
#include <stdlib.h>
int calc(int,int);

int main()
{
    int num1,num2;
    printf("enter two numbers : \n");
    scanf("%d",&num1);
    fflush(stdin);
    scanf("%d",&num2);
    printf("result = %d ",calc(num1,num2));

}
int calc(int a,int b)
{
    int sum=0;
    for( int i = (a+1) ;i<b;i++)
        sum+=i;
    return sum;


}

//-6
#include <stdio.h>
#include <stdlib.h>
int power (int,int);
int main()
{
    int num,pow;
    printf("enter the number : ");
    scanf("%d",&num);
    printf("enter the power : ");
    scanf("%d",&pow);
    printf("result = %d ",(power(num,pow)));
}
int power (int a,int b)
{
    int sum=1;
    for(int i=0;i<b;i++)
        sum*=a;
    return sum ;
}

//-7
#include <stdio.h>
#include <stdlib.h>
void swap (int,int);

int main()
{
    int x,y;

    printf("x = ? ");
    scanf("%i",&x);
    printf("y = ? ");
    scanf("%i",&y);
    swap(x,y);
    return 0 ;
}
void swap (int a,int b)
{
    int z;
    z=a;
    a=b;
    b=z;
    printf("x = %i \n",a);
    printf("y = %i",b);
}

//-11

#include <stdio.h>
#include <stdlib.h>
void square (int);
void triangle (int);

int main()
{
    int l,h;
    printf("enter the size of square : ");
    scanf("%d",&l);
    printf("enter the height of right angle triangle : ");
    scanf("%d",&h);
    square(l);
    printf("\n\n");
    triangle(h);

}
void square (int size)
{
    for(int i =0;i<size;i++)
    {
        for(int j = 0;j<size;j++)
        printf("#");

      printf("\n")  ;
    }
}
void triangle (int size)
{
    for(int i =1;i<=size;i++)
    {
        for(int j = 0;j<i;j++)
        printf("#");

      printf("\n")  ;
    }
}

