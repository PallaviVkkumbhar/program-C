#include<stdio.h>
#include<conio.h>

int main()

{
                    int Num1 = 0, Num2 = 0, Temp = 0;

                    printf("\n Enter 2 Number For Swapping =");
                    scanf("%d%d", &Num1, &Num2);

                    printf("\n Before Swap 1st Number = %d.", Num1);
                    printf("\n Befor swap 2nd Number = %d",Num2);


                    Temp = Num1;
                    Num1 = Num2;
                    Num2 =Temp;

                    printf("\n After Swap 1st Number =%d. ",Num1);
                    prnitf("\n After Swap 2nd Number =%d. ",Num2);

                    printf("\n\n Thanks");

                    getch();
                    return 0;


}
