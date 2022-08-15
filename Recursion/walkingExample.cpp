#include<iostream>
using namespace std;


void reachHome(int src, int dest){
    cout<<"Source is "<<src<<" and destination is "<<dest<<endl;

    //base case
    if(src==dest){
        cout<<"I am Home"<<endl;
        return ;
    }

    //processing
    src++;

    //recursive call
    reachHome(src,dest);
}



int main(){
    int src = 1;
    int dest = 10;


    cout<<endl;

    reachHome(src,dest);



    return 0;
}