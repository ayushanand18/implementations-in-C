#include <stdio.h>

int main(){
    int arr[] = {0};
    static int top = -1;
    void push(int x)
    {
        arr[top]=x;
        top+=1;
    }
    void pop()
    {
        top-=1;
    }
    push(1);
    
    return 1;
}