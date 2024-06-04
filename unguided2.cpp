#include <iostream>
#include <string>

using namespace std;

bool is_vowel(char c) {
    char vowels_2311102013[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for (char vowel_2311102013 : vowels_2311102013) {
        if (c == vowel_2311102013) return true;
    }
    return false;
}

int count_vowels(const string &sentence_2311102013) {
    int count = 0;
    for (char c : sentence_2311102013) {
        if (is_vowel(c)) {
            count++;
        }
    }
    return count;
}

int main() {
    string sentence_2311102013;

    cout << "Masukkan kalimat: ";
    getline(cin, sentence_2311102013);

    int vowel_count = count_vowels(sentence_2311102013);

    cout << "Jumlah huruf vokal dalam kalimat: " << vowel_count << endl;

    return 0;
}
