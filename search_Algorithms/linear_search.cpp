

#include <iostream>

#include <vector>

using namespace std;


int linearSearch(const vector<int>&arr,int searchingValue){


    for(int i=0;i<arr.size();i++){

        if(arr[i] == searchingValue){
            return i;
        }
    
    }
    return -1;


}



int main(){

    const vector<int>arr={8,5,9,4,9,21,2};

    int searchingValue =21;
    
    
    int idx = linearSearch(arr,searchingValue);


    if(idx == -1){
        cout << "element not found in array" << endl;
    }else {
        cout << searchingValue << " is in array at index position " << idx << endl;
    }


    return 0;


}