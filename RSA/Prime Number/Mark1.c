#include <stdio.h>
int main ()
{
        int p,pbytwo,i,flag=0;
        printf("ENTER A NUMBER!\n");
        scanf("%d ",&p);
        if(p <= 1) {
                printf("THE NUMBER %d IS NOT A PRIME NUMBER\n\n",p);

        }else{
                pbytwo=p/2;
                for(i=2; i<=pbytwo; i++){

                        if((p%i)==0)
                        {
                            printf("This not a prime numbe");
                                flag=1;

                        }else
                        printf("this is a prime number");
                }
        }


                if(flag==0) {
                        printf("THE NUMBER IS A PRIME NUMBER\n\n\n");
                }if(flag==1){
                        printf("THE NUMBER IS NOT A PRIME NUMBER\n\n\n");
                }


        return 0;
}
