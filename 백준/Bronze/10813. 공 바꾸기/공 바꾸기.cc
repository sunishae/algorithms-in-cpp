// number : 10813
// description : 바구니마다 공 바꾸기
// date : 2024.03.12

#include <iostream>

using namespace std;

void exchange(int *a, int *b);
void print_array(int *a, int size);

int main(){

    int N,M;
    cin >> N >> M;

    int *array{ new int[N]{}};

    for(int i=0; i<N; i++){
        array[i] = i+1;
    }

    for(int i =0; i<M; i++){
        int a,b;
        cin >> a >> b;
        exchange(&array[a-1], &array[b-1]);
    }

    print_array(array, N);

    return 0;
}

void exchange(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_array(int *a, int size){
    for(int i=0; i<size; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}