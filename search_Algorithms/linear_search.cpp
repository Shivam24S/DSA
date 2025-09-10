
#include <iostream>
#include <vector>

using namespace std;


int linear_search(const vector<int>&arr,int findingValue){

    for(int i = 0;i<arr.size();i++){

        if(arr[i]==findingValue){
            return i;
        }

    }
    return -1;



}





int main(){

    const vector<int>arr={7,8,9,1,5,2,6};

    int findingValue = 2;


    int idx = linear_search(arr,findingValue);

    if(idx == -1){
        cout << "no matched element found ";
    }else{
            cout << "the matched index of " << idx << " " << endl;

    }


    return 0;

}