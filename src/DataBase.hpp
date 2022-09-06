#pragma once
#include <string>
class DataBase {
public:
    void store(const std::string& key, const std::string& value) {}
    std::string load(const std::string& key) {return "";}
};
