#include <iostream>

using namespace std;

class Array {
private:
    int arr[10];

public:
    Array() {}

    int get(int index) {
        return arr[index];
    }

    void put(int index, int value) {
        arr[index] = value;
    }

    Array operator++(int) {
        Array temp(*this);
        for (int i = 0; i < 10; i++) {
            arr[i]++;
        }
        return temp;
    }

    Array& operator+=(const Array& other) {
        for (int i = 0; i < 10; i++) {
            arr[i] += other.arr[i];
        }
        return *this;
    }

    Array operator!() {
        Array temp(*this);
        for (int i = 0; i < 9; i++) {
                if (temp.get(i) == 0) {
                    arr[i] = 1;
                } else {
                    arr[i] = 0;
                }
            }
        if (temp.get(9) == 0) {
            arr[9] = 1;
        } else {
            arr[9] = 0;
        }

        return temp;
    }

    friend ostream& operator<<(ostream& os, const Array& arr) {
        for (int i = 0; i < 9; i++) {
            os << arr.arr[i] << ",";
        }
        os << arr.arr[9] << endl;
        return os;
    }

    friend istream& operator>>(istream& is, Array& arr) {
        for (int i = 0; i < 10; i++) {
            is >> arr.arr[i];
        }
        return is;
    }
};

int main() {
    Array a, b;

    cin >> a;

    for (int i = 0; i < 10; i++) {
        b.put(i, i * 3);
    }

    !a;
    cout << a << endl;
    
    a++;
    cout << a << endl;

    a += b;
    cout << a << endl;

    return 0;
}