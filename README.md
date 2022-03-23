# Linked-List
# Pengertian
Link list adalah desain tempat penyimpanan data yang terdiri dari node-node (simpul-simpul) yang saling terhubung.
Link list dapat diilustrasikan seperti kereta api, dimana kereta api terdiri dari gerbong-gerbong yang saling terhubung yang dapat mengangkut penumpang. Gerbong disini setara dengan node dalam link list yang berfungsi untuk menyimpan data.

- Sekumpulan elemen bertipe sama, yang mempunyai keterurutan tertentu, yang setiap elemennya terdiri dari dua bagian.
- Struktur berupa rangkaian elemen saling berkait dimana setiap elemen dihubungkan elemen lain melalui pointer. Pointer adalah alamat elemen. Penggunaan pointer untuk mengacu elemen berakibat elemen-elemen bersebelahan secara logik walau tidak bersebelahan secara fisik di memori.

# Jenis Linked List
Singly Linked List :
- Setiap node pada linked list mempunyai field yang berisi pointer ke node berikutnya dan juga memiliki field yang berisi data.
- Akhir linked list ditandai dengan node terakhir akan menunjuk ke null yang akan digunakan sebagai kondisi berhenti saat pembacaan linked list.

Doubly Linked List :
- Linked list dengan menggunakan pointer, dimana setiap node memiliki 3 field, yaitu: 1 field pointer yang menunjuk ke pointer berikutnya, 1 field pointer yang menunjuk ke pointer sebelumnya dan field yang berisi data dari node tersebut.
- Pointer next dan prev-nya menunjuk ke null.
