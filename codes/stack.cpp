#include <iostream>
using namespace std;
class stack{
    private:
        int stacks[10];
        int top=-1;
    public:
        void push(int x){
            top++;
            stacks[top]=x;
            cout <<" -- " << top << endl;
        }
        void pop(){
            top--;
        }
        void display(){
            for(int i=0;i<=top;i++)
            {
                cout << stacks[i] << " ";
                i++;
            }
        }
};
int main(){
    stack s;
    s.push(1);
    s.push(2);
    s.push(2);
    s.push(2);
    s.display();
    cout<<"\n"<<endl;
    s.pop();
    s.display();
    cout<<"\n"<<endl;
}