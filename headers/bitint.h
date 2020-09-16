#ifndef BITINT_H
#define BITINT_H

#include <QString>

const unsigned BASE = 2;

class BitInt
{
private:
    unsigned _value;

public:

    BitInt();

    BitInt(const QString& value);

    BitInt(const unsigned value);

    BitInt xorBit(const unsigned bit, const unsigned val = 1);

    BitInt orBit(const unsigned bit, const unsigned val = 1);

    BitInt andBit(const unsigned bit, const unsigned val = 1);

    BitInt swapBit(const unsigned i, const unsigned j);

    BitInt zeroBits(const unsigned len);

    unsigned getBit(const unsigned bit);

    /*
     * Поскольку пользователь не знает, что у нас биты нумеруются с нуля, то мы будем вычитать единицу
     * */

    BitInt xorBit_h(const unsigned bit, const unsigned val = 1);

    BitInt orBit_h(const unsigned bit, const unsigned val = 1);

    BitInt andBit_h(const unsigned bit, const unsigned val = 1);

    BitInt swapBit_h(const unsigned i, const unsigned j);

    BitInt zeroBits_h(const unsigned len);

    unsigned getBit_h(const unsigned bit);

    unsigned getValue() const;

    void setValue(const unsigned &value);
};

#endif // BITINT_H
