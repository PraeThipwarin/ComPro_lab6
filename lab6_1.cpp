#include<iostream>
using namespace std;

int main(){
    int x;
    cout << "Enter an integer: ";
    cin >> x;
    int even = 0,odd = 0;
    while (x != 0){
        if (x %2 == 0)
        {
            even += 1;
        }else{
            odd += 1;
        }
    cout << "Enter an integer: ";
    cin >> x;
        
    }
    cout << "#Even numbers = " << even<<"\n";
    cout << "#Odd numbers = " << odd;
    return 0;
}
