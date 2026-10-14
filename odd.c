#include <stdio.h>
int main()
{
    int n, an, a;
    printf("Enter the no. of rows: ");
    scanf("%d", &n);

    an = (2*n)-1;
    
    for(int i = 1; i<=n; i++){
        a = 1;
        for(int j = 1; j<=i; j++){
            printf("%d ", a);
            a = a+2;
        }
        printf("\n");
    }
    return 0;

}