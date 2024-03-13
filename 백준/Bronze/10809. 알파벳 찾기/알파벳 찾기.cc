// number : 10809
// description : 알파벳 처음 등장 위치  
// date : 2024.03.13

#include <iostream>

using namespace std;

void print_array(int *array, int size);

int main(){

    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    int str[26] = {0, };

    string input;
    cin >> input;

    for(int i=0; i<26; i++){
        str[i] = input.find(alphabet[i]);
    }

    print_array(str, 26);

    return 0;
}

void print_array(int *array, int size){
    for(int i=0; i<size; i++)
        cout << array[i] << " ";
}