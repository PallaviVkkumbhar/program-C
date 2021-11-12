#include<stdio.h>
#include<conio.h>

int main()
{
        int Num1 = 0, Num2 = 0;

        printf("\n Enter 2 Interger Numbers = ");
        scanf("%d%d",&Num1,&Num2);

        (Num1 == Num2) ? printf("\n Both Given Number are Equal") : ( ( Num1 > Num2) ? printf("\n Number %d is Maximum .",Num1) : printf("\n Number %d is maxium.",Num2);

        printf("\n thanks!!!");

        getch();
        return 0;
}
