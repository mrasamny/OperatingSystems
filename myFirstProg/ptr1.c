#include <stdio.h>

void swap(int*, int*);

int main()
{
    int a;
    int b;
    
    printf("Please enter integer: ");
    scanf("%d",&a);
    printf("Please enter integer: ");
    scanf("%d",&b);
    
    printf("Before swap: a = %d and b = %d\n",a,b);
    swap(&a,&b);
    printf(" After swap: a = %d and b = %d\n",a,b);
    return 0;
}

void swap(int* num1, int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
