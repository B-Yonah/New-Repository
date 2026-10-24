#include <stdio.h>
int main()
{
    int age;
    int count_old = 0;
    for(int i = 1; i<=10; i++){
        printf("Enter the ages: ");
        scanf("%d", &age);
        if(age>= 50 && age<=60){
            count_old = count_old + 1;
        }
        else{
            continue;
        }

    }
    printf("The number of people between 50 and 60 are: %d", count_old);
    return 0;
}