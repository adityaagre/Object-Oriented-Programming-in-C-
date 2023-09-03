#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool compare(string a, string b){
    return a<b;
}

int main(){
    cout<<endl<<"Enter number of names:   "<<endl;
    int number;
    cin>>number;

    string array[number];

    for(int index=0; index<number; index++){
        cout<<"Enter name "<<index+1<<":    "<<endl;
        cin>>array[index];
    }


    sort(array, array+(number), compare);
    
    cout<<endl<<"Names in sorted order are:     "<<endl;
    for(int index=0; index<number; index++){
        
        cout<<array[index]<<endl;
    }



    }