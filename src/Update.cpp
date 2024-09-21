// Copyright (c) 2016-2020 The Karbowanec developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "Update.h"
#include "Settings.h"
#include <QDebug>

using namespace WalletGui;

Updater::Updater(QObject *parent) :
    QObject(parent)
{
}

void Updater::checkForUpdate()
{
    // Dummy implementation, no updates will be checked
    qDebug() << "Check for updates is disabled.";
}
