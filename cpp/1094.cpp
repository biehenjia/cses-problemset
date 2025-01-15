#include <iostream> 

using namespace std;

int main(){
    long n, _, ans = 0, temp, zero = 0 ;
    cin >> n;
    cin >> _;

    for (int i = 0; i < n-1; i++){
        cin >> temp;
        ans += max(zero,_ - temp);
        _ = max(temp,_);

    }
    cout << ans;
}