#include <stdio.h>
int convert(int hours, int minutes) {
	return hours*60*60+minutes*60;
}
int main() {
   printf("%d",convert(1,3));
   return 0;
}
