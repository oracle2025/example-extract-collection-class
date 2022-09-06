#include "LargeTangledClass.hpp"
#include "CollectionClass.hpp"

void LargeTangledClass::saveToDatabase() {
    for (auto [key, value]:allRecords()) {
        m_dataBase.store(key, value);
    }
}
