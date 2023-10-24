#include <iostream>
#include <cstring>

using namespace std;

int curr;

void foo(string prefixa, string infixa, int i, int j) {
  if(i <= j) {
    curr++;

    cout<<"curr: "<<curr<<endl;
    int pos = infixa.find(prefixa[curr]);
    cout<<"pos: "<<pos<<endl;

     cout<<"before callli 1st foo "<<  "  i "<<i<<"  j "<<j<<endl;
    foo(prefixa, infixa, i, pos - 1);
cout<<"After calling 1st foo :"<< "  i "<<i<<"  j "<<j<<endl;


cout<<"before callli 2nd foo "<<  "  i "<<i<<"  j "<<j<<endl;
foo(prefixa, infixa, pos + 1, j);
    cout<<"after callli 2nd foo "<<"  i "<<i<<"  j "<<j<<endl;

    cout<<"infixa[pos] "<<pos<<endl;
    cout << infixa[pos]<<endl;
  }
}

int main(int argc, char const *argv[]) {
  string pre, in;

  while(cin >> pre >> in) {
    curr = -1;
    foo(pre, in, 0, pre.size() - 1);
    cout << "\n";
  }

  return 0;
}
