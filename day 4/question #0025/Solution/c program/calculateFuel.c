#include <stdio.h>
int calculateFuel(float x){
    x*=10;
    if(x>100){
        return x;
    }
    else
    {
        return 100;
    }
}
int main() {
   printf("%d",calculateFuel(23.5));
   return 0;
}
