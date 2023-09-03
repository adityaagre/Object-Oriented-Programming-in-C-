#include <iostream>
#include<fstream>
using namespace std;

int main(){
   ofstream outfile;
    outfile.open("/Users/adityaagre/Desktop/vs_code_data/untitled folder/file_data2", ios::binary|ios::out);
    int x;
    x=5;
    outfile.write((char*)&x, sizeof(x));
    string kk="aditya";
    outfile.write((char*)&kk, sizeof(kk));

    
    outfile.close();

    ifstream infile;
    infile.open("/Users/adityaagre/Desktop/vs_code_data/untitled folder/file_data2", ios::binary|ios::in);
    int y;
    infile.read((char*)&y, sizeof(y));
    string a;
    infile.read((char*)&a, sizeof(a));
    
    cout<<a;


    cout<<y<<endl;

    






}