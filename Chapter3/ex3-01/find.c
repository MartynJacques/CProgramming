#include <stdio.h>

int binsearch(int x, int v[], int n) {
    int low, high, mid;

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low+high)/2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}

int mybinsearch(int x, int v[], int n) {
    int low, high, mid;
    low = 0;
    high = n - 1;
    mid = (high + low) / 2;
    while (low <= high && v[mid] != x) {
        if (x < mid)
            high = mid - 1;
        else
            low = mid + 1;
        mid = (low+high)/2;
    }

    if (v[mid] == x)
        return x;
    return -1;
}

int main() {
    int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    printf("%i", binsearch(7, array, 10));
}

