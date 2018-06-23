# os181-1

## Collaborators:
Ivana Irene Thomas / 1606887352 (Ketua)

Anisha Inas Izdihar / 1606829730 (Wakil Ketua 1)

Muhammad Iqbal Mahendra / 1606874690 (Wakil Ketua 4)

Zhelia Alifa / 1606825612 (Wakil Ketua 5)

Stefan Mayer Sianturi / 1606918364 (Wakil Ketua 11)

Muhammad Hanif Pratama / 1606876065 (Wakil Ketua 12)

Rizki Leonardo / 1606878934 (Wakil Ketua 16)

## Demo Descriptions and Related OS Materials

#### Demo W00
**Demo Description**: Try running makefile on Badak server
(Makefile consists of commands to compile the C program, and remove the executable file (clean))

**Related OS Material**: A little introduction to C language and scripting

#### Demo W01
notes by Rizki Leonardo: di wsl, jika program tidak berjalan karena command "\r", ada 3 opsi solusi untuk memecahkan permasalahan ini: (pilih salah satu saja)
**opsi 1: dos2unix**

a. masukkan command "sudo apt-get install dos2unix"

b. masukkan command "dos2unix [file]" untuk setiap [file]

c. jalankan seperti biasa, yaitu "bash [file]"

**opsi 2: mengganti semua error dari "\r"**

masukkan command "sed -i.bak 's/\r$//' [file]

**opsi 3: git essential**

masukan perintah sudo apt-get update, lalu sudo apt-get install build-essential, lalu sudo apt-get install git-core, lalu sudo apt upgrade.

jika masih tidak berjalan, coba restart untuk update** (bisa berkali-kali restart)
#### Demo W02
#### Demo W03
#### Demo W04
#### Demo W05
#### Demo W06
#### Demo W07
#### Demo W08
#### Demo W09
#### Demo W10

## Tips and Trick in Operating System Course

## What we learn from running demos on WSL/Ubuntu Container

### Ubuntu Container

### WSL

#### Cara menggunakan WSL

**0. Pastikan Windows 10 64-bit anda sudah terupdate** minimal hingga versi 1607 (bisa dicek pada: Start Menu -> Settings -> System -> About)

**1. Aktifkan Windows Subsystem for Linux di Windows 10** dengan cara masuk ke menu **Turn Windows Features on or off** (ketik di search box keywordnya), lalu cari **Windows Subsystem for Linux** di box yang muncul, lalu centang check-box nya, klik **OK** lalu biarkan Windows memprosesnya. 

**2. Menginstall Ubuntu** Buka Microsoft Store, lalu search Ubuntu, dan install sesuai distro yang diinginkan, contohnya **Ubuntu 18.04** klik Get

**3. Setup Ubuntu** buka Command Prompt, lalu ketikan perintah untuk menjalankan ubuntu (contohnya **ubuntu1804** tergantung distro yang diinstal), jika baru pertama kali dijalankan, ubuntu akan meminta untuk membuat username dan password, buat saja. Setelah itu masukan perintah **sudo apt-get update**, lalu **sudo apt-get install build-essential**, lalu **sudo apt-get install git-core**. Setelah itu kalian bisa menggunakan WSL untuk menjalankan demo-demo yang ada

**4. Mencoba Demo** untuk mencoba demo, clone repository ini, lalu pergi ke direktori demo yang ingin dicoba lalu silakan dicoba (gunakan perintah *bash nama-program* untuk menjalankan program)

