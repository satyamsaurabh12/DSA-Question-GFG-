#include<iostream>
#include <stack>
#include <cstring> 
using namespace std;
bool matching(char a, char b){
    return ((a=='(' && b==')')||(a=='{' && b=='}') || (a=='[' && b==']') );
};
bool areBracketsBalanced(char str[]){
    stack<char>s;
    int n=strlen(str);
    for(int i=0;i<n;i++){
        if(str[i]=='(' || str[i]=='{' || str[i]=='['){
            s.push(str[i]);
        }
        else{
            if(s.empty()==true){
                return false;
            }
            if(matching(s.top(),str[i])==false){
                return false;
            }
            else{
                s.pop();
            }

        }
    }
    return (s.empty()==true);
}

int main(){
    char str[]="[({})]";
    int res=areBracketsBalanced(str);
    if(res==1){
        cout<<" this is balanced string with paranthesis";

    }
    else{
        cout<<"this is not balanced string with paranthesis";
    }



    return 0;
}