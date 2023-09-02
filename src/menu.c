#include <conio.h>
#include <windows.h>
// NOTE TO SELF: Having OS specific preprocessors means functionality won't work right on another OS
//               find a work around

// global variable declarations


// function declarations
void mainMenu();

void mainMenu()
{
    long long int menuOption = 0;

    system("cls");
    printf ("\t=========================\n");
    printf ("\t|   Tic-Tac-Toe: World  |\n");
    printf ("\t|\tMain Menu\t|\n");
    printf ("\t|1. Play\t \t|\n");
    printf ("\t|2. Settings\t \t|\n");
    printf ("\t|3. Instructions\t|\n");
    printf ("\t|4. About\t \t|\n");
    printf ("\t|5. Leave\t \t|\n");
    printf ("\t|Choice: ");
    scanf ("%llu", &menuOption);
    // llu need to account for the long integer at the secretes menu
    switch (menuOption)
    {
        case 1:
            //play();
            mainMenu();
        break;

        case 2:
            //settings();
            mainMenu();
        break;

        case 3:
            //instructions ();
            mainMenu();
        break;

        case 4:
            //about();
            mainMenu();
        break;

        case 5:
            printf ("\n\tThank You for playing Tic-Tac-Toe: World.\n");
            printf ("\tIf you enjoyed it, please consider playing another time!");
            getch();
            exit(0);
        break;

        case 657349677982828580:
            //secrets ();
            mainMenu();
        break;

        default:
            mainMenu();
        break;
    }
}
