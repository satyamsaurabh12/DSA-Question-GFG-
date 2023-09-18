#include<stdio.h>
int main(){
 char str1[]="abcdefghij";
 char str2[]="defghij";
 int n=0;
 while(str1[n]!='\0'){
    n++;
 }
 int m=0;
 while(str2[m]!='\0'){
    m++;
 }
 printf("the value of n & m :%d %d\n",n,m);
 for(int i=0;i<=n-m; ){
    int j;
    for( j=0;j<m;j++){
        if(str2[j]!=str1[j+i]){
            break;
        }
    }
     if(j==m){
            printf("string is present");
        }
       
    if(j==0){
        i++;
    }
    else{
        i=i+j;
    }
 }
    return 0;
}