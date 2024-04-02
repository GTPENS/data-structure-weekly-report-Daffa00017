//5223600017_Daffa Rifqi Arrazzaq

int Queue::dequeue() {
    if (empty()) {
        throw invalid_argument("QueueEmptyException");
    }
    int extractedValue = head->value;
    Node* tempNode = head;
    head = head->next;
    delete tempNode;
    count--;
    return extractedValue;
}
//Program tersebut merupakan implementasi dari struktur data antrian (queue) menggunakan bahasa pemrograman C++. Fungsi `dequeue` digunakan untuk menghapus elemen dari antrian dan mengembalikan nilainya. Jika antrian kosong, sebuah pengecualian (exception) akan dilempar. Variabel `count` melacak jumlah elemen dalam antrian.