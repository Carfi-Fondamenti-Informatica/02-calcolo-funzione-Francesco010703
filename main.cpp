#include <iostream>
using namespace std;

int main() {
   float a, b, x, y, z;       //inizializzo le variabili
   cin >> a >> b >> x >> y;   //l'utente inserisce i valori delle variabili
   
   if (x<0 && y>0) {
      z = (a*x) - (b*y);      //calcolo la funzione nei 3 casi
   }
   
   else if (x>=0 && y<=0) {
      z = (a*x*x) - (b*y);
   }
   
   else {
      z = (a*x) + (b*y*y);
   }
   
   cout << z << endl;      // stampo a schermo il risultato
   
   return 0;
}
