#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
        char Grade = '\0';
        int R_NO = 0;
        float Per = 0.0;
        char Nm[80] = "";

        printf("\n Enter Student Details => ");

        printf("\n\t Enter Student Roll Number =");
        scanf("%d",&R_NO);

        fflush(stdin);

        printf("\n\t Enter Student Name = ");
        gets(Nm);

        printf("\n\t Enter Student Percentage = ");
        scanf("%f",&Per);

        printf("\n\t Enter Student Grade = ");
        Grade = getche();

        system("cls");

        printf("\n\t Student Information \n");
        printf("\n=============************==========\n");

        printf("\n\t Roll Number = %d.\n\t Name  =%s.\n\t Percentage = %0.2f.\n\t Grade     =%c.", R_NO, Nm, Per, Grade);

        printf("\n==========************=========\n");

        getch();
        return 0;
}
