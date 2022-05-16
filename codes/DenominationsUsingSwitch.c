// WAP to break into denomination using switch.
// ISO C Reference https://www.gnu.org/software/libc/manual/html_node/Table-of-Output-Conversions.html

#include <stdio.h>
int main(){
    int am,denom,i=0;
    printf("\
---------------------------------\n\
\t 21E80043 Ayush Anand\n\
----------------------------------\n");
    printf("Enter Amount Rs.: ________\b\b\b\b\b\b\b\b");
    scanf("%d",&am);
    printf("Enter denomination Rs.: ___\b\b\b");
    scanf("%d",&denom);
    int ar[8]={500,100,50,20,10,5,2,1};
    int no[8]={0,0,0,0,0,0,0,0};
    while(am>0){
        if(ar[i]>denom){
            i++;
        }
        else{
            switch(am/ar[i]>0){
            case 1:
            no[i]+=1;
            am=am-ar[i];
            break;
            default:
            i++;
            break;
            }
        }
    }
    printf("--------Results----------\n");
    for (int j=0;j<8;j++){
        printf("Rs. %d Notes: \t %d\n", ar[j],no[j]);
    }
}