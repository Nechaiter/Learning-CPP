#include <iostream> 
using namespace std;

int doubleNumber(int x){
    return 2*x;
}

int main(){
    int x {};
    cout << "Enter an integer: ";
    cin >> x;
    cout << doubleNumber(x) << "\n";
}
