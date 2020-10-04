#include <iostream>
using namespace std;

int sum(int);

int main(){
    int tiv;
    cout << "Enter an integer: ";
    cin >> tiv;
    cout << sum(tiv);
    return 0;
}

int sum(int tiv){
    int mysum;
    while(tiv / 10 != 0)
    {
        mysum += tiv % 10;
        tiv = tiv / 10;
    }
    mysum += tiv % 10;
    return mysum;
    
}
