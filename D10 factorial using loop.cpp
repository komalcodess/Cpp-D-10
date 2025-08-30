#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >>n;
    int pro=1;  //always start with a 1 when multiplying
    for(int i=1; i<=n; i++){  //i must be equal to one in order to multiply
        pro=pro*i;
    }
    cout << pro<< endl;
    return 0;
}
