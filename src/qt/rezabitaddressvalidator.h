// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef REZABIT_QT_REZABITADDRESSVALIDATOR_H
#define REZABIT_QT_REZABITADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class RezabitAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit RezabitAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Rezabit address widget validator, checks for a valid rezabit address.
 */
class RezabitAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit RezabitAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // REZABIT_QT_REZABITADDRESSVALIDATOR_H
