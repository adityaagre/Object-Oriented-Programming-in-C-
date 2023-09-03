#include <iostream>
#include<map>
using namespace std;
class employee
{

int id;
long int tel_no;
public:
string name;
void read()
{
  cout<<"enter id and tel no\n";
  cin>>id>>tel_no;
}
void display()
{
  cout<<"name:"<<name;
  cout<<"id: "<<id;
  cout<<"tel no: "<<tel_no;
}
void update()
{
  cout<<"enter updated value\n";
  cout<<"enter name\n";
  cin>>name;
  read();
}
};
int main() {
  map<employee*,string>m;
  string nam;
  int choice ;
  while(choice!=0)
    {
      cout<<"1.read\n";
      cout<<"2.display\n";
      cout<<"3.serach\n";
      cout<<"4.update\n";
      cout<<"5.delete\n";
      cin>>choice;
      switch(choice)
        {
          case 1:
            {
              employee *e;
              e= new employee();
              cout<<"Enter name\n";
              cin>>nam;
              e->name=nam;
              e->read();
              m[e]=e->name;
              break;
            }
          case 2:
            {
              for(auto index :m)
                {
                  index.first->display();
                }
              break;
            }
          case 3:
            {
              cout<<"enter name\n";
              cin>>nam;
              for(auto &val:m)
                {
                  if(val.second == nam)
                  {
                    cout<<"record found\n";
                    val.first->display();
                  }
                }
              break;
            }
          case 4:
            {cout<<"enter name whose detalis are to be updated\n";
              cin>>nam;
              for(auto &val:m)
                {
                  if(val.second==nam)
                  {
                    val.first->update();
                    val.second=val.first->name;
                  }
                }
              break;
            }
          case 5:
            {
              cout<<"enter name\n";
              cin>>nam;
              for(auto &val:m)
                {
                  if(val.second==nam)
                  {
                    m.erase(val.first);
                    cout<<"deleted\n";
                    break;
                  }
                }
              break;
            }
        }
    }
}
