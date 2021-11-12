#include<stdio.h>
#include<conio.h>


int main()
{
    int Num = 0;
    printf("\n Enter an Inter Number = ");
    scanf("%d",&Num);

    if(  Num == 0)
    {
            printf("\n Given Number is Neutral.");

    }
     else if(Num % 2 == 0)
     {
            printf("\n Given Number is EVEN.");

     }
     else
     {
            printf("\n Given Number is ODD");
     }
     printf("\n Thanks");

     getch();
     return 0;
}
