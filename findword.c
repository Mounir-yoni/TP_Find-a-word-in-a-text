#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

bool findword(char text[], char word[]);

int main()
{

    char text[100];
    char word[100];

    printf("enter the text\n");
    fgets(text, sizeof(text), stdin);

    printf("enter the word");
    scanf("%s", word);

    bool result = findword(text, word);

    if (result == true)
    {
        printf("the word was found");
    }
    else
    {
        printf("the word was not found");
    }
}

bool findword(char text[], char word[])
{

    int word_len = strlen(word); // Calculate word length
    int text_len = strlen(text);

    for (int i = 0; i <= text_len - word_len; i++)
    {
        // Check if letters match
        if (strncmp(&text[i], word, word_len) == 0)
        {
            // Check if the end of the word
            if ((i == 0 || !isalpha(text[i - 1])) && (i + word_len == text_len || !isalpha(text[i + word_len])))
            {
                return true;
            }
        }
    }

    return false;
}