#pragma once
#include <iostream>
#include <vector>
#include <iomanip>
#include "vehicle.cpp"

using namespace std;

class Car : public Vehicle
{
    public:
        string jumlah_kursi;
        string jumlah_pintu;

        Car()
        {
        }

        Car(string plat_nomor, string merk, string tahun_produksi, string warna, string jumlah_kursi, string jumlah_pintu) : 
            Vehicle(plat_nomor, merk, tahun_produksi, warna)
        {
            this->jumlah_kursi = jumlah_kursi;
            this->jumlah_pintu = jumlah_pintu;
        }
        
        string toTableRow()
        {
            return Vehicle::toTableRow() + "       " + jumlah_kursi + " |       " + jumlah_pintu + " |      -      |         -        |";
        }
};