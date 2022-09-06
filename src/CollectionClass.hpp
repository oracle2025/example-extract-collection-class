#pragma once

#include <map>
#include <string>

struct record {
    std::string name;
    std::string value;
};

class CollectionClass {

private:
    std::map<std::string, std::string> m_data;
public:
    void addRecord(record r);
    const std::map<std::string, std::string> allRecords() const;

};
