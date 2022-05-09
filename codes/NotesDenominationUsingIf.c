// WAP to use pow function.
// ISO C Reference https://www.gnu.org/software/libc/manual/html_node/Table-of-Output-Conversions.html

#include <stdio.h>
int main(){
    int _500=0,_100=0,_50=0,_20=0,_10=0,_5=0,_2=0,_1=0;
    int res = 0, denom=500;
    printf("Welcome to Anand Bank ATM!\n");
    printf("Enter ammount Rs:______\b\b\b\b\b\b");
    scanf("%d",&res);
    printf("Available denomination: 500, 100, 50, 20, 10, 5, 2, 1. \t Enter one to get started\n");
    printf("Starting denomination Rs:___\b\b\b");
    scanf("%d",&denom);
    while(res>0){
        if(res%500==0 && denom>=500){
            res = res-500;
            _500+=1;
        }
        else if(res%100==0 && denom>=100){
            res = res-100;
            _100+=1;
        }
        else if(res%50==0 && denom>=50){
            res = res-20;
            _50+=1;
        }
        else if(res%20==0 && denom>=20){
            res = res-20;
            _20+=1;
        }
        else if(res%10==0 && denom>=10){
            res = res-10;
            _10+=1;
        }
        else if(res%5==0 && denom>=5){
            res = res-5;
            _5+=1;
        }
        else if(res%2==0 && denom>=2){
            res = res-2;
            _2+=1;
        }
        else if(res%1==0 && denom>=1){
            res = res-1;
            _1+=1;
        }
    }
    printf("\n--------------------------------\n");
    printf("500:%d\t100:%d\t50:%d\t20:%d\t10:%d\t5:%d\t2:%d\t1:%d\t",_500,_100,_50,_20,_10,_5,_2,_1);
    printf("\n--------------------------------\n");
}