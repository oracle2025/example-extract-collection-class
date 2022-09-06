#pragma once

#include <map>
#include <string>

struct record {
    std::string name;
    std::string value;
};

class CollectionClass {

protected:
    std::map<std::string, std::string> m_data;
public:
    void addRecord(record r);
};
