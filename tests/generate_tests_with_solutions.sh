#!/bin/bash

perl map_gen 1 1 1 > correct_test_file1;
cat correct_test_file1 | python3.7 main.py > solution1;


perl map_gen 1 100 2 > correct_test_file2;
cat correct_test_file2 | python3.7 main.py > solution2;

perl map_gen 100 1 2 > correct_test_file3;
cat correct_test_file3 | python3.7 main.py > solution3;

perl map_gen 100 1 1 > correct_test_file4;
cat correct_test_file4 | python3.7 main.py > solution4;

perl map_gen 5 5 1 > correct_test_file5;
cat correct_test_file5 | python3.7 main.py > solution5;

perl map_gen 5 5 2 > correct_test_file6;
cat correct_test_file6 | python3.7 main.py > solution6;

perl map_gen 5 5 3 > correct_test_file7;
cat correct_test_file7 | python3.7 main.py > solution7;

perl map_gen 10 30 1 > correct_test_file8;
cat correct_test_file8 | python3.7 main.py > solution8;

perl map_gen 10 30 5 > correct_test_file9;
cat correct_test_file9 | python3.7 main.py > solution9;

perl map_gen 10 30 15 > correct_test_file10;
cat correct_test_file10 | python3.7 main.py > solution10;

perl map_gen 50 50 1 > tcorrect_est_file11;
cat correct_test_file11 | python3.7 main.py > solution11;

perl map_gen 50 50 5 > correct_test_file12;
cat correct_test_file12 | python3.7 main.py > solution12;

perl map_gen 50 50 10 > correct_test_file13;
cat correct_test_file13 | python3.7 main.py > solution13;

perl map_gen 50 50 20 > correct_test_file14;
cat correct_test_file14 | python3.7 main.py > solution14;

perl map_gen 100 100 2 > correct_test_file15;
cat correct_test_file15 | python3.7 main.py > solution15;

perl map_gen 100 100 10 > correct_test_file16;
cat correct_test_file16 | python3.7 main.py > solution16;

perl map_gen 100 100 15 > correct_test_file17;
cat correct_test_file17 | python3.7 main.py > solution17;

#cat test_file | time ./bsq > c_slution;
#echo "difference:"
#diff c_slution py_solution;
