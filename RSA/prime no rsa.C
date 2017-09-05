#include<stdio.h>
#include<conio.h>


int main ()
{
int p,q,n,e,totient,count,gcd,remainder,numerator,denominator,prime_p_two,i_p,flag_p=0,prime_q_two,i_q,flag_q=0;
  printf("Enter two prime numbers!\n\n");
  printf("The first prime number:");
  scanf("%d",&p);
  printf("\nThe second prime number:");
  scanf("%d",&q);
  printf("The two numbers you have entered are %d and %d!",p,q);
  totient=(p-1)*(q-1);
  //to check wether p is prime or not!

  prime_p_two=p/2;
  for(i_p=2;i_p<=prime_p_two;i_p++)
  {
	if(p%i_p==0)
		flag_p++;
  }
  if(flag_p>1)
	printf("\n\nSorry,The number %d is not a prime number",p);
  else
	printf("\nThe number %d is a prime number\n",p);

  //to check wethere q is prime or not!

  prime_q_two=p/2;
  for(i_q=2;i_q<=prime_q_two;i_q++)
  {
	if(q%i_q==0)
		flag_q++;
  }
  if(flag_q>1)
	printf("\n\nSorry,The number %d is not a prime number",q);
  else
  printf("\nThe number %d is a prime number\n",q);

getch();
return 0;

}
