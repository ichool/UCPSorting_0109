// tipe soal B

// 1. bandingkan elemen antara index 0 dan index 1 jika index 1 lebih kecil dari pada index 0,
//    maka tukar posisi dari index 1 ke index 0. lalu bandingan elemen index 1 dan index 2, 
//    jika index 2 lebih besar daripada index 1 maka biarkan saja tidak perlu ditukar,
//    lakukan hal ini berulang hingga index nya berurutan

// 2. Ambil data yang paling tengah dari sebuah index, lalu index paling tengah tersebut dibagi dengan 2/4 dan seterusnya,
//    kemudian buat banyak array sesuar jumlah hasil pembagian index tadi. lalu gunakan operasi insertion sort pada array array
//    yang ada lalu satukan lagi array array tadi menjadi satu array, kemudain pisahkan lagi menjadi beberapa array sesuai dengan
//    n:2-1 kemudian lakukan operasi insertion sort,lalu gabungkan kembali array arrray tersebut menjadi satu array, 
//    lakukan hal ini sampay arraynya berurutan.

// 3. Algoritma insertion sort, karena pada algoritma insertion sort jika sudah ada yang berurutan maka tidak perlu diapa apa kan,
//    sehingga mengurangi oprasi pada sebuah algoritma. 

#include <iostream>
using namespace std;

int muhammadFaisalAzhar[9];
int i, n, temp, j, min_index;

void input() {

    while (true) {
        cout << "masukan banyaknya elemen pada array :";
        cin >> n;
        if (n <= 9)
            break;
        else {
            cout << "\nArray maximal hanya 9 elemen.\n";

        }
    }

    cout << endl;
    cout << "======================" << endl;
    cout << "Masukan elemen array :" << endl;
    cout << "======================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "data ke-" << (i + 1) << ":";
        cin >> muhammadFaisalAzhar[i];
    }
}

void selectionSort() {

    for (int j = 0; j < n - 1; j++) {

        int min_index = j;
        for (int i = j + 1; i < n; ++i) {
            if (muhammadFaisalAzhar[i] < muhammadFaisalAzhar[min_index]) {
                min_index = i;
            }
        }
        int temp = muhammadFaisalAzhar[j];
        muhammadFaisalAzhar[j] = muhammadFaisalAzhar[min_index];
        muhammadFaisalAzhar[min_index] = temp;

    }

}
void display() {

    cout << endl;
    cout << "=================================" << endl;
    cout << "element array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    for (int j = 0; j < n; j++) {
        cout << muhammadFaisalAzhar[j] << endl;
    }
    cout << "jumlah pass = " << n - 1 << endl;
    cout << endl;
}

int main()
{
    input();
    selectionSort();
    display();
    system("pause");
    return 0;

}
