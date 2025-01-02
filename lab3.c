//-1 lab
#include <stdio.h>
#include <stdlib.h>
void bet(int a,int b)

{
   int x[10];
    int i=0;
    for( i=0; (a+1)<b ; i++)
    {
       x[i]=(a+1);
        printf("%d **",x[i]);
        a++;
    }
}

int main()
{
    int num1,num2;
    printf("enter two numbers : \n");
    //fflush(stdin);
    scanf("%d",&num1);
     fflush(stdin);
    scanf("%d",&num2);
    bet(num1,num2);
}



//-2 lab
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void max_count(char b[],int a);
int main()
{
    int i;
     char a[15];
        printf("enter  the number  : ");
        scanf("%s",&a);
        max_count(a,strlen(a));

}
void max_count(char b[],int s)
{
    int i,j,count=0,max=0,most_repeated=0;
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
            {
                if (b[i]==b[j])
                count+=1;
            }

    if(count>max)
        {
         max=count;
         most_repeated=b[i];

        }

        count=0;
    }
     printf("the most repeated element is (%c) %d times",most_repeated,max);
}



//-3 lab
#include <stdio.h>
#include <stdlib.h>
void search (int a[],int s);
int i;
int main()
{
    int x[10];
    for(i=0;i<10;i++)
{
    printf("enter the element  %d : ",i+1);
    scanf("%d",&x[i]);
}

    search(x,10);
    return 0;


}
void search (int a[],int s)
{
    int num;
    printf("enter the number you want to search for : ");
    scanf("%d",&num);
    for(i=0;i<s;i++)
    {
    if (num==a[i])
        {
            printf("founded the number %d is  %d element in the array",num,i+1);
        break;
        }
    }

}

//-4 lab

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: \n");
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}

// -1 assignment

#include <stdio.h>

int calculateSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int arr[10];

    printf("Enter 10 integers: \n");
    for (int i = 0; i < 10; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int sum = calculateSum(arr, 10);
    int max = findMax(arr, 10);
    int min = findMin(arr, 10);

    printf("Sum of the array elements: %d\n", sum);
    printf("Maximum element in the array: %d\n", max);
    printf("Minimum element in the array: %d\n", min);

    return 0;
}
 //-2 assignment

 #include <stdio.h>

void inputMatrix(int matrix[3][3], int matrixNumber) {
    printf("Enter elements for matrix %d:\n", matrixNumber);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void multiplyMatrices(int firstMatrix[3][3], int secondMatrix[3][3], int resultMatrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void printMatrix(int matrix[3][3], const char* matrixName) {
    printf("%s:\n", matrixName);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int firstMatrix[3][3];
    int secondMatrix[3][3];
    int resultMatrix[3][3];

    inputMatrix(firstMatrix, 1);
    inputMatrix(secondMatrix, 2);

    multiplyMatrices(firstMatrix, secondMatrix, resultMatrix);

    printMatrix(firstMatrix, "First Matrix");
    printMatrix(secondMatrix, "Second Matrix");
    printMatrix(resultMatrix, "Resultant Matrix");

    return 0;
}

//-3 assignment

#include <stdio.h>
#include <string.h>

void concatenateNames(const char* firstName, const char* secondName, char* result) {
    strcpy(result, firstName);

    strcat(result, " ");

    strcat(result, secondName);
}

int main() {
    char firstName[50];
    char secondName[50];
    char fullName[100];
    printf("Enter the first name: ");
    fgets(firstName, sizeof(firstName), stdin);
    firstName[strcspn(firstName, "\n")] = 0;
    printf("Enter the second name: ");
    fgets(secondName, sizeof(secondName), stdin);
    secondName[strcspn(secondName, "\n")] = 0;
    concatenateNames(firstName, secondName, fullName);

    printf("Full name: %s\n", fullName);

    return 0;
}

//-4 assignment


#include <stdio.h>
#include <string.h>
#include <stdbool.h>


bool isCharInString(char ch, const char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            return true;
        }
    }
    return false;
}

void copyWithoutRepeats(const char* input, char* output) {
    int j = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        if (!isCharInString(input[i], output)) {
            output[j++] = input[i];
        }
    }
    output[j] = '\0';
}

int main() {
    char input[100];
    char output[100] = "";

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;

    copyWithoutRepeats(input, output);

    printf("Output: %s\n", output);

    return 0;
}

//-5 assignment


#include <stdio.h>
#include <stdlib.h>

int* mergeZigzag(int* arr1, int size1, int* arr2, int size2) {
    int mergedSize = size1 + size2;
    int* mergedArray = (int*)malloc(mergedSize * sizeof(int));
    if (mergedArray == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        mergedArray[k++] = arr1[i++];
        mergedArray[k++] = arr2[j++];
    }

    while (i < size1) {
        mergedArray[k++] = arr1[i++];
    }

    while (j < size2) {
        mergedArray[k++] = arr2[j++];
    }

    return mergedArray;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {11, 12, 13, 14, 15};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int* mergedArray = mergeZigzag(arr1, size1, arr2, size2);
    int mergedSize = size1 + size2;

    printf("Merged array: ");
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    free(mergedArray);

    return 0;
}

//-6 assignment
#include <stdio.h>

int longestConsecutiveOccurrence(int arr[], int size, int num) {
    int maxCount = 0;
    int currentCount = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            currentCount++;
            if (currentCount > maxCount) {
                maxCount = currentCount;
            }
        } else {
            currentCount = 0;
        }
    }

    return maxCount;
}

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 3, 3, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num;

    printf("Enter the number to search for: ");
    scanf("%d", &num);

    int result = longestConsecutiveOccurrence(arr, size, num);

    printf("The longest consecutive occurrence of %d is %d.\n", num, result);

    return 0;
}

//-7 assignment

#include <stdio.h>

typedef struct {
    int number;
    int count;
} Result;

Result longestConsecutiveOccurrence(int arr[], int size) {
    Result result = {0, 0};
    int currentNumber = arr[0];
    int currentCount = 1;

    for (int i = 1; i < size; i++) {
        if (arr[i] == currentNumber) {
            currentCount++;
        } else {
            if (currentCount > result.count) {
                result.number = currentNumber;
                result.count = currentCount;
            }
            currentNumber = arr[i];
            currentCount = 1;
        }
    }

    if (currentCount > result.count) {
        result.number = currentNumber;
        result.count = currentCount;
    }

    return result;
}

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 3, 3, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    Result result = longestConsecutiveOccurrence(arr, size);

    printf("Number %d was repeated %d times.\n", result.number, result.count);

    return 0;
}


