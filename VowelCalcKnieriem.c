#include <stdio.h>
#include <ctype.h>

/*
    module      :   VowelCalcKnieriem.c
    Description :   Vowel Counter
    Author      :   Brandon Knieriem
    Rev History :

    Date        Comment
    ----        -------
    9/27        Program creation.
    9/29        Added a digit counter. Punctuation counter. Extra credit?!?! :D :D :D
    9/30        Final program.

    Notes:
    ------
    I'm still making really stupid syntax mistakes.

 */

char ch;
int k = 0;
int a = 0;
int v = 0;
int d = 0;
int p = 0;

int main(void)
{
    printf("Type a sentence and hit enter: ");

    do
    {
        scanf("%c", &ch);

        if (ch == '\n')
        {
            break;
        }
        else
        {
            ch = tolower(ch); // Converts everything to lower case for the vowel check.
            k += 1;

            if (ch == 'a' || ch ==  'e' || ch == 'i' ||ch == 'o' ||ch== 'u') // Vowel check. Compensates for the Alpha increment if Vowel == True.
            {
                v += 1;
                a += 1;
            }
            else if (isalpha(ch)) // Alpha check.
            {
                a += 1;
            }
            else if (isdigit(ch)) // Digit check.
            {
                d += 1;
            }
            else if (ispunct(ch)) // Punctuation check.
            {
                p += 1;
            }
        }
    }
    while (ch != '\n');

    printf("Keystrokes: %i \n", k);
    printf("Alphabetical Characters: %i \n", a);
    printf("Vowels: %i \n", v);
    printf("Digits: %i \n", d);
    printf("Punctuation: %i \n", p);

    return 0;
}
