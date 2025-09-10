
#include <iostream>

#include <vector>

#include <algorithm>          

using namespace std;

int binary_search( vector<int>&arr,int start,int end,int searchValue){

    if(start<=end){

        int mid = start +(end-start)/2;


        if(arr[mid] ==searchValue){
            return mid;
        } else if(arr[mid]<searchValue){

            return binary_search(arr,mid+1,end,searchValue);

        }else {
             return binary_search(arr,start,mid-1,searchValue);
        }

    }
    return -1;


}





int main(){

     vector<int>arr={2,5,8,9,6,3,1,4};

     sort(arr.begin(),arr.end());
    

    int searchValue = 4;

   int idx = binary_search(arr,0,arr.size()-1,searchValue);

   if(idx == -1){
    cout << " no matched found ";
   }else {
    cout << "matched found at index position at "<< idx << endl;
   }




    return 0;
}