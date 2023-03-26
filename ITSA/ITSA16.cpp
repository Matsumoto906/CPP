#include <iostream>
#include <string>
using namespace std;

int main(){

    string s1,s2;
    
    getline(cin,s1);
    getline(cin,s2);
    
    int n=s1.length(),ans=0;
    char num1[550] = {}, num2[550] = {};

    for (int i=0;i<n;i++){
        num1[i] = s1[i];
    }
 
    for (int i=0;i<s2.length()-n;i++){
        for (int j=i,k=0;j<i+n;j++,k++){
            num2[k] = s2[j];
        }
        
        int key=1;
        for (int j=0;j<n;j++){
            if (num1[j]!=num2[j]){
                key=0;
                break;
            }
        }
        if (key == 1)
            ans+=1;  
    }
    cout << ans << endl;
    return 0;
}