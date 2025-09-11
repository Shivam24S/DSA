
// #include <iostream>
// #include <vector>

// using namespace std;


// int linear_search(const vector<int>&arr,int findingValue){

//     for(int i = 0;i<arr.size();i++){

//         if(arr[i]==findingValue){
//             return i;
//         }

//     }
//     return -1;



// }





// int main(){

//     const vector<int>arr={7,8,9,1,5,2,6};

//     int findingValue = 2;


//     int idx = linear_search(arr,findingValue);

//     if(idx == -1){
//         cout << "no matched element found ";
//     }else{
//             cout << "the matched index of " << idx << " " << endl;

//     }


//     return 0;

// }






#include <iostream>
#include <vector>

using namespace std;


int linearSearch(const vector<int>&arr,int searchingValue ){


    for(int i=0;i<arr.size();i++){

        if(arr[i]==searchingValue){
            return i;
        }

    }
    return -1;



}



int main(){
    const vector<int>arr={10,20,50,60,30,40,70};

    int searchingValue = 300;

    int idx = linearSearch(arr,searchingValue);


    if(idx==-1){
         cout << "no matched founded"; 
    }else {
        cout << searchingValue  << " is located at index position " << idx << endl;
    }


    return 0;

}