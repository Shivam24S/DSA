

#include <iostream>
#include <vector>

using namespace std;



int partition(vector<int>&arr,int start,int end){


    int idx = start -1;

    int pivot = arr[end];


    for(int j=start;j<end;j++){
        if(arr[j]<=pivot){
            idx++;
            swap(arr[j],arr[idx]);
        }

    }

    idx++;
    swap(arr[end],arr[idx]);


    return idx;





}




void quickSort(vector<int>&arr,int start, int end){

    if(start<end){


        int pivIdx = partition(arr,start,end);

        // left half
        quickSort(arr,start,pivIdx -1);

        // right half
        quickSort(arr,pivIdx+1,end);




    }


}




int main(){
    vector <int> arr = {8,9,1,6,2,3};


    quickSort(arr,0,arr.size()-1);


    cout << "sorted elements are ";
    for( int i =0;i<arr.size();i++){
        cout << arr[i] << " ";

    }
    cout<<endl;


    return 0;


}