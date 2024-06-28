#ifndef PELANGGAN_H
#define PELANGGAN_H

#include "barang.h"

class pelanggan : public barang {
public:
    pelanggan(); // constructor 1
    pelanggan(QString idpelanggan, QString namapelanggan, QString alamat, QString telepon,
              QString IdBarang, QString namabarang, double berat, double harga); // constructor 2 (overload Constructor)

    void setIdPelanggan(QString IdPelanggan);
    QString getIdPelanggan();

    void setNamaPelanggan(QString NamaPelanggan);
    QString getNamaPelanggan();

    void setAlamat(QString Alamat);
    QString getAlamat();

    void setTelepon(QString Telepon);
    QString getTelepon();

private:
    QString idpelanggan, namapelanggan, alamat, telepon;
};

#endif // PELANGGAN_H
