#include <stdio.h>
#include <string.h>

int main()
{
    char string[30];

    // Kullanıcıdan girdi alınması
    printf("Bir string girin: ");
    gets(string);

    int i, length;
    int flag = 0;
    length = strlen(string);

    for (i = 0; i < length; i++)
    {
        printf("%c == %c\n", string[i], string[length - i - 1]);

        if (string[i] != string[length - i - 1])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf("String palindrom değildir.");
    }
    else
    {
        printf("String palindromdur.");
    }

    return 0;
}
