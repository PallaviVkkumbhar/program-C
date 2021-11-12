#include<stdio.h>
#include<conio.h>

int main()
{
             char ch = '\0';

             printf("\n enter charcter to check whether, \n it is alphabet or digit = ");
             ch = getche();

             if( ( ( ch >= 'A')&&(ch <='z')) || ((ch >= 'a') &&  (ch <= 'z')))
             {
                        printf("\n\n given character %c is alphabet.",ch);
             }
             else if((ch >= '0') && (ch <= '9'))
           {
                        printf("\n\n given character %c is digit.",ch);
           }
              else

              {
                        printf("\n\n given character %c is specail symbol.",ch);
              }

              printf("\n\n thanks");

              getch();
              return 0;

}
