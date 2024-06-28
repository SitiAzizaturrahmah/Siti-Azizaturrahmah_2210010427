#include "barang.h"

barang::barang() {}

barang::barang(QString IdBarang, QString namabarang, double berat, double harga)
    : IdBarang(IdBarang), namabarang(namabarang), berat(berat), harga(harga) {}

void barang::setIdBarang(QString IdBarang) {
    this->IdBarang = IdBarang;
}

QString barang::getIdBarang() {
    return this->IdBarang;
}

void barang::setNamaBarang(QString namabarang) {
    this->namabarang = namabarang;
}

QString barang::getNamaBarang() {
    return this->namabarang;
}

void barang::setBerat(double berat) {
    this->berat = berat;
}

double barang::getBerat() {
    return this->berat;
}
