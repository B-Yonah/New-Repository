#include <stdio.h>
int main()
{
    int num, num1,num2,num3, num4, num5,num6, rev, rev2, rev3, reverse;
    printf("Enter any three digit number: ");
    scanf("%d", &num);
 
    
    num1 = num%10;
    num2 = num/10;
    num3 = num2%10;
    num4 = num3/10;
    num5 = num4%10;
    rev = num5;
    // num6 = num/1000;

    // reverse = (num1*1000)+(num3*100)+(num5*10)+(num6);
    printf("the reverse num is: %d\n", num5);
    return 0;

}