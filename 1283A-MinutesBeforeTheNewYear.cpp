#include <iostream>
#include <vector>
using namespace std;

int main(){
    int count;
    cin>> count;
    vector<int> result;

    for(int i = 0;i<count;i++){
        int hour,min;
        cin>> hour >> min;
        result.push_back((23-hour)*60 + (60-min));
    }

    for(int i = 0;i<count;i++)
        cout<<result[i]<<endl;
    return 0;
}
