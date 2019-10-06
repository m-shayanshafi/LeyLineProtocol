from TOSSIM import *
import sys

num_node = 10;
end_time = 30000;

t = Tossim([])
r = t.radio()
f = open("topology.txt", "r")
w = open("consoleOutput.txt", "w")  

for line in f:
  s = line.split()
  if s:
    print " ", s[0], " ", s[1], " ", s[2];
    r.add(int(s[0]), int(s[1]), 0.0)

t.addChannel("Leyline", w)
# t.addChannel("Boot", sys.stdout)
t.addChannel("AODV", w)

noise = open("noise.txt", "r")
for line in noise:
  str1 = line.strip()
  if str1:
    val = int(str1)
    for i in range(1, num_node+1):
      t.getNode(i).addNoiseTraceReading(val)

for i in range(1, num_node+1):
  print "Creating noise model for ",i;
  t.getNode(i).createNoiseModel()
  t.getNode(i).bootAtTime(i);



while True:
  t.runNextEvent()
  if t.time() > end_time * 10000000000:
    break
  # print "here..\n";
  # for i in range(1, num_node+1):
  #   if (not t.getNode(i).isOn()):
  #     print "Mote off:" + str(i)
    
  
