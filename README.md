# Assessment_CPP

### Muhammad Rasyid Ridho - 103122400018

Pada kesempatan Assessment kali ini saya kedapatan soal bagian DoubleLinkedList.
Dengan catatan harus ada
- function allocate
- function NewList
- function printList

secara struktural disini ada
1. dll.h
2. dll.cpp
3. main.cpp

## DLL.H
Fungsi dari dll.h adalah sebagai file header yang biasanya dijadikan sebagai deklarasi awal dan juga pembuatan structure.
Untuk struct disini ada 
- Elmlist
- List
- struct infotype dari postingannya.

Selain struct ada deklarasi function dan procedure.
Untuk funtion ada :
- allocate, yang digunakan untuk mengalokasikan alamat dari element
- isEmpty, digunakan untuk pengecekkan apakah List ini kosong atau tidak.
- length, digunakan untuk mengecek jumlah element yang ada didalam list.
- findElement, digunakan untuk mencari element berdasarkan keyword tertentu.

Untuk Procedure ada :
- createList, yang digunakan untuk membuat List baru
- insertLast, digunakan untuk menambahkan element dari element yang terakhir
- deleteFirst, digunakan untuk menghapus element dari element yang pertama
- deleteLast, digunakan untuk menghapus element dari element yang terakhir
- printList, digunakan untuk mencetak isi yang ada didalam List.

## DLL.CPP
Pada file dll.cpp digunakan untuk menulis isi dan menjalankan fungsi dan prosedur yang telah di deklarasikan di file dll.h

Sebelum menuliskan isi dari tiap-tiap procedure dan function, perlu dilakukan import dll.h dengan menambahkan #include "dll.h" agar function dan procedure yang telah di deklarasikan sebelumnya bisa kita gunakan.

## MAIN.CPP
Fungsi dari file main.cpp adalah untuk menjalankan programnya secara keseluruhan, dan pada file ini juga kita menuliskan behavior yang ingin dijalankan, seperti melakukan pencarian data, menampilkan List dan lain sebagainya.

### Program Output
![alt text](image-1.png)
