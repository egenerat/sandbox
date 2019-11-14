# C++

## Install and check version

### Ubuntu
```
sudo apt install build-essential
gcc -v
```

### Manjaro
```
sudo pacman -Syu gcc boost
```

Build and run
```
g++ hello.cpp
./a.out
```

Threads
```
g++ threads.cpp -lpthread
```

Boost missing (Ubuntu)
```
sudo apt install libboost-all-dev
```

Online C++ compiler (with Boost)
http://coliru.stacked-crooked.com/
