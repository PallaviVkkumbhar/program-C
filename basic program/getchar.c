#include<stdio.h>
#include<conio.h>

int main()
{
        char ch = 'A';
        printf("\n\nvale of Our character is = %c.\n....... Hello Indians.......  \n\n",ch);

        printf("\n Are You Indian????? (Yes\No)");

        ch = getchar();

        if(ch == 'y'  ||  ch =='y')
        {
            printf("\n\n WELCOME DEAR \n\n");

        }

        else
        {
            printf("\n\n Bye Bye....\n\n");

        }

        getche();
        return 0;

}
