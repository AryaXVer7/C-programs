#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getUserChoice();
int getComputerChoice();
void CheckWinner(int UserChoice, int ComputerChoice);

int main()
{
    printf("***Rock,Paper and Scissor***\n");

    srand(time(NULL));

    int UserChoice=getUserChoice();
    int ComputerChoice=getComputerChoice();

    switch (UserChoice)
    {
    case 1:
        printf("You Choose Rock!\n");
        break;
    case 2:
        printf("You Choose Paper!\n");
        break;
    case 3:
        printf("You Choose Scissor!\n");
        break;
    }

    switch (ComputerChoice)
    {
    case 1:
        printf("Computer Choose Rock!\n");
        break;
    case 2:
        printf("Computer Choose Paper!\n");
        break;
    case 3:
        printf("Computer Choose Scissor!\n");
        break;
    }

    CheckWinner(UserChoice, ComputerChoice);

    return 0;
}

int getComputerChoice(){
    return (rand()%3)+1;
}
int getUserChoice(){
    int choice;
    do{
        printf("Choose an option: \n");
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissor\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
    }while (choice < 1 || choice > 3);

    return choice;
    
    
}
void CheckWinner(int UserChoice, int ComputerChoice){
    if(UserChoice==ComputerChoice){
        printf("It's a TIE!\n");
    }
    else if((UserChoice==1 && ComputerChoice==3)||(UserChoice==2 && ComputerChoice==1)||(UserChoice==3 && ComputerChoice==2)){
        printf("You WIN!\n");
    }
    /*else if(UserChoice==2 && ComputerChoice==1){
        printf("You WIN!\n");
    }
    else if(UserChoice==3 && ComputerChoice==2){
        printf("You WIN!\n");
    }*/
    else{
        printf("You LOSE!\n");
    }
}