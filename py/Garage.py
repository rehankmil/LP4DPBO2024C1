from Vehicle import Vehicle

class Garage:
    def __init__(self, nama_garasi, luas_garasi, daftar_kendaraan):
        self.nama_garasi = nama_garasi
        self.luas_garasi = luas_garasi
        self.daftar_kendaraan = daftar_kendaraan

    def __str__(self):
        return f"""
Nama Garasi: {self.nama_garasi}
Luas Garasi: {self.luas_garasi}

Daftar Kendaraan:
{''.join([str(kendaraan) for kendaraan in self.daftar_kendaraan])}
"""