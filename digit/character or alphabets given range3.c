#include<stdio.h>
#include<conio.h>

int main()

{
            char Lch = '\0', sch = '\0', Ech = '0';

            printf("\n Enter Starting Character =");
            sch = getche ();

            printf("\n enter Ending Character =");
            Ech = getche();

            if(sch<Ech)

            {
                        for(Lch = Sch; Lch <= Ech; Lch++)
                        {
                                    printf("\n %c",Lch);
                        }
            }

            else
            {
                        for(Lch = Sch; Lch <= Ech; Lch);
                        {
                                printf("\n %c",Lch);
                        }
            }


                printf("\n\n thanks");
                getch();
                return 0 ;
    }
