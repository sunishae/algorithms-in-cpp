// number : 10811
// description : 바구니 순서 뒤집기
// date : 2024.03.12

#include <iostream>

using namespace std;

void exchange(int *a, int *b);
void print_array(int *a, int size);

int main(){
    int N,M;
    cin >> N >> M;

    int *array = new int[N];
    for(int i=0; i<N; i++)
        array[i] = i+1;

    for(int i=0; i<M; i++){
        int a,b;
        cin >> a >> b;
        a--; b--;
        while(a<=b){
            exchange(&array[a], &array[b]);
            a++;
            b--;
        }
    }

    print_array(array,N);

    delete [] array;

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