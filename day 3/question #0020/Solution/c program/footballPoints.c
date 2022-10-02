#include <stdio.h>
#include <conio.h>
int footballPoints(int x,int y,int z){
   return x*3+y*1+z*0;
}
int main() {
    int a,b,c;
   printf("Enter number of wins:");
   scanf("%d",&a);
   printf("Enter number of losses:");
   scanf("%d",&b);
   printf("Enter number of Draws:");
   scanf("%d",&c);
   printf("%d \n",footballPoints(a,b,c));
   return 0;
}
