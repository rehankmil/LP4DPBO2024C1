from Car import Car
from Motorcycle import Motorcycle
from Garage import Garage
from Parkinglot import ParkingLot

# Hardcode data
mobil1 = Car("B 1234 AB", "Toyota Avanza", "2020", "Merah", "5", "4")
mobil2 = Car("B 4567 CD", "Honda Jazz", "2021", "Biru", "5", "4")
motor1 = Motorcycle("B 8901 EF", "Yamaha NMAX", "2022", "Hitam", "Matic", "4.2")
motor2 = Motorcycle("D 2431 DA", "Yamaha Filano", "2023", "Putih", "Matic", "4.3")

# Buat daftar kendaraan
daftar_kendaraan = [mobil1, mobil2, motor1, motor2]

# Buat objek garasi dan parking lot
garasi = Garage("Garasi Rumah Saya", 100, daftar_kendaraan)
parkir = ParkingLot(50, len(daftar_kendaraan))

# Tampilkan data
print(f"{garasi.nama_garasi}")
print(f"Luas Garasi : {garasi.luas_garasi}")
print(f"Kapasitas : {parkir.kapasitas}")
print(f"Jumlah Kendaraan Saat Ini : {parkir.jumlah_kendaraan_saat_ini}")

# Buat header tabel
print("+------------+----------------+-------+-------+--------------+--------------+-------------+------------------+")
print("| Plat Nomor |      Merk      | Tahun | Warna | Jumlah Kursi | Jumlah Pintu | Jenis Motor | Kapasitas Tangki |")
print("+------------+----------------+-------+-------+--------------+--------------+-------------+------------------+")

# Tampilkan data kendaraan dalam bentuk tabel
for kendaraan in garasi.daftar_kendaraan:
    print(kendaraan.to_table_row())

print("+------------+----------------+-------+-------+--------------+--------------+-------------+------------------+")
print("\n")