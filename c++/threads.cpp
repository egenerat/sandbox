#include <iostream>
#include <thread>
#include <unistd.h>

void doSomething() {
  int i;
  for (i = 0; i < 5; i++) {
    std::cout << "doSomething " << i << "\n";
    usleep(2000);
  } 
}

void doSomethingElse(int counter) {
  int i;
  for (i = 0; i < counter; i++) {
    std::cout << "doSomethingElse\n";
    usleep(3000);
  } 
}

int main() {
  std::thread first (doSomething);          // spawn new thread that calls doSomething()
  std::thread second (doSomethingElse, 3);  // spawn new thread that calls doSomethingElse(3)

  std::cout << "Threads started\n";

  // synchronize threads
  first.join();                             // pauses until first finishes
  second.join();                            // pauses until second finishes

  std::cout << "Threads completed\n";

  return 0;
}
