#include<iostream>
using namespace std;

struct customer{
    string name;
    bool pizza, burger;

};

int main(){
    cout<<"Enter total number of customers:     ";
    int number;
    cin>>number;

    customer array[number];

    for(int i=0; i<number; i++){
        cout<<"Enter details of customer:   ";
        cin>>array[i].name;
        cin>>array[i].pizza;
        cin>>array[i].burger;
    }

    


}