#include <stdio.h>
int circuitPower(int voltage,int current)
{
    return voltage*current;
}
int main() {
   printf("%d",circuitPower(230, 10));
   return 0;
}
