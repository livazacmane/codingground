#include <iostream>

using namespace std;

int main()
{
     int x;
   
   cout << " ievadi x, jeb skaitli ko velies kapinat kvadrata " << endl;
   
   cin >> x;
   
   if( x > 0){
   // sis izplidisies ja x ir lielaks par 0
    cout << "x ir lielaks par 0" << endl;
       cout << " atbilde ir " << x*x << endl;
   }else{
       // sis izpildisies ja x nebus lielaks par 0
       cout << "nevar izpildit darbibu" << endl;
   }
   
   return 0;
}

