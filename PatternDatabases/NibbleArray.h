//
// Created by ratan on 24-08-2025.
//

#ifndef RUBIKS_CUBE_SOLVER_NIBBLEARRAY_H
#define RUBIKS_CUBE_SOLVER_NIBBLEARRAY_H

#include <cassert>
#include <cstddef>
#include <cstdint>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <array>
#include <queue>
#include <stack>
#include <deque>
#include <list>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <functional>
#include <memory>
#include <random>
#include <chrono>
#include <stdexcept>
#include <cmath>
#include <bitset>


using namespace std;

class NibbleArray {
    size_t size;
    vector<uint8_t> arr;

public:
    NibbleArray(const size_t size, const uint8_t val = 0xFF);

    uint8_t get(const size_t pos) const;

    void set(const size_t pos, const uint8_t val);

    unsigned char *data();

    const unsigned char *data() const;

    size_t storageSize() const;

    void inflate(vector<uint8_t> &dest) const;

    void reset(const uint8_t val = 0xFF);

};


#endif //RUBIKS_CUBE_SOLVER_NIBBLEARRAY_H
