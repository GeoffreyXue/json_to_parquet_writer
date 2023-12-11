#include <iostream>

#include "parquet_writer.h"

using namespace std;

// Public of parquet writer

// A test implementation of parquet writing in C++
// A series of JSON values are written via the Add() function
// Parse the JSON schema from the values and write them out to a parquet file
int main() {

  ParquetWriter parquet_writer = ParquetWriter("test.parquet");

  // values
  for (int i = 0; i < 10000; ++i) {
    string value = "{\"hello\":" + std::to_string(i) + ",\"world\":\"" + std::string(500, 'a' + (i % 26)) + "\"}";
    // cout << value << std::endl;
    parquet_writer.Add(value);
  }

  parquet_writer.Close();

  std::cout << "Parquet Stream Writing complete." << std::endl;
  return 0;
}

