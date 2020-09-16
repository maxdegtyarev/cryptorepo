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

    BitInt xorBit(const unsigned bit, const unsigned val = 1) {
        return BitInt( _value ^ ( val << bit ) );
    }

    BitInt orBit(const unsigned bit, const unsigned val = 1) {
        return BitInt( _value | ( val << bit ) );
    }

    BitInt andBit(const unsigned bit, const unsigned val = 1) {
        return BitInt(_value & ( val << bit ) );
    }

    BitInt swapBit(const unsigned i, const unsigned j) {
        unsigned A_i = getBit( i );
        unsigned A_j = getBit( j );

        unsigned x = A_i ^ A_j;

        x = ( x << i ) | ( x << j );

        return BitInt( _value ^ x );
    }

    BitInt zeroBits(const unsigned len) {
        return BitInt( _value & ( ~1u << len ) );
    }

    unsigned getBit(const unsigned bit) {
        return ( ( _value >> bit ) & 1);
    }

    /*
     * Поскольку пользователь не знает, что у нас биты нумеруются с нуля, то мы будем вычитать единицу
     * */

    BitInt xorBit_h(const unsigned bit, const unsigned val = 1) {
        return xorBit( bit - 1, val );
    }

    BitInt orBit_h(const unsigned bit, const unsigned val = 1) {
        return orBit( bit - 1, val );
    }

    BitInt andBit_h(const unsigned bit, const unsigned val = 1) {
        return andBit( bit - 1, val );
    }

    BitInt swapBit_h(const unsigned i, const unsigned j) {
        return swapBit( i-1, j-1 );
    }

    BitInt zeroBits_h(const unsigned len) {
        return zeroBits( len - 1 );
    }

    unsigned getBit_h(const unsigned bit) {
        return getBit( bit - 1 );
    }

    unsigned getValue() const;

    void setValue(const unsigned &value);
};

#endif // BITINT_H
