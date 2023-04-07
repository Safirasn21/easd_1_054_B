#include <iostream>
using namespace std;

const int MAX_SIZE = 14; // sumbu dari 54 + 20 - 2 x 15 + 10 + 20
int rara[MAX_SIZE];

void merge(int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[10], R[10];

    for (int i = 0; i < n1; i++) {
        L[i] = rara[left + i];
    }

    for (int SH = 0; SH < n2; SH++) {
        R[SH] = rara[mid + 1 + SH];
    }

    int i = 0, SH = 0, k = left;
    while (i < n1 && SH < n2) {
        if (L[i] <= R[SH]) {
            rara[k] = L[i];
            i++;
        }

        else {
            rara[k] = R[SH];
            SH++;
        }

        k++;
    }

    while (i < n1) {
        rara[k] = L[i];
        i++;
        k++;
    }

    while (SH < n2) {
        rara[k] = R[SH];
        SH++;
        k++;
    }
}

void mergeSort(int left, int right) {
    if (left >= right) {
        return;
    }
    int mid = left + (right - left) / 2;
    mergeSort(left, mid);
    mergeSort(mid + 1, right);
    merge(left, mid, right);
}

void input() {
    cout << "Masukkan data sebanyak " << MAX_SIZE << ":\n";
    for (int i = 0; i < MAX_SIZE; i++) {
        cout << "Data ke-" << i + 1 << ": ";
        cin >> rara[i];
    }
}

void display() {
    cout << "Data setelah diurutkan:\n";
    for (int i = 0; i < MAX_SIZE; i++) {
        cout << rara[i] << " ";
    }
    cout << endl;
}

int main() {
    input();
    mergeSort(0, MAX_SIZE - 1);
    display();
    return 0;
}

// karena dengan menggunakan algoritma kita dapat memaparkan kondisi awal, dan langkah yang harus dilekukan untuk mendapatkan hasil dengan cara yang logis.
- because computer science is field of study that deals with solving a variety of problems by using computers, and to solve a the problem.U need to use algorithm
// static dengan menggunakan array, dan dynamic menggunakan linked list
// kecepatan mesin, bahsa pemograman, ukuran dari input, compiler, operating system.
// quick sort, karena quick sort yang memiliki efisiensi kompleksitas waktu rata - rata paling tinggi diantara yang lain(membagi data menjadi dua bagian, kemudian mengurutkan bagian - bagian tersebut secara terpisah.)
// quadratic: bubblesort, insertionsort
// Longlinear : mergesort, quicksort
