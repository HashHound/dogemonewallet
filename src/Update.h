// Copyright (c) 2016-2020 The Karbowanec developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef UPDATE_H
#define UPDATE_H

#include <QObject>
#include <QDebug> // Optional for logging

class Updater : public QObject
{
    Q_OBJECT
public:
    explicit Updater(QObject *parent = 0);

    // Dummy destructor
    ~Updater() {
        // Nothing to clean up as there's no network manager
    }

    // Dummy function for checking updates
    void checkForUpdate();

signals:

};

#endif // UPDATE_H
