#include <iostream>
using namespace std;

class student{
    int rno;
    string name;
    static int i;
    

    public:

    student(){
        cout<<"Enter Student name and roll number:"<<endl;
        cin>>name;
        cin>>rno;
        i++;
    }

    ~student(){
        name="Default";
        rno=0;
    }

    inline static void count(){
        cout<<"No. of students is: "<<i<<endl;
    }

    void display(){
        cout<<"Student name:    "<<name<<endl<<"Student rollnumber:     "<<rno<<endl;
    }
};
int student::i=0;

int main(){
    student *s1=new student;
    student *s2=new student;
    s1->display();
    s2->display();
    s1->count();

}