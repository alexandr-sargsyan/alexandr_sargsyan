#include <iostream>
#include <string>
using namespace std;

class Singlton {
 private:
  Singlton(){};
  static Singlton *instance;
  string test_data;

 public:
  static Singlton *getInstance() {
    if (instance == nullptr) {
      instance = new Singlton();
      return instance;
    }

    return instance;
  }

  void set_data(string a) { instance->test_data = a; }

  string get_data() { return test_data; }
};

Singlton *Singlton ::instance = nullptr;

int main() {
  Singlton *a = Singlton::getInstance();
  a->set_data("verkac lao");
  cout << a->get_data() << endl;

  return 0;
}