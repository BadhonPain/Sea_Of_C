#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_description()
{
    printf("========================================\n");
    printf("      Welcome to Snake, Water & Gun!     \n");
    printf("========================================\n");
    printf("Rules of the Game:\n");
    printf("1. Snake vs Water -> Snake drinks the Water (Snake Wins)\n");
    printf("2. Water vs Gun   -> Gun sinks in Water (Water Wins)\n");
    printf("3. Gun vs Snake   -> Gun kills the Snake (Gun Wins)\n");
    printf("4. Same choice    -> It's a Draw\n");
    printf("----------------------------------------\n");
    printf("How to Play:\n");
    printf("Choose '0' for Snake, '1' for Water, '2' for Gun\n");
    printf("Then computer will choose randomly.\n");
    printf("Let's see who wins, You or Computer!\n");
    printf("========================================\n\n");
}

const char *choices[] = {"Snake", "Water", "Gun"};

int main()
{
    print_description();
    srand(time(0));

    int player, computer;
    int playerScore = 0, computerScore = 0, rounds = 0;
    char playAgain = 'y';

    while (playAgain == 'y' || playAgain == 'Y')
    {
        printf("\nEnter your choice (0=Snake, 1=Water, 2=Gun): ");
        if (scanf("%d", &player) != 1)
        {
            printf("Invalid input! Please enter only 0, 1, or 2.\n");
            while (getchar() != '\n'); 
            continue;
        }

        if (player < 0 || player > 2)
        {
            printf("Invalid choice! Please enter only 0, 1, or 2.\n");
            continue;
        }

        computer = rand() % 3;
        printf("You chose: %s\n", choices[player]);
        printf("Computer chose: %s\n", choices[computer]);

        if (player == computer)
        {
            printf("Result: It's a Draw!\n");
        }
        else if ((player == 0 && computer == 1) ||
                 (player == 1 && computer == 2) ||
                 (player == 2 && computer == 0))
        {
            printf("Result: You Win this round!\n");
            playerScore++;
        }
        else
        {
            printf("Result: Computer Wins this round!\n");
            computerScore++;
        }

        rounds++;
        printf("Score -> You: %d | Computer: %d | Rounds Played: %d\n",
               playerScore, computerScore, rounds);

        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &playAgain);
    }

    printf("\n========================================\n");
    printf("            Final Scoreboard            \n");
    printf("========================================\n");
    printf("Total Rounds: %d\n", rounds);
    printf("Your Score   : %d\n", playerScore);
    printf("Computer Score: %d\n", computerScore);

    if (playerScore > computerScore)
        printf("Congratulations! You are the overall Winner!\n");
    else if (playerScore < computerScore)
        printf("Computer Wins the Game! Better luck next time.\n");
    else
        printf("The game ends in a Draw!\n");

    printf("========================================\n");

    return 0;
}
