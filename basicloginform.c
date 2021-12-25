#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
    char username[15];
    char password[12];

    printf("Enter your username:\n");
    scanf("%s", &username);

    printf("Enter your password:\n");
    scanf("%s", &password);

    if ((strcmp(password, "123") == 0) && (strcmp(username, "sayali") == 0))
    {
        printf("\nwelcome.login success!");
    }
    else
    {
        printf("\nUser doesn't exist");
    }
    return 0;
}