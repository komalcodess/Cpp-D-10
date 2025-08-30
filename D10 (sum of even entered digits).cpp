#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum=0;
    while(n!=0){
        int ld=n%10; //exact last digit
        if(ld%2==0){sum=sum+ld;}  //we have to check the last digit whether that is even or not
        n=n/10;

    }
    cout << sum<< endl;
    return 0;
}
