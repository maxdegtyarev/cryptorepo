#include "bitint.h"

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
