#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter a number to check whether it is prime or not: ";
    cin >>n;
    bool flag = true; //true means prime
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            flag=false; //false means composite
            break; // break means prime
        }
    }
    if(n==1)cout << "The entered number is neither prime nor composite";
    if(flag==true) cout<< "The number is prime";
    else{cout << "The number is composite";}
}
