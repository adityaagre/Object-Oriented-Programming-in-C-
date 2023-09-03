#include<iostream>
using namespace std;

#include<fstream>

class student
{
    public:

    string name;

    void read()
    {
        cout<<"ENTEr number"<<endl;
        cin>>name;
    }
    void show()
    {
        cout<<name<<endl;
    }
    void writeintofile();
};

void student::writeintofile()
{
    ofstream outfile;
    outfile.open("ETE3", ios::binary | ios::out);
    outfile.write((char*)this, sizeof(this));
    outfile.close();

}

void write(student *s)
{
    ofstream outfile;
    outfile.open("ETE3", ios::binary | ios::out);
    outfile.write((char*)s, ios::binary | ios::out);
    outfile.close();
}

void readfromfile(student*s)
{
    ifstream infile;
    infile.open("file3", ios::binary | ios::in);
    infile.read((char*)s, sizeof(s));
    infile.close();

}

void search(string term)
{
    ifstream infile;
    infile.open("file3", ios::binary | ios::in);
    student x;

    while(infile.read((char*)&x, sizeof(x)))
    {
        if(x.name==term)
        {
            cout<<"YES"<<endl;
        }
    }

}

/*int main()
{
    ofstream fout;
    fout.open("ETE.txt");
    fout<<"DSAOOP\n"<<"ddd\n";
    fout.close();

    ifstream fin;
    fin.open("ETE.txt");
    char data[50];
    int i=0;

    while(!fin.eof())
    {
        fin.getline(data, 20);
        i++;
        cout<<i<<" ";
        cout<<data<<endl;
        
    }
    
    fin.close();
    cout<<"OK"<<endl;
}
*/


int main()
{
    /*
    ofstream fout;
    fout.open("ETE.txt");
    fout<<"DSAOOP\n"<<"ddd\n";
    fout.close();

    ifstream fin;
    fin.open("ETE.txt");
    char data[50];
    int i=0;

    ofstream fout2("ETE2.txt");

    while(!fin.eof())
    {
        fin.getline(data, 20);
        i++;
        cout<<i<<" ";
        cout<<data<<endl;

        fout2<<data;
        
    }

    fout2.close();



    
    fin.close();

    ifstream fin2("ETE2.txt");
    cout<<"second file"<<endl;
    char data2[50];
    while(!fin2.eof())
    {
        fin2.getline(data2, 20);
        
        cout<<data2<<endl;

        
        
    }

    cout<<"OK"<<endl;

    */

   student s1,s2,s3;
   s1.read();
   s2.read();
   s3.read();
   s1.writeintofile();
   write(&s2);
   //readfromfile(&s3);
   string a="a";
   search(a);



}

