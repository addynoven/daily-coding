#include <stdio.h>
int points(int x,int y){
    return ((x*2)+(y*3));
}
int main() {
    int a,b;
   printf("Enter the 2 pointer:");
   scanf("%d",&a);
   printf("Enter the 3 pointer:");
   scanf("%d",&b);
   printf("%d \n",points(a,b));
   return 0;
}
