#include <iostream>
using namespace std;

int main() {
    string nama;
    int nilai, voter, lulus = 0, tidak = 0;
    char vote;

    cout << "Nama Mahasiswa: ";
    cin.ignore();
    getline(cin, nama);

    cout << "Nilai: ";
    cin >> nilai;

    cout << "Jumlah voter: ";
    cin >> voter;

    for (int i = 0; i < voter; i++) {
        cout << "Vote (L/T): ";
        cin >> vote;
        if (vote == 'L' || vote == 'l') lulus++;
        else if (vote == 'T' || vote == 't') tidak++;
    }

    cout << "\nHasil Voting untuk " << nama << endl;
    cout << "Lulus: " << lulus << " | Tidak Lulus: " << tidak << endl;
    cout << "Keputusan: " << (lulus > tidak ? "LULUS" : "TIDAK LULUS");

    return 0;
}
