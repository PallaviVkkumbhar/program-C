#include<stdio.h>
#include<conio.h>

int main()

{
            int NO = 0, Fact = 0, temp = 0;

            printf("\n enter number to calculate its factorial = ");
            scanf("%d",&NO);

            for(fact = 1, Temp = NO; Temp > 1 ; Fact *= Temp, Temp--);

            printf("\n factorial of number %d is = %d",NO,fact);

            printf("\n\n thanks");

            getch();
            return 0;
}
