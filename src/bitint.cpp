#include <headers/bitint.h>

unsigned BitInt::getValue() const
{
    return _value;
}

void BitInt::setValue(const unsigned &value)
{
    _value = value;
}

BitInt::BitInt()
{
    _value = 0;
}

BitInt::BitInt(const QString &value)
{
    _value = value.toUInt(nullptr, BASE);
}

BitInt::BitInt(const unsigned value) {
    _value = value;
}

BitInt BitInt::xorBit(const unsigned bit, const unsigned val) {
    return BitInt( _value ^ ( val << bit ) );
}

BitInt BitInt::orBit(const unsigned bit, const unsigned val) {
    return BitInt( _value | ( val << bit ) );
}

BitInt BitInt::andBit(const unsigned bit, const unsigned val) {
    return BitInt(_value & ( val << bit ) );
}

BitInt BitInt::swapBit(const unsigned i, const unsigned j) {
    unsigned A_i = getBit( i );
    unsigned A_j = getBit( j );

    unsigned x = A_i ^ A_j;

    x = ( x << i ) | ( x << j );

    return BitInt( _value ^ x );
}

BitInt BitInt::zeroBits(const unsigned len) {
    return BitInt( _value & ( ~1u << len ) );
}

unsigned BitInt::getBit(const unsigned bit) {
    return ( ( _value >> bit ) & 1);
}

BitInt BitInt::xorBit_h(const unsigned bit, const unsigned val) {
    return xorBit( bit - 1, val );
}

BitInt BitInt::orBit_h(const unsigned bit, const unsigned val) {
    return orBit( bit - 1, val );
}

BitInt BitInt::andBit_h(const unsigned bit, const unsigned val) {
    return andBit( bit - 1, val );
}

BitInt BitInt::swapBit_h(const unsigned i, const unsigned j) {
    return swapBit( i-1, j-1 );
}

BitInt BitInt::zeroBits_h(const unsigned len) {
    return zeroBits( len - 1 );
}

unsigned BitInt::getBit_h(const unsigned bit) {
    return getBit( bit - 1 );
}
