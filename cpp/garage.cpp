#pragma once
#include <iostream>
#include <vector>
#include <iomanip>
#include "vehicle.cpp"

using namespace std;

class Garage
{
    public:
        string nama_garasi;
        int luas_garasi;
        vector<Vehicle*> daftar_kendaraan;

        Garage(string nama_garasi, int luas_garasi, vector<Vehicle*> daftar_kendaraan) : 
            nama_garasi(nama_garasi), luas_garasi(luas_garasi), daftar_kendaraan(daftar_kendaraan)
        {
        }

        string toString()
        {
            string result = "Nama Garasi: " + nama_garasi + "\nLuas Garasi: " + to_string(luas_garasi) + "\n\nDaftar Kendaraan:\n";
            for (Vehicle* kendaraan : daftar_kendaraan)
            {
                result += kendaraan->toString();
            }
            return result;
        }
};