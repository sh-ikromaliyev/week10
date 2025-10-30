#include <iostream>
#include <ctime>
#include <cstdlib>
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

void reverseArray(int arr[], int start, int end) {
    for (int i = start, j =end; i<j;i++,j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for (int i =0; i <= end; i++) {
        cout << arr[i] << " ";
    }
        // 1 2 3 4 5 (4-0) (3-1) (2-2)
}

void reverseArray2(int arr[], int start, int end) {
    if (end != start) {
        cout << arr[end] << " ";
        reverseArray(arr, start, end-1);
    }
    return;
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


    // Problem 6

    // int n6;
    // cin >> n6;
    // int upp = 0, low = 0, digit = 0, special = 0;
    // char array6[n6];
    // for (int i = 0; i < n6; i++) {
    //     cin >> array6[i];
    // }
    // for (int i = 0; i < n6; i++) {
    //     if (97 <=array6[i] && array6[i] <= 122 ) {
    //         low+= 1;
    //     } else if (65 <= array6[i] && array6[i] <= 90 ) {
    //         upp+= 1;
    //     } else if (48 <= array6[i] && array6[i] <= 57 ) {
    //         digit += 1;
    //     } else {
    //         special += 1;
    //     }
    // }
    // cout << "Uppercase: "   << upp << "\nLowercase: " << low << "\nDigit: " << digit << "\nSpecial: " << special << endl;

    // Problem 7
    // int n7;
    // cin >> n7;
    // int array7[n7];
    // for (int i = 0; i < n7; i++) {
    //     cin >> array7[i];
    // }
    // for (int i = 0; i < n7 - 1; i++) {
    //     for (int j = i +1; j < n7; j++) {
    //         if (array7[i] > array7[j]) {
    //             int temp = array7[i];
    //             array7[i] = array7[j];
    //             array7[j] = temp;
    //         }
    //     }
    // }
    // for (int i = 0; i < n7; i++) {
    //     cout << array7[i] << " ";
    // }

    // Problem 8
    // int dice[] = {1,2,3,4,5,6};
    // int numbers[] = {0,0,0,0,0,0};
    // srand(time(0));
    // for (int i = 0; i < 10000; i++) {
    //     int randomNumber =   1+ rand()%6;
    //     numbers[randomNumber - 1]++;
    // }
    // for (int i = 0; i < 6; i++) {
    //     cout << numbers[i] << " ";
    // }

    // Problem 9
    // int arr9[] = {1,2,3,4,5,6,7,8,9,10};
    // reverseArray(arr9,0,9);

    // Problem 10
    // int arr10[] = {1,2,3,4,5,6,7,8,9,10};
    // reverseArray2(arr10,0, 9);

    // Problem 11

    int target = 9;
    int nums[] = {2,7,11,15};



    return 0;
}
