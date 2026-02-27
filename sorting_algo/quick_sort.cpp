#include<iostream>
#include<vector>
using namespace std;

int part(vector<int>&arr, int low, int high){
    int piot_el = arr[low];

    int i = low, j = high;

    while(i<j){
        while(arr[i]<= piot_el && i <= high-1){
            i++;
        }
        while(arr[j]> piot_el && j >= low+1){
            j--;
        }
        if(i<j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;

}

void quickSort(vector<int>&arr, int low, int high){
    if(low<high){
        int piot = part(arr, low,high);
        quickSort(arr, low, piot-1);
        quickSort(arr, piot+1, high);
    }
}

int main(){
    vector<int> arr = {2,54,3,1,8,6};

    int n = arr.size();

    quickSort(arr,0, n);

    for(int i = 0;i< n; i++){
        cout<<arr[i]<<" ";
    }
return 0;

}