#include<iostream>
using namespace std;

class Movie{
private:

string rating;
public:
    string title;
    string director;

    Movie(string aTitle, string aDirector, string aRating)
    {

        this->  title    = aTitle;
        this->  director = aDirector;
        setRating(aRating);//??
        }

        void setRating(string aRating){
        if(aRating=="G" || aRating =="PG" || aRating=="PG-13" || aRating=="R"){
            rating = aRating;
            cout<<"Valid rating"<<endl;
            }

        else{
            rating="NR";
            cout<<"Invalid rating"<<endl;
        }
        }
        string getRating(){
        return rating;
        }


    };

int main(){
    Movie obj("The Avengers","Joss Whedon","PG");
    obj.setRating("DoG");
    cout<<obj.getRating()<<endl;
return 0;
}
