// this is the code for finding the maximum sum of subarray element
#include<stdio.h>
// this is the code for finding the maximum number in between a and b only
long long int maxnum(long long int a,long long int b){
        if(a>b){
            return a;
        }
        else{
            return b;
        }
    }
    int main(){
        int n;
        printf("Enter the n:");
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        //this is the main logic of kadane algorithm
        long long int count=arr[0];
        long long int res=arr[0];
        for(int i=1;i<n;i++){
            count=maxnum(count+arr[i],arr[i]);
            res=maxnum(res,count);
        }
        printf(" the result is:%lld",res);
        return 0;
    }