
#include <assert.h>
#include <string.h>
#include <iostream>
#include "leveldb/db.h"

int main()
{
    leveldb::DB *db;
    leveldb::Options options;
    // 当数据库不存在时，是否创建一个新的数据库
    options.create_if_missing = true;
    leveldb::Status status = leveldb::DB::Open(options, "/tmp/testdb", &db);
    assert(status.ok());
    // Slice是封装后的string
    // Slice转换为string: s.ToString()
    // string转换为Slice: leveldb::Slice key1(mystring)
    leveldb::Slice key1("key1"), value1("value1");
    std::string value2;
    status = db->Put(leveldb::WriteOptions(), key1, value1);
    assert(status.ok());

    status = db->Get(leveldb::ReadOptions(), key1, &value2);
    assert(status.ok());
    std::cout << "key1: " << key1.ToString() << "; value2:" << value2 << std::endl;
    delete db;
    return 0;
}
