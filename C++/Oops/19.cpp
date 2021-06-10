#include<bits/stdc++.h>
using namespace std;

class DVD{
    private:
    static int i ;
    public:
    string name;
    int releaseYear;
    string director;
    

    DVD (){
        cout<< " non parameterised Constructor instantiated for object" <<endl;
    }
    
    DVD (string name, int releaseYear , string director){
        name = name;
        releaseYear = releaseYear;
        director = director;
        cout<<name<< " directed by "<<director << " in the year "<< releaseYear<<endl;
    }

    DVD(const DVD &dvd1) {
        name = dvd1.name; 
        releaseYear = dvd1.releaseYear; 
        director = dvd1.director; 
        }
    
    
    
    
};
int main(){
    DVD *dvdCollection = new DVD[15];
    DVD *avengersDVD = new DVD("The Avengers", 2012, "Joss Whedon");
    DVD *incrediblesDVD = new DVD("The Incredibles", 2004, "Brad Bird");
    DVD *findingDoryDVD = new DVD("Finding Dory", 2016, "Andrew Stanton");
    DVD *lionKingDVD = new DVD("The Lion King", 2019, "Jon Favreau");
    

    return 0;
}