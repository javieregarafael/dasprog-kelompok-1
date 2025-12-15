# KALKULATOR DASAR PEMROGRAMAN (C)

## Informasi Umum
Program ini merupakan aplikasi **kalkulator berbasis console** yang dibuat menggunakan bahasa pemrograman **C**. Program ini digunakan untuk melakukan **perhitungan dasar rangkaian listrik** serta **konversi sistem bilangan** yang berkaitan dengan bidang **Teknik Telekomunikasi** dan **Sistem Digital**.

Program dirancang menggunakan konsep **menu-driven**, sehingga pengguna dapat memilih fitur yang diinginkan melalui menu utama.

---

## Identitas Pembuat

- **Institusi** : Institut Teknologi Sepuluh Nopember (ITS)
- **Program Studi** : Teknik Telekomunikasi

### Nama Anggota:
1. Rafael Gerwin Andirano
2. Fahrega Nur Cholid
3. Javier Efforadion S.N

---

## Fitur Program

### A. Verifikasi Rangkaian Elektrik
- Kalkulator Hukum Ohm
- Kalkulator Daya Listrik
- Perhitungan Resistor Seri
- Perhitungan Resistor Paralel

### B. Utilitas Sistem Digital
- Konversi Desimal ke Biner, Oktal, dan Heksadesimal
- Konversi Biner ke Desimal
- Konversi Oktal ke Desimal
- Konversi Heksadesimal ke Desimal

---

## Struktur Program

Program disusun secara modular menggunakan beberapa fungsi agar kode lebih rapi dan mudah dipahami.

Fungsi-fungsi utama yang digunakan:
- `hukumOhm()`
- `dayaListrik()`
- `resistorSeri()`
- `resistorParalel()`
- `desimalKeLain()`
- `binerKeDesimal()`
- `oktalKeDesimal()`
- `heksaKeDesimal()`
- `pause()`

---

## Flowchart Program

### 1. Flowchart Utama (Main Program)

```mermaid
flowchart TD
    A([Mulai]) --> B[Tampilkan Menu Utama]
    B --> C{Input Pilihan}

    C -->|1| D[Hukum Ohm]
    C -->|2| E[Daya Listrik]
    C -->|3| F[Resistor Seri]
    C -->|4| G[Resistor Paralel]
    C -->|5| H[Desimal ke Konversi]
    C -->|6| I[Biner ke Desimal]
    C -->|7| J[Oktal ke Desimal]
    C -->|8| K[Heksa ke Desimal]
    C -->|9| L([Selesai])

    D --> M[Pause]
    E --> M
    F --> M
    G --> M
    H --> M
    I --> M
    J --> M
    K --> M

    M --> B
```

---

### 2. Flowchart Hukum Ohm

```mermaid
flowchart TD
    A([Mulai]) --> B[Tampilkan Menu Hukum Ohm]
    B --> C{Pilih Perhitungan}

    C -->|Tegangan| D[Input Arus dan Hambatan]
    D --> E[Proses Hitung Tegangan]

    C -->|Arus| F[Input Tegangan dan Hambatan]
    F --> G[Proses Hitung Arus]

    C -->|Hambatan| H[Input Tegangan dan Arus]
    H --> I[Proses Hitung Hambatan]

    E --> J[Tampilkan Hasil]
    G --> J
    I --> J

    J --> K[Pause]
    K --> L([Kembali ke Menu])
```

---

### 3. Flowchart Daya Listrik

```mermaid
flowchart TD
    A([Mulai]) --> B[Input Tegangan]
    B --> C[Input Arus]
    C --> D[Hitung Daya]
    D --> E[Tampilkan Hasil]
    E --> F[Pause]
    F --> G([Kembali ke Menu])
```

---

### 4. Flowchart Resistor Seri

```mermaid
flowchart TD
    A([Mulai]) --> B[Input Jumlah Resistor]
    B --> C[Input Nilai Resistor]
    C --> D[Jumlahkan Hambatan]
    D --> E[Tampilkan Total Hambatan]
    E --> F[Pause]
    F --> G([Kembali ke Menu])
```

---

### 5. Flowchart Resistor Paralel

```mermaid
flowchart TD
    A([Mulai]) --> B[Input Jumlah Resistor]
    B --> C[Input Nilai Resistor]
    C --> D[Hitung Kebalikan Hambatan]
    D --> E[Hitung Total Hambatan]
    E --> F[Tampilkan Hasil]
    F --> G[Pause]
    G --> H([Kembali ke Menu])
```

---

### 6. Flowchart Konversi Bilangan

```mermaid
flowchart TD
    A([Mulai]) --> B[Pilih Jenis Konversi]
    B --> C[Input Bilangan]
    C --> D[Proses Konversi]
    D --> E[Tampilkan Hasil]
    E --> F[Pause]
    F --> G([Kembali ke Menu])
```

---

## Cara Menjalankan Program

1. Pastikan compiler C telah terpasang (contoh: GCC)
2. Simpan file program dengan ekstensi `.c`
3. Buka terminal atau command prompt
4. Compile program dengan perintah:
   ```bash
   gcc kalkulator.c -o kalkulator
   ```
5. Jalankan program:
   ```bash
   ./kalkulator
   ```

---

## Tujuan Pembuatan

Program ini dibuat untuk:
- Memenuhi tugas mata kuliah Dasar Pemrograman
- Melatih penggunaan fungsi, percabangan, dan perulangan dalam bahasa C
- Menerapkan konsep rangkaian listrik dasar
- Memahami konversi sistem bilangan digital

---

## Penutup

Dengan adanya program ini, diharapkan mahasiswa dapat memahami penerapan bahasa C dalam menyelesaikan permasalahan teknik, khususnya di bidang **Teknik Telekomunikasi**.

Terima kasih.

