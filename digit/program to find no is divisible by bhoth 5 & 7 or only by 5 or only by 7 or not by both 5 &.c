#include<stdio.h>
#include<conio.h>
int main()

{
        int Num = 0;

        printf("\n\n Enter a Number = ");
        scanf("%d",&Num);

        if( ( Num % 5 == 0)&& (Num % 7 == 0 ) )
        {
                printf("\n Number is Divible By Both 5 & 7.");
        }
      else if(Num % 5 == 0)
        {
                printf("\n Number is on;y Divisible by 5.");
        }
        else if(Num % 7 == 0)
        {
                printf("\n Number is Only Divisible By 5.");
        }
        else
        {
                printf("\n Number is Not Divisible By 7.");
        }

         printf("\n\n thanks");

         getch();
         return 0;
}
