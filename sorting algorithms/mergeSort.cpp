

// #include <iostream>
// #include <vector>

// using namespace std;






// void mergeSort(vector<int>&arr,int start,int end){

//     int mid = start + (end-start)/2;

//     if(start<end){

//         // lefthalf
//         mergeSort(arr,start,mid);

//         // right half

//         mergeSort(arr,mid+1,end);




//     }



// }




// int main(){

//     vector<int> arr={5,8,4,6,9,1,2};

//     mergeSort(arr,0,arr.size()-1);




//     return 0;

// }










#include <iostream>
#include <vector>

using namespace std;


void merge(vector<int>&arr,int start,int mid,int end){

    int i = start,j=mid+1;

    vector<int>temp;

    while(i<=mid && j<=end){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i<=mid)
    {
       temp.push_back(arr[i]);
        i++;
    }
    while (j<=end){
        temp.push_back(arr[j]);
        j++;

    }
 

    for(int k=0;k<temp.size();k++){
        arr[start + k] = temp[k];
    }



}


void mergeSort(vector<int>&arr,int start,int end){

    int mid = start + (end-start)/2;

    if(start<end){


        // left half

        mergeSort(arr,start,mid);

        // right half

        mergeSort(arr,mid+1,end);

        merge(arr,start,mid,end);




    }




}



int main(){
    vector<int> arr={4,9,21,1,8,5,6,2};


mergeSort(arr,0,arr.size()-1);


cout << "sorted vector array elements are ";
for(int i=0;i<arr.size();i++){
    cout<<arr[i] << " ";
}
cout<<endl;



    return 0;
}