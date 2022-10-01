#include <stdio.h>
int nextEdge(int ed1,int ed2)
{
    return (ed1+ed2)-1;
}
int main() {
   printf("%d",nextEdge(8, 10));
   return 0;
}
