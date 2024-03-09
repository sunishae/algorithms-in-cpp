// number : 10008
// description : A/B
// date : 2024.03.09//

#include <iostream>
 
using namespace std;
int main(int argc, char const *argv[]) {
 
    double a, b;
    cin >> a >> b;
 
    cout.precision(12);
    cout << fixed;
    cout << a / b;
    
    return 0;
}