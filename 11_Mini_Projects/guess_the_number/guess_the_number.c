#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void print_commmands()
{
    printf("Welcome to the Guess The Number Game!\n");
    printf("Here are the available commands of the game:\n");
    printf("1. start      - Start a new game\n");
    printf("2. help       - Show how to play the game\n");
    printf("3. customize  - Customize as your choice \n");
    printf("4. exit       - Quit the running game anytime\n");
}

void print_instructions()
{
    printf("Basically It's a very simple game where a random number will generate automatically.\n");
    printf("And you have to guess it within 10 guesses or the level will be failed. As less guesses\n");
    printf("you will take , you earn more score.You can also exit the game as your wish or mood.\n");
    printf("Instructions:\n");
    printf("Type 'start' to begin the game.\n");
    printf("Then you can select a level of difficulty.\n");
    printf("Type 'help' to see instructions & featuers of the game.\n");
    printf("Type 'customize' to customize the game.\n");
    printf("You can customize according your demand.\n");
    printf("Type 'exit' to exit the game.\n");
}

int generateRandomNumber(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}



int main()
{
    print_commmands();
    while(1)
    {
    printf("Enter your command: ");
    char command[20];
    scanf("%s", command);
    if (strcmp(command, "exit")==0)
    {
        printf("Thanks for Playing.\n");
        printf("Exiting the game....\n");
        return 0;
    }
    else if (strcmp(command, "help")==0)
    print_instructions();
   
    else if (strcmp(command, "start")==0)
    {
    srand(time(NULL));
    int randomNum = generateRandomNumber(1, 100);
    int guessedNumber;
    int guessCount = 0;
    int guessLimit = 10; 
    int score = 0;
    do
    {
        printf("Let's try to guess the number: ");
        scanf("%d", &guessedNumber);
        guessCount++;

        if (guessedNumber > randomNum)
        {
            printf("You have entered Higher Number!! Try Lower.\n");
        }
        else if (guessedNumber < randomNum)
        {
            printf("You have entered Lower Number !! Try Higher.\n");
        }
        else if (guessCount >= guessLimit)
        {
            printf("Oopsssss,Game Over !!!\nYou've reached the maximum number of attempts (%d). The number was %d.\n", guessLimit, randomNum);
            break;
        }
        else
        {
            score = 100 - (guessCount * 10) + 10;
            printf("Congratulations!\nYou've guessed the number %d correctly in %d attempts.\nYour score is: %d\n", randomNum, guessCount, score);
        }
      

    } while (guessedNumber != randomNum );

     }
    else if (strcmp(command, "customize")==0)
    {
        printf("You can customize the game according to your choice.\n");
        printf("For example, you can change the range of numbers or the number of attempts allowed.\n");
        
    }
    else
    {
        printf("Invalid command !! Please type 'help' to see the command list or try again.\n");
    }
}

    return 0;
}
