#include <headers/arguments.h>
#include <QDebug>

unsigned Arguments::i() const
{
    return _i;
}

unsigned Arguments::j() const
{
    return _j;
}

unsigned Arguments::m() const
{
    return _m;
}

unsigned Arguments::k() const
{
    return _k;
}

BitInt Arguments::value() const
{
    return _value;
}

Arguments::Arguments()
{

}

Arguments::Arguments(const QString &params) {
    parse(params);
}

void Arguments::parse(const QString &params) {
    QStringList splittedParams = params.split(SEPARATOR);

    for (auto& it : splittedParams) {

        QStringList splittedCommand = it.split(EQ_SYMBOL);

        QString variable = splittedCommand.first();
        QString value = splittedCommand.back();

        qDebug() << variable << value;

        if (variable == "value") {
            this->_value = BitInt(value);
        } else if (variable == "k") {
            this->_k = value.toUInt();
        } else if (variable == "i") {
            this->_i = value.toUInt();
        } else if (variable == "j") {
            this->_j = value.toUInt();
        } else if (variable == "m") {
            this->_m = value.toUInt();
        }
    }

}
