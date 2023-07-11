#ifndef RANDOM_GENERATOR_H
#define RANDOM_GENERATOR_H

#include <fstream>
#include <random>
#include <iostream>
class RandomGenerator {
public:
  RandomGenerator(int lowerRange, int upperRange);
  void generateNumbers(int numNumbers, const std::string& outputFilename);

private:
  int lowerRange_;
  int upperRange_;
};

#endif // RANDOM_GENERATOR_H
