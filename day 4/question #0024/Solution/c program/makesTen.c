#include <stdio.h>
void makesTen(int x,int y){
    if(x==10 || y==10)
    {
        printf("True");
        return;
    }
    else if(x+y==10)
    {
        printf("True");
        return;
    }
    else{
    printf("false");
    return;
    }
}
int main() {
   makesTen(3,7);
   return 0;
}
