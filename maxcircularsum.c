#include<stdio.h>
//this is the code for finding the maximum value through function "maxnum"
int maxnum(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
//this is the finding the maximum subarray sum through kadane algorithm 
int kadane(int arr[],int n){
    int count=arr[0];
    int res=arr[0];
    for(int i=1;i<n;i++){
        count=maxnum(count+arr[i],arr[i]);
        res=maxnum(count,res);
    }
    return res;
}
int main(){
    int n;
    printf("Enter the n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // this is the code for finding the circular array sum(max)
    int maxnormal=kadane(arr,n);
     int res;
      int maxcircularSum=0;
    if(maxnormal<0){
        printf("%d",maxnormal);
    }
   
   
    else if(maxnormal>0){{
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
            arr[i]=-arr[i];
        }
        maxcircularSum=sum+kadane(arr,n);
        res=maxnum(maxcircularSum,maxnormal);
    }
    }
    printf(" the maximum circular sum is:%d",res);
    return 0;
    
}