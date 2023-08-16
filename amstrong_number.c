#include<stdio.h>
int main()
{
    int num; /*num variable is used to store the input received from the user*/
    int check=0,cube,rem,result=0; /*check variable is used to store the input value is stored here for future reference rem variable is used to store remainder result variable is used to store final result*/
    printf("Enter the number to be checked: ");
    scanf("%d",&num); /* The input number is stoed here at the num variable.*/
    check=num; /* check is the variable where the input number is beign stored for the reference */
    while(num>0)
    {
        rem=num%10; /* The reminder for finding the single-single numbers*/
        cube=(rem*rem*rem); /*the cube variable is used for storing the cube of the single-single numbers*/
        result=cube+result; /*the result variable is used to store the sum of cubes*/
        num=num/10;
    }
    if(check==result) /*if the loop is used for checking whether the given number is an armstrong number or not*/
    {
        printf("The number %d is an Armstrong number !!",check);
    }
    else
    {
        printf("The number %d is not an Armstrong number !!",check);
    }
}
