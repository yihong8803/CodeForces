#include <iostream>
#include <vector>
#include <set>

using namespace std;



    
    //distract boolean to check truth value
bool distract(int numWord, string words){
    //set<char> seen to store word
    set<char> seen;
    
    //prev to check previous
    char prev='\0';

    for(int j=0;j<numWord;j++){
        //Check if Word same as previous
        if(words[j] != prev){
            if(seen.count(words[j]))
                return false;
            seen.insert(words[j]);
            prev = words[j];
        }
    }
    return true;
}




int main(){
    int count;
    cin>> count;
    for(int i=0;i<count;i++){
        
        //Input Number of Word
        int numWords;
        cin >> numWords;

        //int numWords, string word
        string words;
        cin >> words;
        if(distract(numWords,words)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }

    return 0;
}
