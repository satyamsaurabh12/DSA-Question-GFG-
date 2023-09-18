#include<stdio.h>
int main(){
    int n;
    printf("Enter the n:");
    scanf("%d",&n);
    int position=1;
  while (n != 0 && (n & 1) == 0) {
        n = n >> 1;  
        position++;  
    }
    printf("The result is:%d",position);
    return 0;
}