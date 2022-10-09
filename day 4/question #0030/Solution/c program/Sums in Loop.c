#include <stdio.h>
int main() {
    int n, i,inp1,inp2,sum[100];
    scanf("%d",&n);
   for(i= 0;i<n;i++){
    scanf("%d %d",&inp1,&inp2);
    sum[i]=inp1+inp2;
   }
   for(i= 0;i<n;i++){
   printf("%d ",sum[i]);
   }
   return 0;
}
