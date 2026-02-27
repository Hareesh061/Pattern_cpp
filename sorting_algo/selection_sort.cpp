#include<iostream>
#include<vector>
using namespace std;

void sortArr(vector<int>&arr,int k){
    for(int i=0;i<k;i++){
        int mini = i;

        for(int j= i+1;j<k;j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
            
        }swap(arr[i],arr[mini]);
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