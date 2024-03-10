// number : 25314
// description : long 반복해서 출력
// date : 2024.03.10

#include <iostream>
#include <string>

using namespace std;

int main() {
    int byte = 0;

    cin >> byte;
    for(int i = 0; i < byte/4 ; i++)
        cout << "long ";
    cout << "int"; 
    
    return 0;
 
}