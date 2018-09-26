#include "std_lib_facilities.h"
#include <unistd.h>

const int width = 80;
const int height = 25;

void rajzol(int mx,int my) {

  cout << '\n';

  for(int i = 0; i < height; i++)
    for(int j = 0; j < width; j++)
      if((i == my) && (j == mx)) cout << 'a';
        else cout << ' ';

}

int main() {

  int x = 0;
  int y = 0;
  int Xszorzo = 1;
  int Yszorzo = 1;
  int vmi = 0;

  while(true) {

    vmi = 40 - abs(x);
    Xszorzo *= vmi - abs(vmi-1);

    vmi = 12 - abs(y);
    Yszorzo *= vmi - abs(vmi-1);

    x += Xszorzo;
    y += Yszorzo;

    rajzol(x+40, y+12);

    cout << '\n'/*x << ' ' << y*/;
    usleep(40000);

  }

  return 0;

}
/*
cd Documents/Hülyeségek/BevProg/
g++ labdapatt.cpp -o labdapatt
./labdapatt
*/
