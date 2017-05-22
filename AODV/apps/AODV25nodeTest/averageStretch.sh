#!/bin/bash
# Average Stretch results generation script

rm testTopologies1/results.txt

file="nodes.txt"
counter=0
let numnode=10

while IFS= read -r line || [[ -n "$line" ]];
do
        # display $line or do somthing with $line
    if [ $counter -ge 10 ]; then
    	let counter=0
    	numnode=$((numnode+10))
    fi
    counter=$((counter+1))
    sed -i '28s/.*/uint16_t numberNodes ='$numnode';/' AODV25nodeTestM.nc
    sed -i '26s/.*/uint16_t src ='$line';/' AODV25nodeTestM.nc
    make micaz sim
    python test.py $numnode $counter

    # echo $counter 
    # echo $numnode
    # echo $line


done <"$file"

 
# sed -i '28s/.*/uint16_t numberNodes = 10;/' AODV25nodeTestM.nc
# make micaz sim

# for i in `seq 1 10`;
# do
#     python testOverhead.py 10 $i
# done   

# sed -i '28s/.*/uint16_t numberNodes = 20;/' AODV25nodeTestM.nc

# make micaz sim

# for j in `seq 1 10`;
# do
#     python testOverhead.py 20 $j
# done   

# sed -i '28s/.*/uint16_t numberNodes = 30;/' AODV25nodeTestM.nc

# make micaz sim

# for j in `seq 1 10`;
# do
#     python testOverhead.py 30 $j
# done

# sed -i '28s/.*/uint16_t numberNodes = 40;/' AODV25nodeTestM.nc

# make micaz sim

# for j in `seq 1 10`;
# do
#     python testOverhead.py 40 $j
# done

# sed -i '28s/.*/uint16_t numberNodes = 50;/' AODV25nodeTestM.nc

# make micaz sim

# for j in `seq 1 10`;
# do
#     python testOverhead.py 50 $j
# done

# sed -i '28s/.*/uint16_t numberNodes = 60;/' AODV25nodeTestM.nc

# make micaz sim

# for j in `seq 1 10`;
# do
#     python testOverhead.py 60 $j
# done

# sed -i '28s/.*/uint16_t numberNodes = 70;/' AODV25nodeTestM.nc

# make micaz sim

# for j in `seq 1 10`;
# do
#     python testOverhead.py 70 $j
# done

# sed -i '28s/.*/uint16_t numberNodes = 80;/' AODV25nodeTestM.nc

# make micaz sim

# for j in `seq 1 10`;
# do
#     python testOverhead.py 80 $j
# done

# sed -i '28s/.*/uint16_t numberNodes = 90;/' AODV25nodeTestM.nc

# make micaz sim

# for j in `seq 1 10`;
# do
#     python testOverhead.py 90 $j
# done

# sed -i '28s/.*/uint16_t numberNodes = 100;/' AODV25nodeTestM.nc

# make micaz sim

# for j in `seq 1 10`;
# do
#     python testOverhead.py 100 $j
# done