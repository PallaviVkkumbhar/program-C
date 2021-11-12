#include<stdio.h>
#include<conio.h>

int main()

{
            int NO1 = 0, NO2 = 0, NO3 = 0, CNT = 0;
            prinft("\n enter count for fibonacci sreies = ");
            scanf("%d",&CNT);

            printf("\n fibonacci seriesof given count = ");

            for(NO1 = 1; CNT > 0; CNT--)
            {
                            printf("\t %d",NO3);
                            NO3 = NO1 + NO2;
                            NO1 = NO2;
                            NO2 = NO3;
            }

            getch();
            return 0;
}
