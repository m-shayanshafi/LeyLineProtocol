#!/bin/bash
# Average Stretch results generation script
rm testTopologies1/results.txt 

sed -i '28s/.*/uint16_t numberNodes = 500;/' AODV25nodeTestM.nc
make micaz sim

for i in `seq 1 10`;
do
    python test.py 500 $i
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