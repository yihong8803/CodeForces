#include <iostream>
#include <algorithm>
using namespace std;

bool CheckReverse(int total, int split, string word){ 
    
    if(split*2 >= total) return false;
    if(split==0) return true;
    string fWord = word.substr(0,split);
    string lWord = word.substr(total-split,split);
    reverse(lWord.begin(),lWord.end());
    if(fWord==lWord) return true;
    return false;

}


int main(){
    int count;
    cin>> count;
    for(int i=0;i<count;i++){
        int numWord,split;
        cin>>numWord>>split;
        string word;
        cin>>word;
        if(CheckReverse(numWord,split,word)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
