#include <stdio.h>
#include <conio.h>
int animals(int x,int y,int z){
   return x*2+y*4+z*4;
}
int main() {
    int a,b,c;
   printf("Enter number of chickens:");
   scanf("%d",&a);
   printf("Enter number of cows:");
   scanf("%d",&b);
   printf("Enter number of pigs:");
   scanf("%d",&c);
   printf("%d \n",animals(a,b,c));
   return 0;
}
