#include<stdio.h>
#include<conio.h>

int main()
{
        char ch ='\0';
        printf("\n enter a character to check whether,\n(it is uppercase or lower case or digit or special symbol) = ");
        ch = getche();

        if((ch >= 'A')&& (ch <='z'))
        {
                    printf("\n\n given character is uppercase letter.");
        }
       else if ((ch >= 'a')&& (ch <= 'z'))
        {
                    printf("\n\n given character is lowercase letter.");
        }
        else if ((ch >= '\0')&& (ch <= '9'))
        {
                    printf("\n\n given character is digit. ");

        }
        else
        {
                    printf("\n\n given character is special symbol.");
        }

        printf("\n\n thamks");

        getch();
        return 0;

}
