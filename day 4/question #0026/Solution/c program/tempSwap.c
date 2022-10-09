#include <stdio.h>
int main() {
   float a,b,c;
   printf("Enter the vlaue of a:");
   scanf("%f",&a);
   printf("Enter the vlaue of b:");
   scanf("%f",&b);
   printf("the value of a= %.2f and b = %.2f before swap!!!\n",a,b);
   c=a;
   a=b;
   b=c;
   printf("the value of a= %.2f and b = %.2f after swap!!!\n",a,b);
   return 0;
}
