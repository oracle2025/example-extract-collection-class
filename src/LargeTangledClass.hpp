#pragma once

#include <map>
#include <string>
#include "DataBase.hpp"
#include "CollectionClass.hpp"

struct record {
    std::string name;
    std::string value;
};

class LargeTangledClass : public CollectionClass {
public:
    void addRecord(record r);

    void saveToDatabase();

private:
    std::map<std::string, std::string> m_data;
    DataBase m_dataBase;
};

