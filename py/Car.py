from Vehicle import Vehicle

class Car(Vehicle):
    def __init__(self, plat_nomor, merk, tahun_produksi, warna, jumlah_kursi, jumlah_pintu):
        super().__init__(plat_nomor, merk, tahun_produksi, warna)
        self.jumlah_kursi = jumlah_kursi
        self.jumlah_pintu = jumlah_pintu

    def __str__(self):
        return f"""
{super().__str__()}
Jumlah Kursi: {self.jumlah_kursi}
Jumlah Pintu: {self.jumlah_pintu}
"""

    def to_table_row(self):
        return f"{super().to_table_row()}       {self.jumlah_kursi:<6} |       {self.jumlah_pintu:<6} |      -      |         -        |"