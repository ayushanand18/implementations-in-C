// WAP to array consecutive difference sum, and perfect sum.

#include <stdio.h>
#include <math.h>
int main(){
    printf("\
----------------------------------\n\
\t 21E80043 Ayush Anand\n\
----------------------------------\n");
    int list[7]={10,20,40,50,90,100,120};
    int s=0,diff=0;
    for (int i=0;i<6;i++){
        diff = list[i+1]-list[i];
        s=s+diff;
    }
    int a = sqrt(s);
    if(a==s){ // we must also check if its perfect square already.
        printf("%d is already a perfect square.\n",s);
    }
    else{
        if(s-(a*a)>(a+1)*(a+1)-s){
            printf("%d must be added to %d to become %d.\n",(a+1)*(a+1)-s,s,(a+1)*(a+1));
        }
        else{
            printf("%d must be substracted from %d to become %d.\n",s-a*a,s,a*a);
        }
    }
}