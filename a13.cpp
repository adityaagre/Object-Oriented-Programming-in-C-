#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;



int main(){
    cout<<endl<<"Enter number of terms:   "<<endl;
    int number;
    cin>>number;

    int array[number];

    for(int index=0; index<number; index++){
        cout<<"Enter name "<<index+1<<":    ";
        cin>>array[index];
    }

    sort(array, array+number);

    

    

    

    

    int unique_terms=0;


    int new_first_element=0;
    int new_frq=0;
    int next=new_first_element;

    cout<<"Number - Frequencies:"<<endl;

    do{
        do{
            
                new_frq++;
                next++;

            
        }while(array[next]==array[new_first_element]);

        
        unique_terms++;

        cout<<array[new_first_element]<<"-"<<new_frq<<endl;

        new_first_element=next;
        
        new_frq=0;

    }while(new_first_element<number);



    cout<<endl<<"Number of unique terms: "<<unique_terms<<endl;







   
    



    }