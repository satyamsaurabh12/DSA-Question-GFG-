#include<iostream>
using namespace std;
int n=10;
int arr[10];
int top1=-1;
int size1=0;
int top2=n;
void push1(int x);
void push2(int x);
int pop1();
int pop2();
int size();
int main(){
      push1(20);
      push2(30);
      push1(40);
      push2(50);
      push1(60);
      push1(70);
      push2(80);
      push1(90);
      push1(100);
      push2(110);
      push1(200);
      cout<<"\n";
      cout<<"The popped element is:";
      cout<<pop1();
      cout<<"\n";
      cout<<"the popped element is:";
      cout<<pop2();
      cout<<"\n";
      cout<<"The popped element is:";
      cout<<pop1();
      cout<<"The popped element is:";
      cout<<pop1();
      cout<<"The popped element is:";
      cout<<pop1();
      cout<<"The number of element inserted in array is:";
      cout<<size();
      cout<<"\n";

    return 0;
}
void push1(int x){
        if(top1<top2-1){
            top1=top1+1;
            arr[top1]=x;
            size1=size1+1;
        }
        else{
          cout<<"Stack is overflow or Stack is Full";
            return ;
        }
}
void push2(int x){
    if(top1<top2-1){
        top2=top2-1;
        arr[top2]=x;
        size1=size1+1;
    }
    else{
        cout<<"Stack is overflow or Stack is Full";
        return ;
    }
}
int pop1(){
    int y=arr[top1];
    if(top1>=0){
        top1--;
        size1=size1-1;
     return y;
    }
    else{
       return -1; 
    }
}
int pop2(){
    int y=arr[top2];
    if(top2<=n-1){
        top2++;
        size1=size1-1;
        return y;
    }
    else{
        return -1;
    }
}
int size(){
    return size1;
}
