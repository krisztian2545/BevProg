#include "std_lib_facilities.h"
int main()
  try {

    cout << "Success!\n";
    cout << "Success!\n";
    cout << "Success" << "!\n";
    cout << "success" << "\n";
    int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
    vector<int> v5(10); v5[5] = 7; if (v5[5]==7) cout << "Success!\n";
    if (true) cout << "Success!\n"; else cout << "Fail!\n";
    bool c = false; if (!c) cout << "Success!\n"; else cout << "Fail!\n";
    string s = "ape"; bool c2 = "fool"<s; if (c2) cout << "Success!\n";
    string s1 = "ape"; if (s1=="ape") cout << "Success!\n";
    string s2 = "ape"; if (s2=="ape") cout << "Success!\n";
    string s3 = "ape"; if (s3!="fool") cout << "Success!\n";
    vector<char> v2(5); for (int i=0; i<v2.size(); ++i) cout << "Success!\n";
    vector<char> v3(5); for (int i=0; i<=v3.size(); ++i) cout << "Success!\n";
    string s4 = "Success!\n"; for (int i=0; i<7; ++i) cout << s4[i];
    if (true) cout << "Success!\n"; else cout << "Fail!\n";
    int x = 20; char c3 = x; if (c3==20) cout << "Success!\n";
    string s5 = "Success!\n"; for (int i=0; i<7; ++i) cout << s5[i];
    vector<int> v4(5); for (int i=0; i<=v4.size(); ++i) cout << "Success!\n";
    int i=0; int j = 9; while (i<10) ++i; if (j<i) cout << "Success!\n";
    x = 4; double d2 = 5/(x-2); if (d2==2*x+0.5) cout << "Success!\n";
    string s6 = "Success!\n"; for (int i=0; i<=7; ++i) cout << s6[i];
    i=0; while (i<10) ++i; if (j<i) cout << "Success!\n";
    int x1 = 4; double d = 5/(x1-2); if (d==2*x1+0.5) cout << "Success!\n";
    cout << "Success!\n";

    keep_window_open();
    return 0;
  }
  catch (exception& e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
  }
  catch (...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
  }
