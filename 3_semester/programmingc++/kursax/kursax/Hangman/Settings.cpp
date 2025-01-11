#include <string>
class BaseSet{

};

class Settings{
private:
    std::string jsonPath;
    std::string difficulty;
public:
    //std::string difficultys;
    Settings(): jsonPath("Use standart set"), difficulty("0"){}
    void SetAll(std::string path, std::string d){
        jsonPath = path;
        difficulty = d;
    }
    void SetDifficulty(std::string d){
        difficulty = d;
    }
    void SetPath(std::string path){
        jsonPath = path;
    }
    std::string GetDifficulty(){
        return difficulty;
    }
    std::string GetPath(){
        return jsonPath;
    }
};
