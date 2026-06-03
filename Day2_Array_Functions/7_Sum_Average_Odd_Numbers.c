#include<stdio.h>
int main(){
    int n,sum=0;
    float avg=0;
    printf("size:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2 != 0){
        sum=sum+arr[i];
        }
    avg=sum/n;
    }
    printf("sum=%d\n",sum);
    printf("average=%2f",avg);
}
