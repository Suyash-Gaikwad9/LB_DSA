#include<iostream>
using namespace std;

int main(){
    
    int number;
    cout<<"Enter the amount :"<<endl;
    cin>>number;

    int choice;
    cout<<"Enter the choice amount 100/50/20/10 :"<<endl;
    cin>>choice;

    switch(choice){
        
        case 100:
            if(number!=0){
                int notes = number/choice;
                cout<<notes<<endl;
                int total = 100*notes;
                // number = number - total;
                // cout<<number<<endl;
            }
            break;
        number = number - total;
        case 50:
            if(choice<number){
                int notes = number/choice;
                cout<<notes<<endl;
                int total = 50*notes;
                number = number - total;
            }
            break;
        case 20:
            if(choice<number){
                int notes = number/choice;
                cout<<notes<<endl;
                int total = 20*notes;
                number = number - total;
            }
            break;
        case 10:
            if(choice<number){
                int notes = number/choice;
                cout<<notes<<endl;
                int total = 10*notes;
                number = number - total;
            }
            break;
    }

    
    
    
    
    
    return 0;
}