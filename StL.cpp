#include <bits/stdc++.h>
using namespace std;
//Pairs 

void explainPair(){
    pair<int , int> p={1,6};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,string> p2={200,"hussnain"};
    cout<<p2.first<<" "<<p2.second<<endl;
    pair<int , pair<int,int>>p3={10,{20,90}};
    cout<<p3.first<<" "<<p3.second.first<<" "<<p3.second.second<<endl;
    //we can also use pairs in arrays
    pair<int,int> array[]={{1,3},{2,4},{4,8}};
    cout<<array[1].second<<endl;

    }
    

    //vector
    void explainVector(){
        vector<int> v;
        v.push_back(1);
        v.emplace_back(2);
        v.push_back(3);

        vector<pair<int,int>> vec;
        vec.push_back({1,2});
        vec.emplace_back(3,4);


        vector<int> v1(5,100); //5 elments of 100
        vector<int> v2(5,10);
        v2[4] = 50;
        v2[3] = 40;
        v2[2] = 30;
        v2[1] = 20;
        vector<int> v3(5);
        vector<int> v4(v3); //copy v1 in v2
        vector<int>::iterator it = v2.begin();
        it++;
        cout<<*(it)<<" "<<endl;
        it = it+2;
        cout<<*(it)<<endl;

        cout<<v[0]<<" "<<v2.at(0);
        cout<<v.back()<<" "<<endl;


















    }
int main(){

    // explainPair();
    explainVector();
    return 0;
}