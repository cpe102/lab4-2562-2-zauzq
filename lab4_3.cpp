#include <iostream>
#include <cmath>
using namespace std;

int findDivisor( int x ){
    int i = 2;
    while (i > 1){
        if (x%i == 0 ){
            return i; 
        }
        else{
            i++;
        }
    }
}

int main(){
    int sum;
    cout << " Enter number: ";
    cin >> sum ;
    cout << " Expected Output : " << findDivisor( sum );
}