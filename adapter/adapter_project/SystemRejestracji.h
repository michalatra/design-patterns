//
// Created by michalatra on 08.06.22.
//

#ifndef ADAPTER_SYSTEMREJESTRACJI_H
#define ADAPTER_SYSTEMREJESTRACJI_H

#include "DbAdapter.h"

class SystemRejestracji {
    DbAdapter* dbAdapter;

public:
    SystemRejestracji(DbAdapter *dbAdapter);
    void zarejestruj();
    void zaloguj();
};


#endif //ADAPTER_SYSTEMREJESTRACJI_H
