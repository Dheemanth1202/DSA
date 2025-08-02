#include <iostream>
using namespace std;

int linearsearch(int arr[], int sz, int target){
    for(int i=0; i<sz; i++){
        if(arr[i] == target){ //FOUND
            return i;
        }
    }

    return -1; //NOT FOUND
}

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int sz = 7;
    int target = 50;

    cout << linearsearch(arr, sz, target) << endl;
    return 0;
}