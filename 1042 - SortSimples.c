#include <stdio.h>

int main(){

    int n1, n2, n3;
    int orig1, orig2, orig3;

    scanf("%d %d %d" , &orig1, &orig2, &orig3);

   n1 = orig1;
   n2 = orig2;
   n3 = orig3;

    if(n1 > n2)
    {
        int temp;
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if(n1 > n3)
    {
        int temp;
        temp = n1;
        n1 = n3;
        n3 = temp;
    }
    if(n2 > n3)
    {
        int temp;
        temp = n2;
        n2 = n3;
        n3 = temp;
    }

    printf("%d\n", n1);
    printf("%d\n", n2);
    printf("%d", n3);

    printf("\n\n%d\n", orig1);
    printf("%d\n", orig2);
    printf("%d\n", orig3);

    return 0;
}
