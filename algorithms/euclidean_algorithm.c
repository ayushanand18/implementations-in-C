// Euclidean Algorithm:
//      Suppose if a farmer owns a block of land, he wants to divide this farm evenly into square plots. 
//      He wants the plots to be as big as possible.
// We'll use a divide and conquer (D&C) algorithm using recursion to solve this problem
#include <stdio.h>
int eucl_algo(int a, int b){
    if (a%b==0)
        return b;
    return eucl_algo(b,a%b);
}
int main(){
    int a=5000,b=1200; // Let us suppose we have a farm of size 1680x640
    int lowestSide = eucl_algo(a,b); // this is the size of the largest square plot we can divide the farm into, 
    // make sure a>b for this function - the function is designed that way
    printf("Euclid by your side!\n");
    printf("For a plot of size %dx%d, you must divide it into squares of size %dx%d %d times!\n",a,b,lowestSide,lowestSide,(a*b)/(lowestSide*lowestSide));
    
    return 1;
}