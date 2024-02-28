class Vehicle:
    def __init__(self, plat_nomor, merk, tahun_produksi, warna):
        self.plat_nomor = plat_nomor
        self.merk = merk
        self.tahun_produksi = tahun_produksi
        self.warna = warna

    def __str__(self):
        return f"""
Plat Nomor: {self.plat_nomor}
Merk: {self.merk}
Tahun Produksi: {self.tahun_produksi}
Warna: {self.warna}
"""

    def to_table_row(self):
        return f"| {self.plat_nomor:<10} | {self.merk:<14} | {self.tahun_produksi:<5} | {self.warna:<5} |"

