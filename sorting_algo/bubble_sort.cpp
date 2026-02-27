#include<iostream>
#include<vector>
using namespace std;

void sortArr(vector<int>&arr,int k){
    for(int i = k-1; i>0; i--){
        for(int j=0;j<k-1;j++){
            if(arr[j]>=arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){

    vector<int> arr = {2,33,99,6,9,54,7};

    int n = arr.size();

    sortArr(arr,n);

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
return 0;

}