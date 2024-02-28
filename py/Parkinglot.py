class ParkingLot:
    def __init__(self, kapasitas, jumlah_kendaraan_saat_ini):
        self.kapasitas = kapasitas
        self.jumlah_kendaraan_saat_ini = jumlah_kendaraan_saat_ini

    def __str__(self):
        return f"""
Kapasitas: {self.kapasitas}
Jumlah Kendaraan Saat Ini: {self.jumlah_kendaraan_saat_ini}
"""