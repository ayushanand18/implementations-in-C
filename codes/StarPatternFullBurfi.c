// Print this pattern
//     *
//    ***
//   ******
//  ********
//   ******
//    ***
//     *

#include <stdio.h>
void main()
{
    int n = 5;
    int v=1,i=0,j=-n;
    while((i>=0) && (i<=n)){
        for (int j=-n;j<=n;j++){
            if (j>=-i && j<=i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        if (v==1) i++;
        else i--;
        if (i==(n)) v=0;
        printf("\n");
    }
} 