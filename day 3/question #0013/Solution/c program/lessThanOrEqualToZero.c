#include <stdio.h>
#include <conio.h>
void lessThanOrEqualToZero(int x){
   if (x<=0)
   {
    printf("True\n");
   }
   else{
    printf("False\n");
   }
}
int main() {
    int a;
   printf("Enter the number:");
   scanf("%d",&a);
   lessThanOrEqualToZero(a);
   return 0;
}
