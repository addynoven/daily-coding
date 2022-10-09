#include <stdio.h>
int main() {
    int n, i,inp,sum;
    scanf("%d",&n);
   for (i = 0; i < n; i++) {
    scanf("%d",&inp);
    sum+=inp;
   }
   printf("%d\n",sum);
   return 0;
}
