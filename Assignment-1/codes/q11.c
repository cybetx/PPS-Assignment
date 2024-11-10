/*11. Write a program that accepts the colours code for one of the colours of the rainbow and displays its name. And it also asks the programmer whether he/she wants to continue.This program is repeatedly executed as long as user's choice 1.*/



#include <stdio.h>

int main() {
    int conti = 1; // initialize conti to 1 so the loop can start
    char color, play;

    printf("Do you want to play the rainbow game?\n");
    printf("Choose 'y' for Yes and 'n' for No\n--> ");
    scanf(" %c", &play);

    if (play == 'y') {
        while (conti == 1) {
            printf("Choose a color:\n");
            printf("'v': Violet\n'i': Indigo\n'b': Blue\n'g': Green\n'y': Yellow\n'o': Orange\n'r': Red\n--> ");
            scanf(" %c", &color);

            switch (color) {
                case 'v':
                    printf("You chose Violet color.\n");
                    printf("Quote: \"Violet is the color of dreams. Let your imagination take flight!\"\n");
                    break;
                case 'i':
                    printf("You chose Indigo color.\n");
                    printf("Quote: \"Indigo is mysterious and deep. Embrace your inner wisdom!\"\n");
                    break;
                case 'b':
                    printf("You chose Blue color.\n");
                    printf("Quote: \"Blue skies ahead! Stay calm, cool, and collected.\"\n");
                    break;
                case 'g':
                    printf("You chose Green color.\n");
                    printf("Quote: \"Green is the color of growth. Keep blooming every day!\"\n");
                    break;
                case 'y':
                    printf("You chose Yellow color.\n");
                    printf("Quote: \"Yellow shines bright! Let your positivity light up the world.\"\n");
                    break;
                case 'o':
                    printf("You chose Orange color.\n");
                    printf("Quote: \"Orange is full of energy! Keep spreading warmth and joy.\"\n");
                    break;
                case 'r':
                    printf("You chose Red color.\n");
                    printf("Quote: \"Red is bold and passionate. Follow your heart with courage!\"\n");
                    break;
                default:
                    printf("Invalid choice! Choose one of the rainbow colors to play.\n");
                    break;
            }

            printf("Do you want to continue? Choose '1' to play again or '0' to exit: ");
            scanf("%d", &conti);
        }
    } else if (play == 'n') {
        printf("You exited the game. If you want to play, restart the program...\n");
    }

    return 0;
}
