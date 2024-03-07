# KELOMPOK-1-IOT
## Sistem Kipas Otomatis Berdasarkan Suhu

## Anggota Kelompok
- Dimas Putra (09021382227138)
- M. Luthfi Jamal (09021382227152)
- Akif Ramadhan Annasaby (09021382227174)
- M. Faisal (09021382227164)
- ⁠chandra irawan (09021382126151)

  ## Library yang Diperlukan
  - DHT Sensor Library
  - LiquidCrystal I2C

## Deskripsi Project
Kami membuat sebuah sistem pendingin ruangan berdasarkan suhu ruangan. Adapun alat-alat yang kami gunakan meliputi:

## Alat dan Bahan
- Arduino uno R3
- Sensor moduke DHT 11
- Bread board
- LCD 16 x 2 I2C
- Jumper cable male dan famale
-  Module relay 5v
-  Dinamo

![Alat iot kelompok 1](https://github.com/MFaisal8904/KELOMPOK-1-IOT/assets/119216584/615efeaa-c09b-4719-a6a6-f087b6de968d)


## Penyusunan Alat dan Bahan
1.  Siapkan semua alat dan bahan yang diperlukan dalam membuat alat
2.  Sambungkan port 5 volt pada arduino ke port plus pada bread board menggunakan kabel jumper male
3.  Sambungkan port ground pada arduino ke port minus pada bread board menggunakan kabel jumper male
4.  Sambungkan pin plus pada dht ke port plus pada bread board menggunakan jumper male
5.  Sambungkan pin minus pada dht ke port minus pada bread board mengunakan jumper male
6.  Sambungkan pin out pada dht 11 ke port 2 pada arduino menggunakan jumper male
7.  Sambung pin VCC pada relay ke port plus pada bread board menggunakan jumper male
8.  Sambungkan pin ground pada relay ke port minus pada bread board menggunakan jumper male
9.  Sambungkan pin in pada relay ke port 8 pada arduino menggunakan jumper male
10. Siapkan adaptor daya lalu sambungkan sumbu positif nya ke port COM pada relay menggunakan jumper male
11. Lalu sambungkan sumbu negatif pada adaptor daya ke dinamo menggunakan jumper male
12. Sambungkan sumbu positif pada dinamo ke port NO pada relay menggunakan jumper male
13. Sambungkan pin GND module I2C pada LCD ke port minus pada bread board menggunakan jumper female to male
14. Sambungkan pin VCC pada I2C ke port plus pada bread board menggunakan jumper female to male
15. Sambungkan pin SDA pada I2C ke port A4 pada arduino menguunakan jumper female to male
16. Sambungkan pin SCL pada I2C ke port A5 pada arduino menggunakan jumper female to male
17. Lalu rangkaian telah selesai dan selanjutnya masukkan kode yang telah dibuat ke arduino

![rangkaian jadi](https://github.com/MFaisal8904/KELOMPOK-1-IOT/assets/119216584/c2f84a9b-946f-48ae-9b0b-16d210e6ef7f)


## Mekanisme Kerja Alat
Alat ini akan membawa suhu serta kelembapan pada ruangan, jika ruangan tersebut berada pada suhu lebih dari 32° C maka secara otomatis dinamo pada rangkaian akan berputar, untuk implementasinya dinamo tersebut akan diganti dengan kipas, artinya jika suhu ruangan tersebut berada diatas 32° C maka kipas akan secara otomatis hidup dan jika suhu ruangan berada dibawah 32° C maka kipas akan otomatis berhenti berputar

## Finishing Project
Jika alat dan bahan telah dirangkai lalu kode nya telah berjalan sesuai dengan fungsinya, langkah selanjutnya adalah menyiapkan cover atau wadah untuk rangkaian tersebut agar terlihat lebih propoer.

berikut tampilan rangkaian setelah dibuatkan cover:

![tampak luar rangkaian](https://github.com/MFaisal8904/KELOMPOK-1-IOT/assets/119216584/920186a1-ac54-4246-b086-9f2fbaabc941)

![rangkaian full cover](https://github.com/MFaisal8904/KELOMPOK-1-IOT/assets/119216584/804261a1-24c6-4a1d-8bbe-acddda8da511)



