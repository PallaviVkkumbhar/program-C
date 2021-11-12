#include<stdio.h>
#include<conio.h>

int main()
{
        int Num = 21;
        char ch ='Q';

        printf("\n size for integer variable Num in this environment = %d.", sizeof(Num));
        printf("\n size for character variable ch in this envionment = %d.", sizeof(ch));

        printf("\n====================************=================\n");

        printf("\n size for integer in this environment = %d.", sizeof(int));
        printf("\n size for integer in this environment = %d.", sizeof(char));
        printf("\n size for character in this environment = %d", sizeof(short int));
        printf("\n size for float in this enviornment = %d ", sizeof(float));
        printf("\n size for Double in this enviornment = %d", sizeof(double));

        getch();

        return 0;

}
