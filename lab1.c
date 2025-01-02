#include <stdio.h>
#include <stdlib.h>

int main()
{
    // -1

    int x,y;
    char op,co;

    do{
    printf("enter two numbers \n");
    scanf("%d",&x);
    scanf("%d",&y);
    do{
    printf("choose an operator ( + , - , * , / ) \n");
    fflush(stdin);
    scanf("%c",&op);
    }while(op!='+'&&op!='-'&&op!='*'&&op!='/');

    if(op=='+')
    {
        printf("the result = %i",(x+y));
    }
    else if (op=='-')
     {
        printf("the result = %i",(x-y));
     }

    else if (op=='*')
    {
        printf("the result = %i",(x*y));
    }
    else if (op=='/')
        printf("the result = %i",(x/y));
    printf("\ndo you want another process ? ( Y or N )");
    fflush(stdin);
    scanf("%c",&co);


    }while(co=='y'||co=='Y');
return 0;


    //-2

    const float pi= 3.14;
    float r;

    printf("enter the redius : ");
    scanf("%f",&r);
    printf("\narea = %f",(pi*r*r));
    return 0;



    //-3

      char x;
    printf("enter a char \n");
    scanf("%c",&x);
    if(x>='0' && x<='9')
        printf("input is a digit");
     else if (x>='a'&& x<='z')
            printf("input is small char ");
     else if (x>='A'&& x<='Z')
            printf("input is Capital char ");
     else
        printf("input is special char ");
    return 0;

    //-4

    double num1,num2,result;
    result=num1/num2;
    printf("enter number 1 \n");
    scanf("%lf",&num1);
    fflush(stdin);
    printf("enter number 2 \n");
    scanf("%lf",&num2);
    result=num1/num2;
     if (num2 == 0)
        printf("error, cannot divide by zero");

    printf("the result = %.3lf",result);
    return 0;

    //-5

     int num[3];
    int largest;

    for(int i=0;i<3;i++)
    {
        printf("enter number %i :",i+1);
        scanf("%d",&num[i]);
    }
    largest=num[1];
    for(int i=0;i<3;i++)
    {
        if (num[i]>largest)
            largest=num[i];

    }
    printf("the largest number is %i",largest);
    return 0;

    //-6

    int x,y,z;
    printf("x = ? ");
    scanf("%i",&x);
    printf("y = ? ");
    scanf("%i",&y);
    z=x;
    x=y;
    y=z;
    printf("x = %i \n",x);
    printf("y = %i",y);
    return 0


    //-7

    int x,y;
    printf("x = ? ");
    scanf("%i",&x);
    printf("y = ? ");
    scanf("%i",&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("x = %i \n",x);
    printf("y = %i",y);
    return 0;

    //-9

    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;




}
