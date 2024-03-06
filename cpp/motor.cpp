#pragma once
#include <iostream>
#include <vector>
#include <iomanip>
#include "vehicle.cpp"

using namespace std;

class Motorcycle : public Vehicle
{
    public:
        string jenis_motor;
        string kapasitas_tangki;

        Motorcycle(string plat_nomor, string merk, string tahun_produksi, string warna, string jenis_motor, string kapasitas_tangki) : 
            Vehicle(plat_nomor, merk, tahun_produksi, warna)
        {
        }

        string toTableRow()
        {
            return Vehicle::toString() + "       -      |       -      |    " + jenis_motor + " |        " + kapasitas_tangki + " |";
        }
};
