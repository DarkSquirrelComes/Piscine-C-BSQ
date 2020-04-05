#!/bin/bash
while [[ 1 ]]; do
	perl map_gen 10 $((1 + RANDOM % 100)) $((1 + RANDOM % 100)) > map
	cat map | python3.7 main.py > py_solution
	cat map | ./bsq > c_solution
#	cat map
#	echo ""
#	cat py_solution
#	echo ""
#	cat c_solution
	#echo "difference:"
	if [ ! -n $(diff py_solution c_solution) ]; then
    	echo "fuuuuuuuu"
    	cat py_solution
    	echo ""
    	cat c_solution
    	echo ""
    else
    	echo "O'k"
    fi
	#rm py_solution c_solution map
	#sleep 0.1
done
