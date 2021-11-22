/*
1. Receive a maximum 4-digit integer n. Write a program to read the number n.
 ________________________________________________
| Input: 1234                                    |
| Output: one thousand two hundred thirty four   |
|________________________________________________|
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char input[100] = "";
    char word[20] = "";
    char longest[20] = "";
    char shortest[20] = "";

    int wordindex = 0;
    printf ("Input a string: ");
    fgets(input, sizeof(input), stdin);

    for (int inputindex = 0; inputindex < strlen(input); inputindex++){
        while (inputindex < strlen(input)&&
                !isspace(input[inputindex])&&
                isalnum(input[inputindex])) {
                    word[wordindex++]=input[inputindex++];
                }
                if (wordindex != 0)
                {
                    word[wordindex] = '\0';

                    if (strlen(longest) == 0)
                    {
                        strcpy(longest, word);
                    }
                    if (strlen(shortest) == 0)
                    {
                        strcpy(shortest, word);
                    }
                    if (strlen(word) > strlen(longest))
                    {
                        strcpy(longest, word);
                    }
                    if (strlen(word) < strlen(shortest))
                    {
                        strcpy(shortest, word);
                    }
                    wordindex = 0;
                }
    }
    printf ("Longest word: '%s'", longest);
    printf ("\nShortest word: '%s'", shortest);

    return 0;
}
