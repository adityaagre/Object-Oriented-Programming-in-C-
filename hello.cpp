//PBL     Miniproject 
//TITLE:  SONG RECOMMENDATION SOFTWARE

//A06 Aditya Agre
//A07 Aditi Aher
//A13 Yash Athawale
//A14 Prathamesh Bachhav


#include <iostream>
using namespace std;
#include <vector>

class genre
{
private:
string genre;

public:

void set_genre(string given_genre) 
{
  genre=given_genre; 
}

void print_genre()
{
  cout<<genre<<endl;
}
bool check_genre(string passed_genre)
{
  if(genre==passed_genre)
  {
    return true;
  }
  else{
    return false;
  }
}


};


class artist{

private:
string artist_band;

public:

void set_artist_band(string passed_artist){
  artist_band=passed_artist;
  
  
}

bool check_artist(string passed_artist)
{
  if(artist_band==passed_artist)
  {
    return true;
  }
  else
  {
    return false;
  }
}

void print_artist()
{
  cout<<artist_band<<endl;
}
};

class song:public genre, public artist
{
private:

//DATA
string song_name;
string DOR;


public:

void print(){
  cout<< song_name<<endl;
}

void printall()
{
  cout<<endl;
  print();
  print_genre();
  print_artist();
  cout<<DOR;
}



song(string name, string genre, string artist, string date){
  //Constructor
  song_name=name;
  DOR=date;  //default
  set_genre(genre);
  set_artist_band(artist);
}

};

//static int count=0;

int main() {
  //Using vector data structure to store song objects.
  vector<song> database;
  
  /*
  song s1("Sn");
  song s2("uu");
  song* ptr=&s2;

  song* ptr2 = new song("SSSSSSS");
  array.push_back(s1);
  */

  cout<<"Please enter songs into database"<<endl<<endl;
  cout<<"Choose a genre from the following:"<<endl;
      cout<<"1. Pop"<<endl;
      cout<<"2. Rock"<<endl;
      cout<<"3. Patriotic"<<endl;
      cout<<"4. Jazz"<<endl;
      cout<<"5. Hip_Hop"<<endl;


  char keep_filling;
  keep_filling='y';

  string received_name, received_genre, dor, artist_name;

  while(keep_filling!='N'){
    cout<<"\n~ PLEASE FILL THE FOLLOWING DETAILS BELOW ~"<<endl;
    cout<<"\n\nEnter name of song :  ";
      cin>>received_name;

    cout<<"Enter genre :  ";
    cin>>received_genre;

    cout<<"Enter name of Artist : ";
    cin>>artist_name;

    cout<<"Enter date of release : ";
    cin>>dor;
    cout<<endl;
    //creating new song variable
    //passing the received name to its constructor
    song* ptr = new song(received_name, received_genre,artist_name,dor);

    database.push_back(*ptr);

    cout<<"\n\nTo keep adding songs enter Y, to quit enter N "<<endl;

    cin>>keep_filling;
    
    //count++;
    
    
  }

  //song entering stops here
  //we print count of songs to show use of static var
  //cout<<"\nDatabase created\nTotal number of songs : "<<count<<endl;

  // run till here


  char keep_reccommending;
  keep_reccommending='y';

  string choice1, choice2, choice3;

  while(keep_reccommending!='N'){
    cout<<"\n\nWould you like to look for genre specific songs or artist/band specific "<<endl;
    cout<<"\nEnter your choice as 'Genre' or 'Artist:' "<<endl;
    cin>>choice1;

    if((choice1=="Genre")||(choice1=="genre"))
    {
      
      cout<<"Enter your choice of genre"<<endl;
      cin>>choice2;


      for(auto i=database.begin(); i!=database.end(); ++i )
        {
          if(i->check_genre(choice2))
          {
            i->printall();
          }
        }
   
    }

      // this one :)
    else if(choice1=="Artist"){
      cout<<"Enter your choice of Artist"<<endl;
      cin>>choice2;
      for(auto i=database.begin(); i!=database.end(); ++i )
        {
          if(i->check_artist(choice2))
          {
            i->printall();
          }
        }
        
      }
    
    else{
      cout<<"Enter valid choice!!!"<<endl;
    }
  }
   
}