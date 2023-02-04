#include <iostream>
using namespace std;
int main(void) {
    /*1.*/
    //int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
    //int n = sizeof(vector) / sizeof(vector[0]);
    //int min;
    //for (int i = 0; i < n; i++) {
    //    if (*(vector + i) < *(vector + (i + 1))) {
    //        min = *(vector + i);
    //    }
    //}
    //cout << min;
    //return 0;


    /*2.*/
    //int matrix[10][10] = { };
    //for (int i = 0; i < 10; i++) {
    //    for (int j = 0; j < 10; j++) {
    //        *(*(matrix + i) + j) = (i + 1) * (j + 1);
    //    }
    //}
    //for (int i = 0; i < 10; i++) {
    //    for (int j = 0; j < 10; j++) {
    //        cout.width(4);
    //        cout << matrix[i][j];
    //    }
    //    cout << endl;
    //}
    //return 0;




    /*3.*/
    int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
    int n = sizeof(vector) / sizeof(vector[0]);
    int max;
    for (int i = 0; i < n; i++) {
        if (*(vector + i) > *(vector + (i + 1))) {
            max = *(vector + i);
        }
    }
    cout << max;
    return 0;
}