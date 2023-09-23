#include<iostream>
#include<stack>
using namespace std;
void nextgreaterelement(int arr[],int n){
       stack<int>s;
       s.push(arr[n-1]);
       cout<<-1<<" ";
       for(int i=n-2;i>=0;i--){
        if(s.empty() && s.top()<=arr[i]){
                 s.pop();
        }
           int res=(s.empty()) ?-1:s.top();
           cout<<res<<" ";
               }
}
int main(){
int arr[4]={1,3,2,4};
nextgreaterelement(arr,4);






    return 0;
}