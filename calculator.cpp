#include<bits/stdc++.h>
using namespace std;
int submittion(int a, int b){
    return (a + b);
}

int subtraction(int a, int b){
    return (a - b);
}

int multipication(int a, int b){
    return (a * b);
}

int divition(int a, int b){
    return (a / b);
}
int main()
{
    int a, b; char x;
    cin >> a >> x >> b;;
    
    int sum_jog = submittion(a, b);
    int sum_biyog = subtraction(a, b);
    int sum_gun = multipication(a, b);
    int sum_bhag = divition(a, b);
    
    if(x == '+'){
        cout << "(" << a << " + " << b << ")" << " = " << sum_jog << '\n';
    }
    else if(x == '-'){
        cout << "(" << a << " - " << b << ")" << " = " << sum_biyog << '\n';
    }
    else if(x == '*'){
        cout << "(" << a << " * "  << b << ")" << " = " << sum_gun << '\n';
    }
    else{
        cout << "("  << a << " / " << b << ")" << " = " << sum_bhag << '\n';
    }
    return 0;
}