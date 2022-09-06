#pragma once

#include <map>
#include <string>
#include "DataBase.hpp"
#include "CollectionClass.hpp"

class LargeTangledClass : public CollectionClass {
public:

    void saveToDatabase();

private:
    DataBase m_dataBase;
};

