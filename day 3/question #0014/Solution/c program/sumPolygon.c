#include <stdio.h>
int sumPolygon(int x){
    return (x-2) * 180;
}
int main() {
    int a;
   printf("Enter the sided:");
   scanf("%d",&a);
   printf("%d \n",sumPolygon(a));
   return 0;
}
