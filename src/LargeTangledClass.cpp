#include "LargeTangledClass.hpp"
#include "CollectionClass.hpp"

void LargeTangledClass::saveToDatabase() {
    for (auto [key, value]:m_data) {
        m_dataBase.store(key, value);
    }
}
