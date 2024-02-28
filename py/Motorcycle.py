from Vehicle import Vehicle

class Motorcycle(Vehicle):
    def __init__(self, plat_nomor, merk, tahun_produksi, warna, jenis_motor, kapasitas_tangki):
        super().__init__(plat_nomor, merk, tahun_produksi, warna)
        self.jenis_motor = jenis_motor
        self.kapasitas_tangki = kapasitas_tangki

    def __str__(self):
        return f"""
{super().__str__()}
Jenis Motor: {self.jenis_motor}
Kapasitas Tangki: {self.kapasitas_tangki}
"""

    def to_table_row(self):
        return f"{super().to_table_row()}       -      |       -      |    {self.jenis_motor:<8} |        {self.kapasitas_tangki:<9} |"