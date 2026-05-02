#include <stdio.h>
#include <string.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

struct Account accounts[100];
int count = 0;

void createAccount() {
    printf("\nEnter Account Number: ");
    scanf("%d", &accounts[count].accNo);

    printf("Enter Name: ");
    scanf("%s", accounts[count].name);

    printf("Enter Initial Balance: ");
    scanf("%f", &accounts[count].balance);

    count++;
    printf("Account Created Successfully!\n");
}


void deposit() {
    int accNo;
    float amount;
    printf("\nEnter Account Number: ");
    scanf("%d", &accNo);

    for(int i = 0; i < count; i++) {
        if(accounts[i].accNo == accNo) {
            printf("Enter Amount to Deposit: ");
            scanf("%f", &amount);

            accounts[i].balance += amount;
            printf("Deposit Successful!\n");
            return;
        }
    }
    printf("Account Not Found!\n");
}


void withdraw() {
    int accNo;
    float amount;
    printf("\nEnter Account Number: ");
    scanf("%d", &accNo);

    for(int i = 0; i < count; i++) {
        if(accounts[i].accNo == accNo) {
            printf("Enter Amount to Withdraw: ");
            scanf("%f", &amount);

            if(accounts[i].balance >= amount) {
                accounts[i].balance -= amount;
                printf("Withdrawal Successful!\n");
            } else {
                printf("Insufficient Balance!\n");
            }
            return;
        }
    }
    printf("Account Not Found!\n");
}

void checkBalance() {
    int accNo;
    printf("\nEnter Account Number: ");
    scanf("%d", &accNo);

    for(int i = 0; i < count; i++) {
        if(accounts[i].accNo == accNo) {
            printf(" Balance: %.2f\n", accounts[i].balance);
            return;
        }
    }
    printf("Account Not Found!\n");
}


void displayAccounts() {
    printf("\n--- Account Details ---\n");
    for(int i = 0; i < count; i++) {
        printf("AccNo: %d | Name: %s | Balance: %.2f\n",
               accounts[i].accNo,
               accounts[i].name,
               accounts[i].balance);
    }
}


int main() {
    int choice;

    do {
        printf("\n===== BANKING SYSTEM =====\n");
        printf("1. Create Account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Check Balance\n");
        printf("5. Display All Accounts\n");
        printf("0. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: createAccount(); break;
            case 2: deposit(); break;
            case 3: withdraw(); break;
            case 4: checkBalance(); break;
            case 5: displayAccounts(); break;
            case 0: printf(" Exiting...\n"); break;
            default: printf("Invalid Choice!\n");
        }

    } while(choice != 0);

    return 0;
}
