#include<stdio.h>
#include<conio.h>
int main()
{
            int RN = 0, CN = 0;
            printf("\n table from 5 to 9 follows => \n\n");
            for(RN = 1; RN <= 10; RN++)
            {
                    for(CN = 5; CN <= 9; CN++)
                    {
                            printf("%3d",CN * RN);
                    }

                  printf("\n");


            }
            getche();

            printf("\n\n thanks");

            getch();
            return 0;
}
