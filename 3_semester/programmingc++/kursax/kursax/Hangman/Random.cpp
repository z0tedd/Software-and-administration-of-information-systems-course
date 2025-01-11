#include <fstream>
#include <iostream>
#include <string>
#include "nlohmann/json.hpp" // Include the nlohmann::json library
#include <cstdlib> // for rand and srand
#include <ctime>   // for time
#include "mainwindow.h"
#include <stdexcept>

class MyCustomError : public std::runtime_error {
public:
    MyCustomError(const std::string& what_arg) : std::runtime_error(what_arg) {}
};
using json = nlohmann::json;

std::pair<std::string, std::string> MainWindow::GetRandomWord() {
    std::string fileName = settings->GetPath();
    qDebug() << fileName;
    if (fileName == "Use standart set"){

    int randIndex = std::rand() % DefaultWords.size();
        return DefaultWords[randIndex];
    }
    // Dictionary contain all words sorted by category and difficulty
    std::ifstream file(fileName);

    if (!file) {

        std::cerr << "Error opening file: " << fileName << std::endl;
        throw MyCustomError("Failed to open file");
        return {"",""};
    }
    json data; // This will hold the parsed JSON data
    try {
        file >> data; // Parse the JSON content from the file into 'data'
    } catch (json::parse_error &e) {
        throw MyCustomError("Failed to parse json");
        std::cerr << "JSON parse error: " << e.what() << std::endl;
        return {"",""};
    }
    // if (dictionary.empty()) {
    //     return "";
    // }

    // auto words = dictionary.GetVariety(category, difficulty);
    // if (words.empty()) {
    //     return "";
    // }
    auto difficulty = settings->GetDifficulty();
    auto words = data[difficulty];
    // Seed the random number generator with the current time
    std::srand(std::time(nullptr));
    int randIndex = std::rand() % words.size();
    return {words[randIndex]["word"],words[randIndex]["hint"]};
    return {"",""};
}

