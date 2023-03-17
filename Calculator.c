#include<stdio.h>

int main()
{
    int num1,num2;
    int choice;
    float result;
    printf("Enter two number:");
    scanf("%d%d",&num1,&num2);
    printf("Enter your Choice:\n 1.Addition \n 2.Substraction \n 3.Multiplication \n 4.Division:");
    scanf("%d",&choice);
    
    switch (choice)
    {
    case 1:
        result =num1+num2;
        printf("Add of %d and %d is %f\n",num1,num2,result);
        break;
    case 2:
        result =num1-num2;
        printf("Substraction of %d and %d is %f\n",num1,num2,result);
        break;
    case 3:
        result =num1*num2;
        printf("Multiplication of %d and %d is %f\n",num1,num2,result);
        break;
    case 4:
        result =num1/num2;
        printf("Divide of %d and %d is %f\n",num1,num2,result);
        break;    
    
    default:
        break;
    }
    return 0;
}