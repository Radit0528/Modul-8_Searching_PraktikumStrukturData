#include <iostream>

using namespace std;

int countNum(const int arr[], int size, int target) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            count++;
        }
    }
    return count;
}

int main() {
    int data_2311102013[] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int size_2311102013 = sizeof(data_2311102013) / sizeof(data_2311102013[0]);
    int target_2311102013 = 4;

    int count = countNum(data_2311102013, size_2311102013, target_2311102013);

    cout << "Jumlah angka " << target_2311102013 << " terdapat sebanyak : " << count << endl;

    return 0;
}