#include "pelanggan.h"

pelanggan::pelanggan() {}

pelanggan::pelanggan(QString idpelanggan, QString namapelanggan, QString alamat, QString telepon,
                     QString IdBarang, QString namabarang, double berat, double harga)
    : barang(IdBarang, namabarang, berat, harga), idpelanggan(idpelanggan), namapelanggan(namapelanggan), alamat(alamat), telepon(telepon) {}

void pelanggan::setIdPelanggan(QString IdPelanggan) {
    this->idpelanggan = IdPelanggan;
}

QString pelanggan::getIdPelanggan() {
    return this->idpelanggan;
}

void pelanggan::setNamaPelanggan(QString NamaPelanggan) {
    this->namapelanggan = NamaPelanggan;
}

QString pelanggan::getNamaPelanggan() {
    return this->namapelanggan;
}

void pelanggan::setAlamat(QString Alamat) {
    this->alamat = Alamat;
}

QString pelanggan::getAlamat() {
    return this->alamat;
}

void pelanggan::setTelepon(QString Telepon) {
    this->telepon = Telepon;
}

QString pelanggan::getTelepon() {
    return this->telepon;
}
