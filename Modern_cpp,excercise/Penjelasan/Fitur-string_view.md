# 📌 **`std::string_view` dalam C++**

## 🔍 **Definisi**
`std::string_view` adalah referensi **non-ownership** ke string yang memungkinkan kita **mengakses dan memanipulasi substring tanpa menyalin data**. Ini sangat berguna untuk **efisiensi dan performa** dalam pengolahan string.

## 🎯 **Kegunaan `std::string_view`**
- **Tidak Mengalokasikan Memori Baru** → Lebih cepat dibandingkan `std::string`.
- **Bisa Mereferensikan `std::string` dan C-string (`const char*`)**.
- **Lebih Ringan** → Menggunakan hanya **dua variabel**: pointer dan panjang string.
- **Aman** → Tidak bisa mengubah konten string asal (hanya sebagai view).

## ⚡ **Pengujian Performa**

### 🔴 **Tanpa `std::string_view`**
Tanpa menggunakan `std::string`, alokasi memori terjadi sebanyak **tiga kali**. 

📌 **Bukti Pengujian:**  
![Tanpa string_view](https://github.com/AtokTajuddin/Struktur_Data/blob/804eee179e009d3e504c62ebf925c7ed19e81716/Gambar/Screenshot%202025-03-26%20102230.png)

---

### 🟢 **Dengan `std::string_view`**
Dengan menggunakan `std::string_view` pada kasus yang sama, **tidak ada alokasi memori baru** yang terjadi.

📌 **Bukti Pengujian:**  
![Dengan string_view](https://github.com/AtokTajuddin/Struktur_Data/blob/804eee179e009d3e504c62ebf925c7ed19e81716/Gambar/Screenshot%202025-03-26%20102526.png)

## ✅ **Kesimpulan**
- **Gunakan `std::string_view`** untuk **membaca** string tanpa alokasi memori tambahan.
- **Jangan gunakan `std::string_view`** jika butuh menyimpan string dalam jangka panjang.
- **Pastikan sumber data masih hidup** saat menggunakan `std::string_view` untuk menghindari **undefined behavior**.
