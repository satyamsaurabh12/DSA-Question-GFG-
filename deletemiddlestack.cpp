#include<iostream>
#include<stack>
using namespace std;
int arr[10];
int n=10;
int top=-1;
int top2;
void push(int x);
int pop();

     void deleteMid(stack<int>&s, int sizeOfStack)
    { 
        
        stack<int>s1;
        if(sizeOfStack%2!=0){
            for(int i=0;i<=(sizeOfStack)/2;i++){
                 int y=s.top();
                 s.pop();
                s1.push(y);
            }
            s1.pop();
            for(int i=0;i<=(sizeOfStack)/2-1;i++){
                int y=s1.top();
                s1.pop();
                s.push(y);
            }
        }
        else{
            for(int i=0;i<=(sizeOfStack)/2;i++){
                int y=s.top();
                s.pop();
                s1.push(y);
            }
            s1.pop();
            for(int i=0;i<((sizeOfStack)/2);i++){
                int y=s1.top();
                s1.pop();
                s.push(y);
            }
        }
        
     
    }
int main(){
    return 0;
}
void push(int x){
    if(top==n-1){
        cout<<"Stack is overflow";
        cout<<"\n";
        return;
    }
    else{
        top=top+1;
        arr[top]=x;
    }
}
int pop(){

    if(top==-1){
        cout<<"Stack is empty";
        cout<<"\n";
        return -1;
    }
    else{
        int y=arr[top];
        top--;
        return y;
    }
}