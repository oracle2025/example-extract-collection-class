#include "LargeTangledClass.hpp"

void LargeTangledClass::addRecord(record r) {
    m_data[r.name] = r.value;
}

void LargeTangledClass::saveToDatabase() {
    for (auto [key, value]:m_data) {
        m_dataBase.store(key, value);
    }
}
