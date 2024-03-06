#pragma once

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class Vehicle
{
    public:
        string plat_nomor;
        string merk;
        string tahun_produksi;
        string warna;

        Vehicle()
        {
        }

        Vehicle(string plat_nomor, string merk, string tahun_produksi, string warna) : 
            plat_nomor(plat_nomor), merk(merk), tahun_produksi(tahun_produksi), warna(warna)
        {
        }

        string toString()
        {
            return "Plat Nomor: " + plat_nomor + "\nMerk: " + merk + "\nTahun Produksi: " + tahun_produksi + "\nWarna: " + warna + "\n";
        }

        string toTableRow()
        {
            return "| " + plat_nomor + "  | " + merk + "  | " + tahun_produksi + "  | " + warna + " |";
        }
};