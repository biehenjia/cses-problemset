#include <iostream>


using namespace std;

int main(){
    double n;
    cin >> n;
    double  totalSum = n * (n+1)/2; 
    for (int i = 0; i < n-1; i++){
        double x;
        cin >> x;
        totalSum -= x;
    }
    cout << totalSum;
}