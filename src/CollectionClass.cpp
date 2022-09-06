#include "CollectionClass.hpp"

void CollectionClass::addRecord(record r) {
    m_data[r.name] = r.value;
}

const std::map<std::string, std::string> CollectionClass::allRecords() const {
    return m_data;
}
