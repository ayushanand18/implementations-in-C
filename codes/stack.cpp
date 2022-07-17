#include <iostream>
using namespace std;
class stack{
    private:
        int *stacks;
        
    public:
        stack(){
            stacks = NULL;
            stacks++;
        }
        void push(int x){
            stacks++;
            *stacks = x;
        }
        void pop(){
            stacks = NULL;
            stacks--;
        }
        void display(){
            while(stacks!=NULL){
                cout << *stacks;
                stacks--;
            }
        }
};
int main(){
    stack s;
    s.push(1);
    s.push(2);
    s.display();
    cout<<"\n"<<endl;
    s.pop();
    s.display();
    cout<<"\n"<<endl;
}