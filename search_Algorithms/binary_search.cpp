

// // #include <iostream>

// // #include<vector>

// // using namespace std;



// // int  binarySearch(const vector<int>arr,int start,int end,int searchingValue){

// //     if(start<=end){

// //         int mid = start + (end- start)/2;


// //         if(arr[mid] == searchingValue){
// //             return mid;
// //         }else if ( arr[mid]<searchingValue){
// //             return binarySearch(arr,mid+1,end,searchingValue);
// //         }else {
// //             return binarySearch(arr,start,mid-1,searchingValue);
// //         }


// //     }
// //     return -1;

// // }




// // int main(){

// //     const vector<int>arr={1,2,3,4,5,6,7};

// //     int searchingValue=10;

// //     int idx = binarySearch(arr,0,arr.size()-1,searchingValue);


// //     if(idx == -1){
// //         cout << " element not found in array";
// //     }else {
// //         cout << searchingValue <<  " is at index position " << idx << endl;
// //     }

// //     return 0;

// // }



// // suppose if array is not sorted then how will you perform binary search





// #include <iostream>

// #include<vector>

// #include <algorithm>

// using namespace std;



// int  binarySearch( vector<int>arr,int start,int end,int searchingValue){

//     if(start<=end){

//         int mid = start + (end- start)/2;


//         if(arr[mid] == searchingValue){
//             return mid;
//         }else if ( arr[mid]<searchingValue){
//             return binarySearch(arr,mid+1,end,searchingValue);
//         }else {
//             return binarySearch(arr,start,mid-1,searchingValue);
//         }


//     }
//     return -1;

// }




// int main(){

//      vector<int>arr={8,9,6,7,5,2,3,1};

//     //  1,2,3,5,6,7,8,9

//      sort(arr.begin(),arr.end());

//     int searchingValue=6;

//     int idx = binarySearch(arr,0,arr.size()-1,searchingValue);


//     if(idx == -1){
//         cout << " element not found in array";
//     }else {
//         cout << searchingValue <<  " is at index position " << idx << endl;
//     }

//     return 0;

// }





#include <iostream>
#include <vector>
using namespace std;


int binarySearch(const vector<int>&arr,int start,int end,int searchingValue){

    if(start<=end){
        int mid = start + (end-start)/2;

        if(arr[mid]==searchingValue){
            return mid;
        }else if(arr[mid] <searchingValue){
            return binarySearch(arr,mid+1,end,searchingValue);
        }else {
            return binarySearch(arr,start,mid-1,searchingValue);
        }

    }
    return -1;

}



int main(){
    const vector<int>arr = {1,2,3,4,5,6};

    int searchingValue=7;

    int idx = binarySearch(arr,0,arr.size()-1,searchingValue);

    if(idx == -1){
        cout << "no element matched found";
    }else {
        cout << searchingValue << " is at index position " << idx << endl; 
    }





    return 0;
}