#include<iostream>
using namespace std;
#include<fstream>

int main(){
    int x=1;
    int y=51;
    int z=53;
    int kk=5;

    fstream file;
    file.open("/Users/adityaagre/Desktop/cool/programming/college assignments/file1", ios::binary|ios::out);

    file.write((char*)&x, sizeof(x));
    file.write((char*)&y, sizeof(y));
    file.write((char*)&z, sizeof(z));
    file.write((char*)&kk, sizeof(kk));
    file.close();

    file.open("/Users/adityaagre/Desktop/cool/programming/college assignments/file1", ios::binary|ios::in);
    int *j;
    while(file){
        file.read((char*)&j, sizeof(j));
        if(*j==53){
            int z=3;
            j=&z;
            
        file.close();
        }
    }

    file.open("/Users/adityaagre/Desktop/cool/programming/college assignments/file1", ios::binary|ios::in);
    while(file){
        int j;
        file.read((char*)&j, sizeof(j));
        cout<<j<<endl;;
    }

}