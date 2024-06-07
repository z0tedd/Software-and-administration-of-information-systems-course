
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
using namespace std;
std::string read_string_from_file(const std::string &file_path) {
  const std::ifstream input_stream(file_path, std::ios_base::binary);

  if (input_stream.fail()) {
    throw std::runtime_error("Failed to open file");
  }

  std::stringstream buffer;
  buffer << input_stream.rdbuf();

  return buffer.str();
}

int main() {
  int k;
  cout << "Please, write shift for Caesar\n";
  cin >> k;
  string inpName;
  string OutputName;
  cin >> inpName >> OutputName;
  fstream s{"alphabet.txt", s.binary | s.in};
  if (!s.is_open()) {
    cout << "Failed to open\n";
    return 0;
  }
  string buf;

  s >> buf;
  s.close();

  cout << buf << "idi" << buf.size() << '\n';
  if (!(abs(k) <= buf.size())) {
    cout << /*(absk <= buf.size()) << buf.size() << ' ' <<*/ "Wrong shift "
                                                             "variable\n!";
    return 0;
  }
  unordered_map<char, char> CaesarSecret;
  for (int i = 0; i < buf.size(); i++) {
    CaesarSecret[buf[i]] = buf[(i + 1 + k) % buf.size()];
  }
  string text = read_string_from_file(inpName);
  for (char &c : text) {
    if (!CaesarSecret[c]) {
      continue;
    }
    c = CaesarSecret[c];
  }
  s.open(OutputName, s.binary | s.trunc | s.out);
  if (s.fail()) {
    cout << "Failed to open\n";
    return 0;
  }
  s << text << '\n';
  s.close();

  return 1;
}
