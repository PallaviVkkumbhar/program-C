#include<stdio.h>
#include<conio.h>

int main()

{
        char ch = 'A';
        printf("\n value character =%c.\n\n",ch);
        printf("\n enter new charcter value =");

        ch = getch();
        printf("\n\n new value of charcter =%c.\n,",ch);
        printf("\n thanks for using our app. \n press a key to exit.");

        getch();
        return 0;


}
