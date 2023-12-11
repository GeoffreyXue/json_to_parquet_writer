
#pragma once

#include "arrow/io/file.h"

#include "parquet/arrow/writer.h"

using namespace std;

class ParquetWriter {
public:
  ParquetWriter(const string& path);

  void Add(const string &value);

  void Close();

private:
  // Private of parquet writer
  void Init(const string &value);

  void Write(const string &value);

  std::shared_ptr<arrow::io::FileOutputStream> outfile_;
  std::shared_ptr<arrow::Schema> schema_;
  std::shared_ptr<parquet::arrow::FileWriter> parquet_writer_;
};
