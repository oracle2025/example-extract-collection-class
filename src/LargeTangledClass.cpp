#include "LargeTangledClass.hpp"
#include "CollectionClass.hpp"

void LargeTangledClass::saveToDatabase() {
    for (auto [key, value]:m_collection.allRecords()) {
        m_dataBase.store(key, value);
    }
}

LargeTangledClass::LargeTangledClass() :m_collection(*this){

}
