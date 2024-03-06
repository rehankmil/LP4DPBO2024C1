#include <iostream>
#include <vector>
#include <iomanip>
#include "vehicle.cpp"
#include "car.cpp"
#include "motor.cpp"
#include "garage.cpp"
#include "parkinglot.cpp"

using namespace std;

int main()
{
    Car mobil1("B 1234 AB", "Toyota Avanza", "2020", "Merah", "5", "4");
    Car mobil2("B 4567 CD", "Honda Jazz   ", "2021", "Biru ", "5", "4");
    Motorcycle motor1("B 8901 EF", "Yamaha NMAX  ", "2022", "Hitam", "Matic", "4.2");
    Motorcycle motor2("D 2431 DA", "Yamaha Filano", "2023", "Putih", "Matic", "4.3");

    vector<Vehicle*> daftar_kendaraan = {&mobil1, &mobil2, &motor1, &motor2};

    Garage garasi("Garasi Rumah Saya", 100, daftar_kendaraan);
    ParkingLot parkir(50, daftar_kendaraan.size());

    cout << garasi.nama_garasi << endl;
    cout << "Luas Garasi: " << garasi.luas_garasi << endl;
    cout << "Kapasitas: " << parkir.kapasitas << endl;
    cout << "Jumlah Kendaraan Saat Ini: " << parkir.jumlah_kendaraan_saat_ini << endl;

    cout << "+------------+----------------+-------+-------+--------------+--------------+-------------+------------------+" << endl;
    cout << "| Plat Nomor |      Merk      | Tahun | Warna | Jumlah Kursi | Jumlah Pintu | Jenis Motor | Kapasitas Tangki |" << endl;
    cout << "+------------+----------------+-------+-------+--------------+--------------+-------------+------------------+" << endl;
    for (Vehicle* kendaraan : daftar_kendaraan)
    {
        cout << kendaraan->toTableRow() << endl;
    }

    cout << "+------------+----------------+-------+-------+--------------+--------------+-------------+------------------+" << endl;

    return 0;
}
