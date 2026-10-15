// ye karna hai jab bhi dubara dekha...hollow rectangle print karna hai!!

#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter the no. of the rows: ");
    scanf("%d", &n);
    printf("Enter the no. of the columns: ");
    scanf("%d", &m);
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            if(i>1 || i<n) printf(" ");
            else printf("*");
        }
        printf("\n");
    }
    return 0;
}