#!/bin/bash
# Average Stretch results generation script
rm testTopologies/results.txt 

sed -i '28s/.*/uint16_t numberNodes = 10;/' LeyLine25nodeTestM.nc
make micaz sim

for i in `seq 1 10`;
do
    python testOverhead.py 10 $i
done   

sed -i '28s/.*/uint16_t numberNodes = 20;/' LeyLine25nodeTestM.nc

make micaz sim

for j in `seq 1 10`;
do
    python testOverhead.py 20 $j
done   

sed -i '28s/.*/uint16_t numberNodes = 30;/' LeyLine25nodeTestM.nc

make micaz sim

for j in `seq 1 10`;
do
    python testOverhead.py 30 $j
done

sed -i '28s/.*/uint16_t numberNodes = 40;/' LeyLine25nodeTestM.nc

make micaz sim

for j in `seq 1 10`;
do
    python testOverhead.py 40 $j
done

sed -i '28s/.*/uint16_t numberNodes = 50;/' LeyLine25nodeTestM.nc

make micaz sim

for j in `seq 1 10`;
do
    python testOverhead.py 50 $j
done

sed -i '28s/.*/uint16_t numberNodes = 60;/' LeyLine25nodeTestM.nc

make micaz sim

for j in `seq 1 10`;
do
    python testOverhead.py 60 $j
done

sed -i '28s/.*/uint16_t numberNodes = 70;/' LeyLine25nodeTestM.nc

make micaz sim

for j in `seq 1 10`;
do
    python testOverhead.py 70 $j
done

sed -i '28s/.*/uint16_t numberNodes = 80;/' LeyLine25nodeTestM.nc

make micaz sim

for j in `seq 1 10`;
do
    python testOverhead.py 80 $j
done

sed -i '28s/.*/uint16_t numberNodes = 90;/' LeyLine25nodeTestM.nc

make micaz sim

for j in `seq 1 10`;
do
    python testOverhead.py 90 $j
done

sed -i '28s/.*/uint16_t numberNodes = 100;/' LeyLine25nodeTestM.nc

make micaz sim

for j in `seq 1 10`;
do
    python testOverhead.py 100 $j
done