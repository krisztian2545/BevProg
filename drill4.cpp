#include "std_lib_facilities.h"

double StrToDbl(string s) {
  double d;
  stringstream ss(s);
  ss >> d;
  return d;
}

int main() {

  string unit;
  string szam;
  vector<double> ertekek;
  double smallest;
  double biggest;
  double sum = 0;
  int i = 0;

  cout << "Adj meg távolságokat a következö mértékegységek eggyikével: cm, m, in, ft! (Pl.: 25 cm)\n";
  cout << "A kilépéshez használd a \"|\" jelet.\n";

  while(true) {

    cin >> szam;
    if(szam == "|") break;
    cin >> unit;

    if( (szam >= "0") && (szam < "a") && ((unit == "m") || (unit == "cm") || (unit == "in") || (unit == "ft") )) {

      ertekek.push_back(StrToDbl(szam));

      if(unit == "cm") ertekek[i] /= 100;
      else if(unit == "in") ertekek[i] *= 0.0254;
      else if(unit == "ft") ertekek[i] *= 0.3048;

      sum += ertekek[i];

      if(i == 0) {
        smallest = ertekek[0];
        biggest = ertekek[0];
      } else {
        if(ertekek[i] > biggest) biggest = ertekek[i];
        if(ertekek[i] < smallest) smallest = ertekek[i];
      }

      i++;

    } else cout << "Valamit elírtál. A kilépéshez a \"|\" jelet használd.\n";
  }

  cout << "A legkisebb: " << smallest << "\n";
  cout << "A legnagyobb: " << biggest << "\n";
  cout << "Összesen " << ertekek.size() << " értéket adtál meg.\n";
  cout << "Az összegük: " << sum << "\n";
  cout << "A megadott számok méterekben növekvö sorrendben: ";

  sort(ertekek.begin(), ertekek.end());
  for(double j : ertekek) cout << j << "\n";

  return 0;
}
