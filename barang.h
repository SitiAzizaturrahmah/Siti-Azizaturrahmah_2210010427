#ifndef BARANG_H
#define BARANG_H

#include <QString>

class barang {
public:
    barang();
    barang(QString IdBarang, QString namabarang, double berat, double harga);

    void setIdBarang(QString IdBarang);
    QString getIdBarang();

    void setNamaBarang(QString namabarang);
    QString getNamaBarang();

    void setBerat(double berat);
    double getBerat();

private:
    QString IdBarang;
    QString namabarang;
    double berat;
    double harga;
};

#endif // BARANG_H
