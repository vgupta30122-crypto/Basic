
// Ques: Create a class book with name, price and number of pages as its attributes. The class should contain the following member functions:

// countBooks(int price): This function will return the count of all the books that have a price less than the given price.
// isBookPresent(string title): This will return a boolean value indicating whether any book with the given title is present or not.

#include<iostream>
using namespace std;
class book{
    public:
    char name;
    int price;
    int noofpages;

    int countbooks(int p){
        if(price<p) return 1;
        else
            return 0;
        }
        bool isbookpresent(char book){
            if(name==book)
            return true;
            else 
            return false ;
        }
};
int main(){
    book harrypotter;
    harrypotter.name ='H';
    harrypotter.name=1000;
    harrypotter.price=200;


    cout<<harrypotter.countbooks('1000');

}
// 1
