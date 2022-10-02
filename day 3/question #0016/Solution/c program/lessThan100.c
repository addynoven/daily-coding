#include <stdio.h>
#include <conio.h>
void lessThan100(int x,int y){
   if (x+y<100)
   {
    printf("True\n");
   }
   else{
    printf("False\n");
   }
}
int main() {
    int a,b;
   printf("Enter the First number:");
   scanf("%d",&a);
   printf("Enter the Second number:");
   scanf("%d",&b);
   lessThan100(a,b);
   return 0;
}
