#include <iostream>
using namespace std;

int acres_owned( int cattles, int acres);
int acres_needed(int buying, int newacres);
int main()
{
      int buying;
      int cattles;
      int acres;
      char enough_land;
      int newacres;

      cout << "If you're one of the one and a half million cattle farmers in the United States, this program is for you" << endl;
      cout << "Welcome to the cattle counter. The point of this program is to calculate the amount of land needed for the amount of cattle you have" << endl;
      cout << "According to the United States Natural Resources Conservation Service, it takes two acres of land to feed a cattle for 1 year " << endl;
      cout << "How many cattles do you have?" << endl;
      cin >> cattles;
      cout << "Great, that means you should have " << acres_owned(cattles, acres) << " acres of land right now " << endl;
      cout << "Do you have enough land right now for the cattles you have? Enter 'Y' for yes and 'N' for no" << endl;
      cin >> enough_land;

      switch(enough_land){
         case 'Y':
            cout << "YEEHAW" << endl;
            break;
         case 'N':
            cout << "Better buy more land before Trump builds a wall on it" << endl;
            break;
         default :
            cout << "MOOOOOOOOOOOOOOOOOO" << endl;

      cout << " How many cattles do you plan on buying now?" << endl;
      cin >> buying;
      cout << "Now you need " << acres_needed(buying, newacres) << "more acres of land for " << buying << "cattles" << endl;









      return 0;
}

int acres_owned(int cattles, int acres)
   {acres = cattles*2;
   return acres;}

int acres_needed(int buying, int newacres)
   {newacres = buying*2;
   return newacres; }
