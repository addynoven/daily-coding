#include <stdio.h>
float triArea(int x,int y){
return (x*y)/2.0;
}
int main() {
    printf("%.2f",triArea(7,4));
    return 0;
}