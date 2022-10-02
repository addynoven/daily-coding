#include <stdio.h>
#include <conio.h>
void isSameNum(int x,int y){
   if(x==y)
   {
    printf("True\n");
   }
   else{
    printf("False\n");
   }
   return;
}
int main() {
    int a,b;
   printf("Enter number of first:");
   scanf("%d",&a);
   printf("Enter number of Second:");
   scanf("%d",&b);
   isSameNum(a,b);
   return 0;
}
