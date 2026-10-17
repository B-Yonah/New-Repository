#include <stdio.h>
int main()
{
    int system;
    float Balance, Withdraw, Deposit;
    printf("\tSEASAW BANKING SYSTEM\t\n");
    printf("\tPress 1 to Check Balance\t\n");
    printf("\tPress 2 to Withdraw Money\t\n");
    printf("\tPress 3 to Deposit Money\t\n");
    printf("Enter your choice: ");
    scanf("%d", &system);
    Balance = 1000;
    switch(system)
    {
        case 1: printf("Avalable Balance is: %d\n", Balance);
                break;
                
        case 2: printf("Enter the amount to Withdraw\n");
                scanf("%f", &Balance);
                    
                if(Balance <= Withdraw && Withdraw <= 0){
                    Balance = Balance - Withdraw;
                    printf("The amount withdrawn is: %f\n", Withdraw);
                    printf("Available Balance is: %f\n", Balance);
                }else{
                    printf("Transaction Failed due to insufficient Balance!!!\n");  
                    }
                break;
        case 3: printf("Enter the amount to deposit\n");
                scanf("%f", &Deposit);
                if(Deposit>=0)
                    Balance = Deposit + Balance;
                else
                    printf("Deposit can't be zero or negative\n");
                break;
        
            
        default:
            printf("Invalid Choce!\n");

    }
    return 0;

}