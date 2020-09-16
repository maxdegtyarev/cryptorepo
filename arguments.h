#ifndef ARGUMENTS_H
#define ARGUMENTS_H

#include <QString>
#include <QList>
#include <bitint.h>


const QString SEPARATOR = " ";
const QString EQ_SYMBOL = "=";

const int CMD_LEN = 2;

class Arguments
{
private:
    BitInt _value;
    unsigned _k, _i, _j, _m = 0;

public:
    Arguments();

    Arguments(const QString& params);

    void parse(const QString& params);

    unsigned i() const;
    unsigned j() const;
    unsigned m() const;
    unsigned k() const;
    BitInt value() const;
};

#endif // ARGUMENTS_H
