#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
        int p,q,n,e,totient,count,gcd,z,j,k,d,m,c;
        printf("Enter two prime numbers!\n\n");
        printf("The first prime number:");
        scanf("%d",&p);
        printf("\nThe second prime number:");
        scanf("%d",&q);
        printf("The two numbers you have entered are %d and %d!\n\n",p,q);

        //to check wether p is prime or not!
        int prime_p_two,i_p,flag_p=0;
        prime_p_two=p/2;
        for(i_p=2; i_p<=prime_p_two; i_p++)
        {
                if(p%i_p==0)
                {
                        flag_p=1;
                        break;
                }

        }
        if(flag_p==0) {
                printf("THE NUMBER %d IS A PRIME NUMBER\n\n",p);
        } if(flag_p==1) {
                printf("\n\nSorry,The number %d is not a prime number\n\n",p);
        }

        //to check wethere q is prime or not!
        int prime_q_two,i_q,flag_q=0;
        prime_q_two=p/2;
        for(i_q=2; i_q<=prime_q_two; i_q++)
        {
                if(q%i_q==0)
                {
                        flag_q=1;
                        break;
                }
        }
        if(flag_q==0) {
                printf("THE NUMBER %d IS A PRIME NUMBER\n\n",q);
        } if(flag_q==1) {
                printf("\n\nSorry,The number %d is not a prime number\n\n",q);
        }

        //GCD________
        n=p*q;
        totient=(p-1)*(q-1);

        if(p>q) {
                z=p;
        }else
        {
                z=q;
        }
        for(j=1; j <= z; j++)
        {
                if(p%j==0 && q%j==0)
                        gcd=j;
        }
        printf("GCD of %d and %d = %d\n", p, q, gcd);


        //over_______________
        count = gcd;
        while(count==1)
        {
                break;
                e++;
                printf("The current value of e is %d",e);
        }

        printf("The chosen value of e is %d\n\n",e);

        printf("ENTER THE VALUE OF K i.e ANY ARBITARY VALUE\n\n");
        scanf("%d",&k);
        d=(1 + (k *totient))/e;
        printf("THE CHOSSEN VALUE OF d is %d\n\n",d);

        printf("THE VALUE OF e (public key)IS %d\n\n",e);
        printf("THE VALUE OF n (modulus of two prime numbers)IS %d\n\n",n);
        printf("THE VALUE OF TOTITENT (P-1)(Q-1)IS %d\n\n",totient);
        printf("THE VALUE OF d(private key) is %d\n\n",d);


        printf("ENTER THE MESSAGE!\n\n");
        scanf("%d",&m);

        //ENCRIPTION!
        c = pow(m,e);
        c = pow(m,e);
        c=fmod(c,n);
        printf("THE ENCRYPED MESSAGE IS %d\n\n",c);





        //DECREPTION!

        m = pow(c,d);
        m = fmod(m,n);
        printf("THE DECRYPTED MESSAGE IS %d",m);
        return 0;

}
