#include <iostream>
#include <stack>
using namespace std;

//5223600017_Daffa Rifqi Arrazzaq

class QueueUsingStack {
private:
    stack<int> stackI, stackII;

public:
    void enqueue(int newValue) {
        stackI.push(newValue);
    }

    int dequeue() {
        int extractedValue;
        if (stackII.empty()) {
            while (!stackI.empty()) {
                extractedValue = stackI.top();
                stackI.pop();
                stackII.push(extractedValue);
            }
        }
        if (stackII.empty()) {
            throw invalid_argument("QueueEmptyException");
        }
        extractedValue = stackII.top();
        stackII.pop();
        return extractedValue;
    }
};

int main() {
    QueueUsingStack que;
    que.enqueue(1);
    que.enqueue(11);
    que.enqueue(111);
    cout << que.dequeue() << endl;  
    que.enqueue(2);
    que.enqueue(21);
    que.enqueue(211);
    cout << que.dequeue() << endl;  
    cout << que.dequeue() << endl;  
    return 0;
}
//Program tersebut adalah implementasi antrian (queue) menggunakan dua tumpukan (stack) dalam bahasa C++. Fungsi `enqueue` menambahkan elemen ke antrian, sementara fungsi `dequeue` menghapus dan mengembalikan elemen dari antrian sesuai dengan aturan FIFO. Dua tumpukan (`stackI` dan `stackII`) digunakan untuk menyimpan elemen antrian. 