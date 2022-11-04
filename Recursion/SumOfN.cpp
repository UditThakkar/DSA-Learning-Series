#include <iostream>

using namespace std;

int fun(int n){
    if(n<1) return 0;
    return fun(n-1) + n;
}

int main() {
    int n;
    cin>>n;
    cout<<fun(n);
}
