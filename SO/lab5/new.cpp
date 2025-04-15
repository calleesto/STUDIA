#include <iostream>
#include <string>
using namespace std;

struct BigNum {
    int* data;
    int length;
    BigNum(){
        length = 0;
        data = new int[100];
    }
    BigNum(BigNum& bn) {
        length = bn.length;
        data = new int[100];
        for (int i = 0; i < 100; i++)
            data[i] = bn.data[i];
    }
    ~BigNum() {
        delete[] data;
    }
    void operator=(BigNum n) {
        data = new int[100];
        for (int i = 0; i < 100; i++)
            data[i] = n.data[i];
        length = n.length;
    }
    void operator+=(int n) {
        data[length++] = n;
    }
    bool operator<(BigNum b) {
        if (length > b.length)
            return false;
        if (length < b.length)
            return true;
        for (int i = length - 1; i >= 0; i--) {
            if (data[i] > b.data[i])
                return false;
            if (data[i] < b.data[i])
                return true;
        }
        return false;
    }
    bool operator>(BigNum b) {
        if (length > b.length)
            return true;
        if (length < b.length)
            return false;
        for (int i = length - 1; i >= 0; i--) {
            if (data[i] > b.data[i])
                return true;
            if (data[i] < b.data[i])
                return false;
        }
        return false;
    }
    bool operator==(BigNum b) {
        if (length != b.length)
            return false;
        for (int i = length - 1; i >= 0; i--) {
            if (data[i] != b.data[i])
                return false;
        }
        return true;
    }
    void print() {
        for (int i = length-1; i>=0 ; i--)
            cout << data[i];
        cout << endl;
    }
};

struct Heap {
    BigNum* heapData;
    int size = 0;
    Heap() {
        heapData = new BigNum[10000];
    }
    void swap(BigNum* a, BigNum* b) {
        BigNum tmp = *a;
        *a = *b;
        *b = tmp;
    }
    int parent(int i) {
        return i / 2;
    }
    int left(int i) {
        return i * 2;
    }
    int right(int i) {
        return i * 2 + 1;
    }
    void heapify(int i, int size) {
        int L = left(i);
        int R = right(i);
        int maxps;
        if (L <= size and heapData[L - 1] > heapData[i - 1])
            maxps = L;
        else
            maxps = i;
        if (R <= size and heapData[R - 1] > heapData[maxps - 1])
            maxps = R;
        if (maxps != i) {
            swap(&heapData[i - 1], &heapData[maxps - 1]);
            heapify(maxps,size);
        }
    }
    void buildHeap() {
        for (int i = parent(size); i > 0; i--)
        {
            heapify(i,size);
        }
    }
    void heapSort() {
        buildHeap();
        for (int i = size; i > 1; i--)
        {
            swap(&heapData[i - 1], &heapData[0]);
            heapify(1, i - 1);
        }
    }
    void operator+=(BigNum n) {
        heapData[size++] = n;
    }
};

int main()
{
    Heap k;
    string x;
    int num;
    cin >> num;
    while (num--) {
        cin >> x;
        BigNum n;
        for (int i = x.size()-1; i >= 0; i--) {
            n += x[i] - '0';
        }
        k += n;
    }
    k.heapSort();
    for (int i = 0; i < k.size; i++) {
        k.heapData[i].print();
    }
    return 0;
}