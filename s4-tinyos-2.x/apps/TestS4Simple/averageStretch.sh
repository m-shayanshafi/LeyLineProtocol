#!/bin/bash
# Average Stretch results generation script
rm testTopologies/results.txt 


# make micaz sim

for i in `seq 6 6`;
do
    for j in `seq 2 10`;	
    do
		sed -i '140s/.*/dest_id = '$j';/' TestS4SimpleM.nc    	
    	make micaz sim
    	python test.py 10 $i
    done  

done   

# sed -i '28s/.*/uint16_t numberNodes = 20;/' LeyLine25nodeTestM.nc

# make micaz sim

# for j in `seq 1 10`;
# do
#     python test.py 20 $j
# done   

# sed -i '28s/.*/uint16_t numberNodes = 30;/' LeyLine25nodeTestM.nc

# make micaz sim

# for j in `seq 1 10`;
# do
#     python test.py 30 $j
# done

# sed -i '28s/.*/uint16_t numberNodes = 40;/' LeyLine25nodeTestM.nc

# make micaz sim

# for j in `seq 1 10`;
# do
#     python test.py 40 $j
# done

# sed -i '28s/.*/uint16_t numberNodes = 50;/' LeyLine25nodeTestM.nc

# make micaz sim

# for j in `seq 1 10`;
# do
#     python test.py 50 $j
# done

# sed -i '28s/.*/uint16_t numberNodes = 60;/' LeyLine25nodeTestM.nc

# make micaz sim

# for j in `seq 1 10`;
# do
#     python test.py 60 $j
# done

# sed -i '28s/.*/uint16_t numberNodes = 70;/' LeyLine25nodeTestM.nc

# make micaz sim

# for j in `seq 1 10`;
# do
#     python test.py 70 $j
# done

# sed -i '28s/.*/uint16_t numberNodes = 80;/' LeyLine25nodeTestM.nc

# make micaz sim

# for j in `seq 1 10`;
# do
#     python test.py 80 $j
# done

# sed -i '28s/.*/uint16_t numberNodes = 90;/' LeyLine25nodeTestM.nc

# make micaz sim

# for j in `seq 1 10`;
# do
#     python test.py 90 $j
# done

# sed -i '28s/.*/uint16_t numberNodes = 100;/' LeyLine25nodeTestM.nc

# make micaz sim

# for j in `seq 1 10`;
# do
#     python test.py 100 $j
# done