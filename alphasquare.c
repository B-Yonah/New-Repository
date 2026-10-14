#include <stdio.h>
int main()
{
    int a, n;
    printf("Enter the no. of rows: ");
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        a = 1;
        for(int j = 1; j<=n; j++){
            char ch = (char) a+64;
            printf("%c ", ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}