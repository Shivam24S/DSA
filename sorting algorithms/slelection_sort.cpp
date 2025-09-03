
// #include <iostream>

// using namespace std;



// int main(){
//     int arr[]={5,8,9,1,3,6};
//     int  n=6;


//     for(int i=0;i<n-1;i++){
//         int smallestIndex = i;

//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[smallestIndex]){
//                 smallestIndex=j;
//             }
//         }

//         int temp = arr[i];
//         arr[i]=arr[smallestIndex];
//         arr[smallestIndex]=temp;
//     }
    
//     cout << "sorted elements are ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i] << " ";
//     }
//     cout<<endl;
// }



#include <iostream>

using namespace std;


void selectionSort(int arr[],int n){

    for(int i=0;i<n-1;i++){
        int smallestIndex = i;

        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestIndex]){
                smallestIndex=j;
            }
        }

        int temp = arr[i];
        arr[i]=arr[smallestIndex];
        arr[smallestIndex]=temp;
    }
    
    cout << "sorted elements are ";
    for(int i=0;i<n;i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;



}

int main(){

    int arr[]={5,4,6,3,1,2};
    int n=6;

    selectionSort(arr,n);

    return 0;

}