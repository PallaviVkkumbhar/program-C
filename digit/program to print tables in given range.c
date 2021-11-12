#include<stdio.h>
#include<conio.h>

int main()
{
                            int RN = 0, CN = 0, SNO = 0, ENO =0 ;
                            printf("\n enter tables range from & to = ");
                            scanf("%d%d",&SNO, &ENO);

                            printf("\n tables from %d to %d as folows => \n\n",SNO,ENO);

                            printf("\n========================================================================\n");
                            for(RN = 1; RN = 10; RN++)

                            {
                                        if( SNO < ENO  )
                                        {
                                            printf(" %3d ",CN * RN);
                                        }
                            }
                            else

                            {
                                        for(CN = SNO; CN >= ENO; CN---);
                                        {
                                            printf(" %3d ",CN * RN );
                                        }
                            }

                            printf("\n============================================================================\n");

                            getche();

                            printf("\n\n thanks");
                            getch();
                            return 0;
 }
