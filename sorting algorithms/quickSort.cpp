
#include <iostream>

#include <vector>

using namespace std;


int partition (vector<int>&arr,int start,int end){

    int idx = start -1; int pivot = arr[end];

    for(int j =start;j<end;j++){
        if(arr[j]<=pivot){
            idx++;
            // swap(arr[j],arr[idx]);

            int temp = arr[j];
            arr[j]=arr[idx];
            arr[idx]=temp;
        }
    }

    idx++;
    swap(arr[end],arr[idx]);
    return idx;


}


void quickSort(vector<int>&arr,int start,int end){

    if(start<end){

        int pivIdx = partition(arr,start,end);

        quickSort(arr,start,pivIdx-1);

        quickSort(arr,pivIdx+1,end);

    }

}




int main(){

    vector<int>arr = {8,7,9,5,1,2,3};

    quickSort(arr,0,arr.size()-1);


    cout << "sorted elements are ";
    for(int i=0;i<arr.size();i++){
        cout << arr[i] <<  " ";
    }
    cout << endl;


    return 0;

}


