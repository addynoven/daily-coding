#include <stdio.h>
#include <conio.h>
void giveMeSomething(char crr[50]){
   printf("something ");
   printf("%s",crr);
}
int main() {
   char crr[50];
   printf("Enter something u want to enter:");
   fgets(crr,50,stdin);
   giveMeSomething(crr);
   return 0;
}
