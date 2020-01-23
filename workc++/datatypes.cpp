#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int n;
    double n1;
    string s1;
    cin>>n;
    cin>>n1;
    cin>>s1;
    cout<<i+n<<endl;
    d = (double)d+n1;
    cout<<d<<endl;
    s.append(s1);
    cout<<s;
}
