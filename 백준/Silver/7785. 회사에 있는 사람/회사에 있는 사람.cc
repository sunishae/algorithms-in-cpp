// number : 7785
// description : 회사에 있는 사람
// date : 2024.03.24

#include <iostream>
#include <vector>
#include <set>

using namespace std;
set<string> company;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        string name;
        string ent;
        cin >> name >> ent;
        if(ent == "enter"){
            company.insert(name);
        }
        else{
            company.erase(name);
        }
    }

    set<string>::iterator it = company.end();
    for(it--; it != company.begin(); it--){
        cout << *it << '\n';
    }
    cout << *it;


    return 0;
}
