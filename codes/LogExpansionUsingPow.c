// WAP to use pow function.
// ISO C Reference https://www.gnu.org/software/libc/manual/html_node/Table-of-Output-Conversions.html

#include <stdio.h>
#include <math.h>
int main(){
    float x=0;
    scanf("%f",&x);
    float s=(x-1)/x;
    for(int i=2;i<=7;i++){
        s+=(1/2)*pow(((x-1)/x),i);
    }
    printf("%f \n",s);

    return 0;
}