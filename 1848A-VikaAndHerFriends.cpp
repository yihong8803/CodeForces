#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//vector<pair<int,int>> &friends
bool CanEscape(int x,int y,vector<pair<int,int>> &friends){
    int oriPosi = (x+y)%2;
    //auto is used for pair
    //auto &f modify the ori element
    //auto friend is a copy of the ori element
    for(auto &f : friends){
        int fPosi = (f.first + f.second) %2;
        if(oriPosi == fPosi) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int count;
    cin >>count;
    for(int i=0;i<count;i++){
        int row,col,n;
        cin>>row>>col>>n;

        //Get the first position
        int x,y;
        cin>>x>>y;

        //Get kawan position
        //pair<int,int> f(n); f.first, f.second
        vector<pair<int,int>> friends(n);
        for(int i=0;i<n;i++){
            cin>>friends[i].first >> friends[i].second;
        }

        //If first is odd, check if kawan is odd by x+y%2==0/1
        if(CanEscape(x,y,friends)) cout<<"YES\n"<<endl;
        else cout<<"NO\n"<<endl;

    }

    return 0;
}
