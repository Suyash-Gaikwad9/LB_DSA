#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;


int main(){

    //creation
    unordered_map<string,int>m;

    //insertion

    //insertion approch 1
    pair<string,int>p = make_pair("Suyash", 3);
    m.insert(p);

    //insertion approch 2
    pair<string,int>pair2("Suyash", 2);
    m.insert(pair2);

    //insertion approch 3
    m["Suyash"] = 4;

    //updation 
    m["Suyash"] = 5;

    //searching
    cout<< m["Suyash"] <<endl;

    cout<< m.at("Suyash") <<endl;

    //accessing the undeclered element key
    //cout<< m.at("UnknownKey") <<endl;

    cout<< m["UnknownKey"] <<endl;
    cout<< m.at("UnknownKey") <<endl;


    //check for size
    cout<< m.size() <<endl;

    //check presence
    cout<< m.count("Bro") <<endl;
    cout<< m.count("Suyash") <<endl;

    //erase
    m.erase("Suyash");
    cout<< m.size() <<endl;

    for(auto i:m){
        cout<<i.first<< " " <<i.second<<endl;
    }

    //iterator
    unordered_map<string,int> :: iterator it = m.begin();

    while(it != m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }

    return 0;
}