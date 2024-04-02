#include <iostream>
#include <list>
using namespace std;

//5223600017_Daffa Rifqi Arrazzaq

// Membuat daftar orang menggunakan linked list
int josephus(int totalPeople, int step) {
    list<int> people; 

    // Membuat daftar orang dari 1 hingga totalPeople
    for (int i = 1; i <= totalPeople; i++) {
        people.push_back(i); // Menambahkan orang ke dalam daftar
    }

    auto iterator = people.begin(); // Inisialisasi iterator yang menunjuk ke awal daftar
    while (people.size() > 1) {
        // Memindahkan iterator sejauh step - 1 langkah
        for (int i = 0; i < step - 1; i++) {
            iterator++; // Memindahkan iterator ke depan sebanyak langkah - 1
            if (iterator == people.end()) {
                iterator = people.begin(); // Kembali ke awal jika sudah mencapai akhir daftar
            }
        }

        // Menghapus orang yang sedang ditunjuk oleh iterator
        auto next = iterator;
        next++;
        if (next == people.end()) {
            next = people.begin();
        }
        iterator = people.erase(iterator); // Menghapus orang dari daftar dan menggeser iterator
        iterator = next; // Menyesuaikan iterator dengan orang berikutnya
    }

    return people.front(); // Mengembalikan nomor orang yang selamat
}

int main() {
    int totalPeople, step;
    cout << "Masukkan jumlah orang: ";
    cin >> totalPeople; // Meminta input jumlah orang dari pengguna
    cout << "Masukkan nilai langkah: ";
    cin >> step; // Meminta input nilai langkah dari pengguna

    int survivor = josephus(totalPeople, step); // Memanggil fungsi Josephus
    cout << "Orang yang selamat adalah: " << survivor << endl; // Menampilkan nomor orang yang selamat

    return 0;
}
