# leveldb
## 开发环境
- MacOS: 14.1.2 (23B92)
- Chip: Apple M1 Pro
- CPU: 8 core
- Memory: 16 GB
## leveldb
```c
$ ./db_bench     
LevelDB:    version 1.23
Keys:       16 bytes each
Values:     100 bytes each (50 bytes after compression)
Entries:    1000000
RawSize:    110.6 MB (estimated)
FileSize:   62.9 MB (estimated)
WARNING: Snappy compression is not enabled
------------------------------------------------
fillseq      :       2.382 micros/op;   46.4 MB/s     
fillsync     :    4101.127 micros/op;    0.0 MB/s (1000 ops)
fillrandom   :       3.900 micros/op;   28.4 MB/s     
overwrite    :       4.675 micros/op;   23.7 MB/s    
readrandom   :       2.000 micros/op; (864322 of 1000000 found)
readrandom   :       1.644 micros/op; (864083 of 1000000 found)
readseq      :       0.061 micros/op; 1821.3 MB/s    
readreverse  :       0.148 micros/op;  746.4 MB/s    
compact      :  573648.000 micros/op;
readrandom   :       1.232 micros/op; (864105 of 1000000 found)
readseq      :       0.054 micros/op; 2060.0 MB/s    
readreverse  :       0.138 micros/op;  800.3 MB/s    
fill100K     :     814.772 micros/op;  117.1 MB/s (1000 ops)
crc32c       :       1.133 micros/op; 3447.8 MB/s (4K per op)
snappycomp   :    2007.000 micros/op; (snappy failure)
snappyuncomp :    1958.000 micros/op; (snappy failure)
```
# sqlite3
```c
$ ./db_bench_sqlite3 
SQLite:     version 3.39.5
Keys:       16 bytes each
Values:     100 bytes each
Entries:    1000000
RawSize:    110.6 MB (estimated)
------------------------------------------------
fillseq      :       7.474 micros/op;   14.8 MB/s     
fillseqsync  :      79.040 micros/op;    1.4 MB/s (10000 ops)
fillseqbatch :       1.193 micros/op;   92.7 MB/s     
fillrandom   :      14.070 micros/op;    7.9 MB/s     
fillrandsync :      83.629 micros/op;    1.3 MB/s (10000 ops)
fillrandbatch :       8.214 micros/op;   13.5 MB/s    
overwrite    :      13.156 micros/op;    8.4 MB/s     
overwritebatch :       9.798 micros/op;   11.3 MB/s   
readrandom   :       5.641 micros/op;                 
readseq      :       0.106 micros/op;  902.1 MB/s    
fillrand100K :     395.864 micros/op;  240.9 MB/s (1000 ops)
fillseq100K  :     357.188 micros/op;  267.0 MB/s (1000 ops)
readseq      :      24.930 micros/op; 3825.4 MB/s  
readrand100K :     161.559 micros/op; 
```