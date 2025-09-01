#include <iostream>
using namespace std;


int main(){

    int arr[]={8,9,4,3,1,5};
    int n = 6;



    for(int i =1;i<n;i++){

        int curr = arr[i];

        int j = i-1;


        while(j>=0&& arr[j]>curr){

            arr[j+1]=arr[j];
            j--;

        }

        arr[j+1]=curr;


        

    }


    cout << "sorted element are ";
    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }

    cout<<endl;




}