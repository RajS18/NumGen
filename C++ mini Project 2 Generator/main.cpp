#include "random_generator.h"

int main(int argc, char** argv) {
  if (argc < 5) {
    std::cerr << "Usage: " << argv[0] << " <lower_range> <upper_range> <num_numbers> <output_filename>" << std::endl;
    return 1;
  }

  int lowerRange = std::stoi(argv[1]);
  int upperRange = std::stoi(argv[2]);
  int numNumbers = std::stoi(argv[3]);
  std::string outputFilename = argv[4];

  RandomGenerator generator(lowerRange, upperRange);
  generator.generateNumbers(numNumbers, outputFilename);

  return 0;
}
