#include "random_generator.h"

RandomGenerator::RandomGenerator(int lowerRange, int upperRange) : lowerRange_(lowerRange), upperRange_(upperRange) {}

void RandomGenerator::generateNumbers(int numNumbers, const std::string& outputFilename) {
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<int> distribution(lowerRange_, upperRange_);

  std::ofstream outputFile(outputFilename);
  if (!outputFile.is_open()) {
    std::cerr << "Error opening output file: " << outputFilename << std::endl;
    return;
  }

  for (int i = 0; i < numNumbers; ++i) {
    int randomNumber = distribution(gen);
    outputFile << randomNumber << std::endl;
  }

  outputFile.close();

  std::cout << "Random numbers generated and saved to " << outputFilename << std::endl;
}
