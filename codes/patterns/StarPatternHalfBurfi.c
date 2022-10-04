// Print this pattern
//     *
//    ***
//   *****


#include <stdio.h>
void main()
{
    int n = 5;
    for(int i=0;i<n;i++){
        for (int j=-n;j<=n;j++){
            if (j>=-i && j<=i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
} 