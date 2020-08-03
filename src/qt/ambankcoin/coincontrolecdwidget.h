// Copyright (c) 2019 The AMBANKCOIN developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef COINCONTROLAMBKWIDGET_H
#define COINCONTROLAMBKWIDGET_H

#include <QDialog>

namespace Ui {
class CoinControlAmbkWidget;
}

class CoinControlAmbkWidget : public QDialog
{
    Q_OBJECT

public:
    explicit CoinControlAmbkWidget(QWidget *parent = nullptr);
    ~CoinControlAmbkWidget();

private:
    Ui::CoinControlAmbkWidget *ui;
};

#endif // COINCONTROLAMBKWIDGET_H
