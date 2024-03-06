#pragma once
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class ParkingLot
{
    public:
        int kapasitas;
        int jumlah_kendaraan_saat_ini;

        ParkingLot(int kapasitas, int jumlah_kendaraan_saat_ini) : 
            kapasitas(kapasitas), jumlah_kendaraan_saat_ini(jumlah_kendaraan_saat_ini)
        {
        }

        string toString()
        {
            return "Kapasitas: " + to_string(kapasitas) + "\nJumlah Kendaraan Saat Ini: " + to_string(jumlah_kendaraan_saat_ini) + "\n";
        }
};