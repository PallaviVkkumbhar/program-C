#include<stdio.h>
#include<conio.h>

int main()

{
        char sch = '\0', Ech = '\0';

        printf("\n Enter Starting Character = ");
        sch = getch();

        printf("\n Enter Ending Character =");
        Ech = getch();

        for( ; sch <= Ech ; sch++);
        {
            printf("\n %c",sch);

        }

        printf("\n\n thanks ");

        getch();
        return 0;

}
