#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >>n;
    int product=1;
    while(n!=0){

        int ld=n%10;
        n=n/10;
        product=product*ld;
    }
    cout << product <<endl;
    return 0;
}
