#include <iostream>

using namespace std;

int main()
{
   cout << "liva zacmane" << endl; 
   cout << " sveika pasaule" << endl; 
   
   int x;
   int y;
   int summa;
   double dalijums;
   int starpiba;
   int reizinajums;
   int mod;
   int rezviens;
   int rezdivi;
   int reztris;
   int z;
   
   x = 11;
   y = 2;
   z = 3;
   
   
   summa = x + y; 
   dalijums = x / (double)y;
   starpiba = x - y;
   reizinajums = x * y;
   mod = x % y;
   

   rezviens = 2 * x + 3 * y + z;
   rezdivi = (x * y + x * z) * 2;
   reztris = x * x * 2 * (y - z);
  
 
 cout << "rezviens rez ir " << rezviens <<  endl;
  cout <<  " rezdivi ir " << rezdivi << endl;
  cout << " reztris ir " <<  reztris << endl;
   
   

   
   cout << "skaitla " <<x<< " un " <<y<< " summa ir " << summa << endl;
    cout << "skaitla " <<x<< " un " <<y<< " dalijums ir " << dalijums << endl;
    cout << "skaitla " <<x<< " un " <<y<< " starpiba ir " << starpiba << endl;
  cout << "skaitla " <<x<< " un " <<y<< " reizinajums ir " << reizinajums << endl;
    cout << "skaitla " <<x<< " un " <<y<< " mod ir " << mod << endl;
   
   
   return 0;
}




