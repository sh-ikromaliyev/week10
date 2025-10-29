#include <iostream>
using namespace std;

float problem2(int n2,int array2[]) {
    float sum =0;
    for (int i = 0; i < n2; i++) {
        sum += array2[i];
    }

    return sum / float(n2);
}

int problem3(int n3, int array3[]) {
    int a = array3[0];
    for (int i = 1; i < n3; i++) {
        if (a > array3[i]) {
            a = array3[i];
        }
    }
    return a;
}

int problem4(double array[], int size){
    int a = 0;
    for (int i = 1; i < size; i++){
        if (array[a] < array[i]){
            a = i;
        }
    }
    return a;
}

bool strictlyEqual(const int list1[], const int list2[],int size){
    for (int i = 0; i < size; i++){
        if (list1[i] != list2[i]){
            return false;
        }
        
    }
    return true;
}

int main() {
    //problem 1
    // int n1;
    // cin >>n1;
    // int problem1[n1];
    // for (int i=0; i<n1; i++) {
    //     cin >> problem1[i];
    // }
    // int sum = 0;
    // for (int i =0; i < n1; i++) {
    //     sum += problem1[i];
    // }
    // cout << sum << endl;

    // Problem 2
    // int n2;
    // cin >> n2;
    // int array2[n2];
    // for (int i = 0; i < n2; i++) {
    //     cin >> array2[i];
    // }
    // cout << problem2(n2,array2);
    // Problem 3

    // int n3;
    // cin >> n3;
    // int array3[n3];
    // for (int i = 0; i < n3; i++) {
    //     cin >> array3[i];
    // }
    // cout << problem3(n3, array3) << endl;


    // Problem 5
    
    return 0;
}
