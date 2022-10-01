#include <stdio.h>
int howManySeconds(int hrs)
{
    return hrs*60;
}
int main() {
   printf("%d",howManySeconds(2));
   return 0;
}
