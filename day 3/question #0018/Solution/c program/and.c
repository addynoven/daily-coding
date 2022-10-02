#include <stdio.h>
#include <string.h>
void and(char arr1[10],char arr2[10])
{   
    if (strcmp(arr1,"True")==0)
    {
        if (strcmp(arr1,arr2)==0){
            printf("True");
    }
    else{
        printf("False");
    }
    }
    else{
        printf("False");
    }
}
int main() {
   and("True","True");
   return 0;
}
