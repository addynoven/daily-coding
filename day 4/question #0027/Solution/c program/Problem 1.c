#include <stdio.h>
int main() {
   int i,sum;
    for(i=0,sum=0;i<1000;i++) {
        if (i%3==0)
        {
            sum+=i;
            continue;
        }
        else if (i%5==0)
        {
            sum+=i;
            continue;
        }
        }
    printf("%d\n",sum);
   return 0;
}
