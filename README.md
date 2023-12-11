A JSON to Parquet file writer. Tested in a Dockerfile (base ubuntu) with the additional setup shell script:

```
apt-get update
apt-get -y install build-essential autoconf libtool pkg-config
apt-get -y install git
apt-get -y install cmake
apt-get -y install ninja-build
apt-get -y install libgflags-dev
apt-get -y install libsnappy-dev
apt-get -y install zlib1g-dev
apt-get -y install libbz2-dev
apt-get -y install liblz4-dev
apt-get -y install libzstd-dev
apt-get -y install libcurl4-openssl-dev libssl-dev uuid-dev zlib1g-dev libpulse-dev

git clone --depth 1 https://github.com/apache/arrow arrow
cd arrow/cpp
mkdir build
cd build
cmake .. -DARROW_PARQUET=ON -DARROW_JSON=ON -DARROW_BUILD_STATIC=OFF -DARROW_BUILD_SHARED=ON -GNinja
ninja -j 8
ninja install
cd ../../..
```