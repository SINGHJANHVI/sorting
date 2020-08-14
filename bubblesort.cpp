#include<iostream>
using namespace std;
int bubblesort(int arr[100],int n){
  for(int k=0;k<n-1;k++){
   int flag=1;
     for(int j=0;j<n-1-k;j++){
       if(arr[j]>arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        flag=0;
       }
      }
   if(flag==1){
   break;
   }

  }

}
int main(){
    int i,arr[100],n;
        cout<<"enter the size of array :";
            cin>>n;
                for(i=0;i<n;i++){
    cin>>arr[i];
}
        bubblesort(arr,n);
            cout<<"after bubble sort value of number is :\n";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
}
}
