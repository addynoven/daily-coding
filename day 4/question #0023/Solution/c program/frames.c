#include <stdio.h>
int frames(int x,int y){
    return x*60*y;
}
int main() {
   printf("%d",frames(10,1));
   return 0;
}
