//-1 assignment 4

#include<stdio.h>
void swap (int *a,int *b);
int main ()
{
    int num1,num2;
    printf("number 1 : ");
    scanf("%d",&num1);
    printf("number 2 : ");
    scanf("%d",&num2);
    swap(&num1,&num2);
    printf("number 1 : %d\n",num1);
    printf("number 2 : %d\n",num2);

}
void swap (int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}


//-2 assignment 4

#include <stdio.h>
#include <stdlib.h>
#define s 5
void print (int p[] ,int SIZE);
void swap (int ptr_1[],int ptr_2[],int size_s);
int main()
{
    int a[s],b[s],i;

        printf("enter the elemnts of array a \n");
        for(i=0;i<s;i++)
        {
            printf("enter element %d :",i+1);
            scanf("%d",&a[i]);
        }
        printf("enter the elemnts of array b \n");
                for(i=0;i<s;i++)
        {
            printf("enter element %d :",i+1);
            scanf("%d",&b[i]);
        }
        swap(&a,&b,s);
        printf("arry a elements : ");
        print(a,s);
        printf("arry b elements : ");
        print(b,s);

}
void swap (int ptr_1[],int ptr_2[],int size_s)
{
    int i;
    int temp;
    for(i=0;i<size_s;i++)
    {
        temp=ptr_1[i];
        ptr_1[i]=ptr_2[i];
        ptr_2[i]=temp;
    }
}
void print (int p[] ,int SIZE)
{
    int i;
    for(i=0;i<SIZE;i++)
        printf("%d \t",p[i]);
    printf("\n");
}

//-3 assignment 4
#include <stdio.h>
#include <stdlib.h>
#define My_array_size(array) (sizeof(array)/sizeof(array)[0])
int main()
{ int i ,a[20];

        printf("enter the elemnts of array a \n");
        for(i=0;i<20;i++)
        {

            scanf("%d",&a[i]);
        }

        printf("size of array : %d",My_array_size(a));
}

//-4 assignment 4

#include <stdio.h>
#include <stdlib.h>
#define my_size_of(x) ((char*)(&x+1)-(char*)(&x))
int main()
{

    int x=2;
    double m=10;
    char a[10];
    printf ("size of x : %d \n",my_size_of(x));
        printf ("size of m : %d \n",my_size_of(m));
                printf ("size of array a : %d \n",my_size_of(a));
}

//-6 assignment 4

#include <stdio.h>
#include <stdlib.h>
void reverse(char *str);

int main()
{
    char a[20];
    printf("enter the the array you want to reverse : ");
    scanf("%s",&a);
    reverse(&a);
    printf("%s",a);

}
void reverse(char *str)
{
    char *start=str;
        char *end=str;
        char temp;

        while(*end!=0)
                end++;
              end--;
        while(start<end)
        {
            temp=*start;
            *start=*end;
            *end=temp;
            start++;
            end--;
        }
}

//-7 assignment 4
#include <stdio.h>

void sort2DArray(int *array, int rows, int cols) {
    int size = rows * cols;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(array + i) > *(array + j)) {
                int temp = *(array + i);
                *(array + i) = *(array + j);
                *(array + j) = temp;
            }
        }
    }
}

int main() {
    int array[3][3] = {
        {5, 3, 8},
        {1, 7, 4},
        {9, 2, 6}
    };
    int *ptr;
    ptr = &array[0][0];

    sort2DArray(ptr, 3, 3);

    printf("The sorted 2D array is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//-8 assignment 4

#include <stdio.h>
#include <stdlib.h>

void bet(int a, int b) {
    if (a >= b - 1) {
        printf("No numbers in between.\n");
        return;
    }

    int size = b - a - 1;
    int *x = (int*)malloc(size * sizeof(int));

    if (x == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    for (int i = 0; i < size; i++) {
        x[i] = a + 1 + i;
    }

    printf("Numbers between %d and %d: ", a, b);
    for (int i = 0; i < size; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");

    free(x);
}

int main() {
    int num1, num2;
    printf("Enter two numbers: \n");
    scanf("%d %d", &num1, &num2);
    bet(num1, num2);

    return 0;
}

//-9 assignment 4

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void max_count(int b[],int s,int *most_repeated,int *max);
int main()
{
    int i;
     int a[15];
     for(i=0;i<15;i++){
        printf("enter  the number  : ");
        scanf("%d",&a[i]);
     }
     int most_repeated,max;
        max_count(a,15,&most_repeated,&max);
        printf("the most repeated element is (%d) %d times",most_repeated,max);


}
void max_count(int b[],int s,int *most_repeated,int *max)
{
    int i,j,count=0;
    *max=0;
    *most_repeated=0;
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
            {
                if (b[i]==b[j])
                count+=1;
            }
    if(count>*max)
        {
         *max=count;
         *most_repeated=b[i];
        }
        count=0;
    }
}









