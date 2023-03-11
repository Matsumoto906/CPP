#include <iostream>  
#include <iomanip>  
#include <math.h>  
  
using namespace std;  
  
int main() {  
    long long x,y,n;  
      
    cin >> x >> y;  
    x=pow(x,2);  
    y=pow(y,2);  
    n = sqrt(x + y);  
      
    if (n<=100)  
        cout << "inside\n";  
    else  
        cout << "outside\n";  
} 