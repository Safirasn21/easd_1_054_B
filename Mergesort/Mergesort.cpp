#include <iostream>
using namespace std;

const int MAX_SIZE = 14; // sumbu dari 54 + 20 - 2 x 15 + 10 + 20
int rara[MAX_SIZE];

void merge(int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[10], R[10];
