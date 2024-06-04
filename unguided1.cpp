#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void selection_sort(string &str) {
    int n = str.length();
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (str[j] < str[min_idx]) {
                min_idx = j;
            }
        }
        swap(str[i], str[min_idx]);
    }
}

int binary_search(const string &str, char target) {
    int left = 0, right = str.length() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (str[mid] == target)
            return mid;
        if (str[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    string sentence_2311102013;
    char target_2311102013;

    cout << "Masukkan kalimat: ";
    getline(cin, sentence_2311102013);

    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> target_2311102013;

    selection_sort(sentence_2311102013);

    int index = binary_search(sentence_2311102013, target_2311102013);

    if (index != -1)
        cout << "Huruf " << target_2311102013 << " ditemukan pada indeks ke-" << index << endl;
    else
        cout << "Huruf " << target_2311102013 << " tidak ditemukan dalam kalimat." << endl;

    return 0;
}
