#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main (void)

{
    string text = get_string("Text: \n");

    int length = 0;
    for (int i = 0, n = strlen(text); i < n; i++)

    {
        if (!isspace(text[i]) && isalpha(text[i]))
          {
            length++;
        }

    }


     printf("The length of your text is: %d\n", length);

    return 0;
}