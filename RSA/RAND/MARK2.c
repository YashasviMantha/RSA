#include<stdio.h>

int main ()
{
    int randnum,pbytwo,i,flag,jump;

    printf("%d\n\n",srand());
        jump:
    randnum=srand();

    printf("%d\n\n",randnum);


                pbytwo=randnum/2;
                for(i=2; i<=pbytwo; i++){

                        if((randnum%i)==0)
                        {
                                flag=1;


                        }
                }

                if(flag==0) {
                        printf("THE NUMBER IS A PRIME NUMBER\n\n\n");
                }if(flag==1){
                        printf("THE NUMBER IS NOT A PRIME NUMBER\n\n\n");
                        goto jump;

                            }


    return 0;

}
