#include <iostream>

using namespace std;

class User {
   public:
      User(string name, int age)
         : m_name(name), m_age(age)
      {}
      string Hello() {
         return m_name + " " + to_string(m_age);
      }
   private:
      string m_name;
      int m_age;
};

int main() {
   User bob = User("Bob", 25);
   User alice = User("Alice", 28);

   cout << "Hello " << bob.Hello() << endl;

   return 0;
}
