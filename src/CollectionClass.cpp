#include "CollectionClass.hpp"

void CollectionClass::addRecord(record r) {
    m_data[r.name] = r.value;
}