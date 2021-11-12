#include<stdio.h>
#include<conio.h>
int main()

{
        int Num = 0;
        printf("Enter an Integer Number to check Whether it Even Or Odd = ");
        Up :
        scanf("%d",&Num);
        if(  Num == 0 )
        {
                    printf("\n Given Number is Netral.\n\n Enter Other Zero Integer to check whether it is Even Or Odd = ");
                    goto Up;
        }

        ( Num % 2 == 0 )? printf("\n Given Number is Even.") : printf("\n Given Number is ODD.");

        printf("\n Thanks");
        getch();
        return 0;

}
