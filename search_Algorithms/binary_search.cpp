

// #include <iostream>
// #include <vector>

// using namespace std;


// int binarySearch(const vector<int>&arr,int start,int end,int seachingValue){

//     if(start<=end){
//         int mid = start + (end-start)/2;

//         if(arr[mid]==seachingValue){
//             return mid;
//         }else if(arr[mid]<seachingValue){
//             return binarySearch(arr,mid+1,end,seachingValue);
//         }else {
//             return binarySearch(arr,start,mid-1,seachingValue);
//         }

//     }
//     return -1;

// }





// int main(){

//     const vector<int>arr={1,2,3,4,5,6};

//     int searchingValue = 7;


//     int idx = binarySearch(arr,0,arr.size()-1,searchingValue);

//     if(idx == -1){
//         cout << "element not found" ;
//     }else {
//         cout << searchingValue << " is at index position " << idx << endl;
//     }




//     return 0;
// }






#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int binarySearch( vector<int>&arr,int start,int end,int seachingValue){

    if(start<=end){
        int mid = start + (end-start)/2;

        if(arr[mid]==seachingValue){
            return mid;
        }else if(arr[mid]<seachingValue){
            return binarySearch(arr,mid+1,end,seachingValue);
        }else {
            return binarySearch(arr,start,mid-1,seachingValue);
        }

    }
    return -1;

}





int main(){

     vector<int>arr={4,5,8,6,2,1,3,7,8};

    sort(arr.begin(),arr.end());

    int searchingValue = 7;


    int idx = binarySearch(arr,0,arr.size()-1,searchingValue);

    if(idx == -1){
        cout << "element not found" ;
    }else {
        cout << searchingValue << " is at index position " << idx << endl;
    }




    return 0;
}