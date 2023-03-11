#include <iostream>
using namespace std;
int main(){
    int s;
    cin >> s;
    if (s>=3 && s<=5)
        cout << "Spring\n";
    else if (s>=6 && s<=8)
        cout << "Summer\n";
    else if (s>=9 && s<=11)
        cout << "Autumn\n";
    else if (s==12 || s>=1 && s<=2)
        cout << "Winter\n";
}