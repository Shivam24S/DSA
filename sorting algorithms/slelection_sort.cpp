#include <iostream>

using namespace std;


int main(){

    int arr[]={4,8,9,4,2,3};
    int n = 6;


    for(int i=0;i<n;i++){
        int smallestIndex = i;

        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestIndex]){
                smallestIndex=j;
            }
        
        }

        swap(arr[i],arr[smallestIndex]);
        
    }


    cout << "sorted element are ";
    for(int i =0;i<n;i++){
        cout<< arr[i] << " ";
    }
cout<<endl;


}


