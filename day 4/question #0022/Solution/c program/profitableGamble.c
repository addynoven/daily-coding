#include <stdio.h>
void profitableGamble(float prob, int prize,int pay){
if(prob*prize>pay){
printf("true");
}
else{
printf("false");
}
}
int main() {
profitableGamble(0.9, 1, 2);
   return 0;
}
