#include<stdio.h>
int main(){
    float num1,num2,result =0;
    int choice;
    printf("1 choice +  \n");
    printf("2 choice -  \n");
    printf("3 choice *  \n");
    printf("4 choice /  \n");
    printf("Enter your Choice: ");
    scanf("%d",&choice);
    printf("Enter first number ");
    scanf("%f",&num1);
    printf("Enter second number ");
    scanf("%f",&num2);
    
    switch (choice)
    {
    case 1:
        result = num1+num2;
        break;
    case 2:
        result =num1-num2;
        break;
    case 3:
        result =num1*num2;
        break;
    case 4:
        result = num1/num2;
        break;
    
    default:
        printf("condition fail");
        break;
    }
    printf("  the value  = %.3f",result);
    return 0;
}