/*
3. Receive a string, find the shortest and longest word in that string.
Ex:
 __________________________________________________________
| Input: "This is a string with shortest and longest word" |
| Output: Shortest word: a                                 |
|         Longest word: shortest                           |
|__________________________________________________________|
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
