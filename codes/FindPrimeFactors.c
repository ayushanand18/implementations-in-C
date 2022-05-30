#include <stdio.h>
void main(){
	int n;
	scanf("%d",&n);
	int orig=n;
	int p[10] = {2,3,5,7,11,13,17,19,23};
	int c[10] = {0};
	int i=0;
	while(i<10 && n/p[i]>0){
		if(n%p[i]==0){
			n=n/p[i];
			c[i]+=1;
		}
		else{
			i++;
		}
	}
	for (int j=0;j<10;j++){
		if(c[j]!=0)
			printf("%d^%d*",p[j],c[j]);
	}
	printf("1 = %d\n",orig);
}