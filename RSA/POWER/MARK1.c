#include<stdio.h>
#include<math.h>
int main ()
{
    int base;
    int power;
    int value;

    printf("ENTER THE VALUE OF BASE \n\n");
    scanf("%d",&base);
    printf("ENTER THE VALUE OF POWER\n\n");
    scanf("%d",&power);
    value=pow(base,power);
    printf("%d^%d=%d",base,power,value);



    return 0;
}
