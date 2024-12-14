#include <iostream>
#include <vector>
using namespace std;

int main(){
    int count,num,comm;
    vector<string> totalBool;
    cin>>count;

    for(int i=0;i<count;i++){
        bool bool1=0;
        cin>> num >> comm;
        int arr1[num];
        for(int j=0;j<num;j++){
            cin>> arr1[j];
        }
        for(int j=0;j<num;j++){
            if(arr1[j] == comm){
                bool1 = 1;
            }
        }
        if(bool1==1){
            totalBool.push_back("YES");
        }else{
            totalBool.push_back("NO");
        }
    }

    for(int i=0;i<count;i++){
        cout<<totalBool[i]<<endl;
    }



    return 0;
}
