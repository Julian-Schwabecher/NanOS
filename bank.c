#include <stdbool.h>
#include <stdio.h>

float balance;

void checkBalance();
float deposit(float balance);
float withdraw(float amount);

typedef struct {
  long number;
  char *name;
  char *type;
} bankAccount;

int main() {

  bankAccount userBank = {3815683158, "Julian Schwabecher", "Checking"};

  printf("%s\n", userBank.name);
  while (true) {
    int choice = 0;
    printf("Welcome to your bank\n");
    printf("1. Check Balance\n");
    printf("2. Make Deposit\n");
    printf("3. Make Withdrawal\n");
    printf("Which would you like to do: ");
    scanf("%d", &choice);
    switch (choice) {
    case 1: {
      checkBalance();
      break;
    }
    case 2: {
      float amount_dep;
      printf("How much would you like to deposit: ");
      scanf("%f", &amount_dep);
      deposit(amount_dep);
      break;
    }
    case 3: {
      float amount_with;
      printf("How much would you like to withdraw: ");
      scanf("%f", &amount_with);
      withdraw(amount_with);
      break;
    }
    }
  }
  return 0;
}

void checkBalance() { printf("%f\n", balance); }

float deposit(float amount) {
  balance += amount;
  return balance;
}

float withdraw(float amount) {
  balance -= amount;
  return balance;
}
