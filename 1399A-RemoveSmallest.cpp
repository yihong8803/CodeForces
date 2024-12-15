#include <iostream>
#include <vector>
using namespace std;

//Check the difference not more than 1
bool checkDiff(int arr1[], int totalnum){
    for(int i = 0; i<totalnum - 1;i++){
            if (abs(arr1[i] - arr1[i + 1]) != 1 && arr1[i] - arr1[i + 1] != 0){
                return 0;
            }
        }
        return 1;
}


//Insertion Array
void insertionArray(int arr[],int n){
    //Make a loop
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i - 1;
        while (j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    if(checkDiff(arr,n)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}





//PrintArray
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}



int main() {

    int count, totalnum;
    cin >> count;

    for (int i = 0; i < count; i++) {
        cin >> totalnum;
        vector<int> num;
        int arr1[totalnum];

        // Read elements into the vector
        for (int j = 0; j < totalnum; j++) {
            int value;
            cin >> value;
            arr1[j] = value;
            num.push_back(value);
        }

        // Sort the vector using insertion sort
        insertionArray(arr1, totalnum);
}
    return 0;

}