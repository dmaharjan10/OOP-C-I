/*JTSK-320111
3.2.c
Drishti Maharjan
d.maharjan@jacobs-university.de*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);

       if ((a % 7 ==0) && (a % 2==0)) {
        printf("The number is divisible by 2 and 7\n");
       }
        else {
          printf("The number is NOT divisible by 2 and 7\n");
        }

    return 0;
}
