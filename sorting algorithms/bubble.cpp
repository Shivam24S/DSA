

#include <iostream>

using namespace std;


int main(){
    int arr[] = {7,5,6,2,8};
    int n = 5;

    for(int i=0;i<n-1;i++){

        for( int j =0 ; j< n-i-1;j++){
            if(arr[j] > arr[j+1]){

                // swap(arr[j],arr[j+1]);

                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]= temp;
            }
        }


    }

    cout << "sorted element are " ;

    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
    cout << endl;




}