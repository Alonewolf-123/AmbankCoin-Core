// Copyright (c) 2017-2019 The AMBANKCOIN developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ZAMBKCONTROLDIALOG_H
#define ZAMBKCONTROLDIALOG_H

#include <QDialog>
#include <QTreeWidgetItem>
#include "zambk/zerocoin.h"

class CZerocoinMint;
class WalletModel;

namespace Ui {
class ZAmbkControlDialog;
}

class CZAmbkControlWidgetItem : public QTreeWidgetItem
{
public:
    explicit CZAmbkControlWidgetItem(QTreeWidget *parent, int type = Type) : QTreeWidgetItem(parent, type) {}
    explicit CZAmbkControlWidgetItem(int type = Type) : QTreeWidgetItem(type) {}
    explicit CZAmbkControlWidgetItem(QTreeWidgetItem *parent, int type = Type) : QTreeWidgetItem(parent, type) {}

    bool operator<(const QTreeWidgetItem &other) const;
};

class ZAmbkControlDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ZAmbkControlDialog(QWidget *parent);
    ~ZAmbkControlDialog();

    void setModel(WalletModel* model);

    static std::set<std::string> setSelectedMints;
    static std::set<CMintMeta> setMints;
    static std::vector<CMintMeta> GetSelectedMints();

private:
    Ui::ZAmbkControlDialog *ui;
    WalletModel* model;

    void updateList();
    void updateLabels();

    enum {
        COLUMN_CHECKBOX,
        COLUMN_DENOMINATION,
        COLUMN_PUBCOIN,
        COLUMN_VERSION,
        COLUMN_PRECOMPUTE,
        COLUMN_CONFIRMATIONS,
        COLUMN_ISSPENDABLE
    };
    friend class CZAmbkControlWidgetItem;

private slots:
    void updateSelection(QTreeWidgetItem* item, int column);
    void ButtonAllClicked();
};

#endif // ZAMBKCONTROLDIALOG_H
