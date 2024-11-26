#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

using namespace std;

struct Sensor {
  int code;
  string name;
};

struct Subsystem {
  int code;
  string name;
};

struct IndexRecord {
  int sensorIndex;
  int subsystemIndex;
};

class InformationManager {
private:
  vector<Sensor> sensors;
  vector<Subsystem> subsystems;
  vector<IndexRecord> indexRecords;

public:
  void addSensor(int code, const string &name) {
    if (code < 100 || code > 999) {
      throw invalid_argument("Код датчика должен быть трехзначным числом.");
    }
    sensors.push_back({code, name});
  }

  void addSubsystem(int code, const string &name) {
    if (code < 10 || code > 99) {
      throw invalid_argument("Код подсистемы должен быть двузначным числом.");
    }
    subsystems.push_back({code, name});
  }

  void addIndexRecord(int sensorIndex, int subsystemIndex) {
    if (sensorIndex < 0 || sensorIndex >= sensors.size()) {
      throw out_of_range("Некорректный индекс датчика.");
    }
    if (subsystemIndex < 0 || subsystemIndex >= subsystems.size()) {
      throw out_of_range("Некорректный индекс подсистемы.");
    }
    indexRecords.push_back({sensorIndex, subsystemIndex});
  }

  void removeSensor(int sensorCode) {
    auto it = remove_if(indexRecords.begin(), indexRecords.end(),
                        [this, sensorCode](const IndexRecord &record) {
                          return sensors[record.sensorIndex].code == sensorCode;
                        });
    indexRecords.erase(it, indexRecords.end());
    sensors.erase(remove_if(sensors.begin(), sensors.end(),
                            [sensorCode](const Sensor &sensor) {
                              return sensor.code == sensorCode;
                            }),
                  sensors.end());
  }

  void removeSubsystem(int subsystemCode) {
    auto it = remove_if(indexRecords.begin(), indexRecords.end(),
                        [this, subsystemCode](const IndexRecord &record) {
                          return subsystems[record.subsystemIndex].code ==
                                 subsystemCode;
                        });
    indexRecords.erase(it, indexRecords.end());
    subsystems.erase(remove_if(subsystems.begin(), subsystems.end(),
                               [subsystemCode](const Subsystem &subsystem) {
                                 return subsystem.code == subsystemCode;
                               }),
                     subsystems.end());
  }

  void displaySensors() const {
    cout << "Датчики:" << endl;
    for (const auto &sensor : sensors) {
      cout << "Код: " << sensor.code << ", Название: " << sensor.name << endl;
    }
  }

  void displaySubsystems() const {
    cout << "Подсистемы:" << endl;
    for (const auto &subsystem : subsystems) {
      cout << "Код: " << subsystem.code << ", Название: " << subsystem.name
           << endl;
    }
  }

  void displayIndexRecords() const {
    cout << "Индексные записи:" << endl;
    for (const auto &record : indexRecords) {
      cout << "Датчик (индекс): " << record.sensorIndex
           << ", Подсистема (индекс): " << record.subsystemIndex << endl;
    }
  }
};

int main() {
  InformationManager manager;

  // Пример использования
  manager.addSensor(101, "Температура");
  manager.addSensor(102, "Давление");
  manager.addSubsystem(11, "Система охлаждения");
  manager.addSubsystem(12, "Система нагрева");

  manager.addIndexRecord(0, 0);
  manager.addIndexRecord(1, 1);

  manager.displaySensors();
  manager.displaySubsystems();
  manager.displayIndexRecords();

  manager.removeSensor(101);
  manager.removeSubsystem(11);

  cout << "После удаления:" << endl;
  manager.displaySensors();
  manager.displaySubsystems();
  manager.displayIndexRecords();

  return 0;
}
