// number : 9506
// description : 약수들의 합
// date : 2024.03.16

#include <iostream>
#include <vector>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    while(true){
        cin >> n;
        if (n==- 1) break;

        vector<int> arr;
        int sum = 0;
        for(int i =1; i < n; i++){
            if(n % i == 0){
                arr.push_back(i);
                sum += i;
            }
        }

        if(sum == n){
            cout << n << " = ";
            for(int i =0; i< arr.size()-1; i++){
                cout << arr[i] << " + ";
            }
            cout << arr[arr.size()-1] << '\n';
        }
        else{
            cout << n << " is NOT perfect." << '\n';
        }
    }

    return 0;
}