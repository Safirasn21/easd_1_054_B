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
