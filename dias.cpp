#include <iostream>
using namespace std;

int main() {
    int n, p;
    string nama[50];
    int nilai[50];
    char grade[50];

    cout << "Jumlah mahasiswa: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nNama: ";
        cin >> ws;
        getline(cin, nama[i]);
        cout << "Nilai: ";
        cin >> nilai[i];

        if (nilai[i] >= 85) grade[i] = 'A';
        else if (nilai[i] >= 75) grade[i] = 'B';
        else if (nilai[i] >= 65) grade[i] = 'C';
        else if (nilai[i] >= 50) grade[i] = 'D';
        else grade[i] = 'E';
    }

    cout << "\nPilih nomor mahasiswa: ";
    cin >> p;

    if (p >= 1 && p <= n)
        cout << "\nNama: " << nama[p-1]
             << "\nNilai: " << nilai[p-1]
             << "\nGrade: " << grade[p-1];
    else
        cout << "Pilihan tidak valid";

    return 0;
}
