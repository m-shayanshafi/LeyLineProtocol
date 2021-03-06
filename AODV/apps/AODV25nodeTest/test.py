#! /usr/bin/python
from TOSSIM import *
import sys

#inputs to the file...num_node, topologyNo......

def main(num_node, topologyNo):

  end_time = 3000
  numberOfMessages = 0
  num_node = int(num_node)
  topologyNo = int(topologyNo)
  t = Tossim([])
  r = t.radio()
  f = open("testTopologies1/topology_" + str(num_node) + "_" + str(topologyNo) + ".txt", "r")
  g = open("testTopologies1/consoleOutput.txt", "w")
  h = open("testTopologies1/results.txt", "a")
  print "here"
  # num_node = 10    

  lines = f.readlines()

  for line in lines:
    s = line.split()
    if (len(s) > 0):
      print " ", s[0], " ", s[1], " ", s[2];
      r.add(int(s[0]), int(s[1]), 0.0)

  #t.addChannel("Boot", sys.stdout)
  #t.addChannel("APPS", sys.stdout)
  t.addChannel("msgCount", g)
  #t.addChannel("AODV_DBG2", sys.stdout)
  #t.addChannel("TossimPacketModelC", sys.stdout)
  #t.addChannel("CpmModelC", sys.stdout)

  noise = open("noise.txt", "r")
  lines = noise.readlines()
  for line in lines:
    stripped = line.strip()
    if (stripped != ""):
      val = int(stripped)
      for i in range(1, num_node+1):
        t.getNode(i).addNoiseTraceReading(val)

  for i in range(1, num_node+1):
    print "Creating noise model for ",i;
    t.getNode(i).createNoiseModel()
    t.getNode(i).bootAtTime(1000);

  while True:
    t.runNextEvent()
    if t.time() > end_time * 10000000000:
      break

  f.close()
  g.close()

  g = open("testTopologies1/consoleOutput.txt", "r")
  lines = g.readlines();

  numberOfMessages = numberOfMessages + len(lines);
  avgStretch = numberOfMessages/float(num_node - 1);
  lineToWrite = str(avgStretch)
  g.close()


  h.write(str(num_node)+","+lineToWrite + "\n")
  h.close()

if __name__ == "__main__":
    main(sys.argv[1], sys.argv[2])

# noOfTopologies = 10
# num_node = 0
# end_time = 625
# h = open("testTopologies/results.txt", "w")
# numberOfMessages = 0;
# avgStretch = 0
# lineToWrite = "";

# for k in range(1,2):
#   lineToWrite = ""
#   numberOfMessages = 0;
#   num_node = num_node+10;
#   lineToWrite = lineToWrite+str(num_node)
#   for j in range(1,noOfTopologies+1):
   
#     t = Tossim([])
#     r = t.radio()
#     f = open("testTopologies/topology_" + str(num_node) + "_" + str(j) + ".txt", "r")
#     g = open("testTopologies/consoleOutput.txt", "w")

#     # num_node = 10    

#     lines = f.readlines()

#     for line in lines:
#       s = line.split()
#       if (len(s) > 0):
#         print " ", s[0], " ", s[1], " ", s[2];
#         r.add(int(s[0]), int(s[1]), 0.0)

#     t.addChannel("Boot", sys.stdout)
#     t.addChannel("APPS", sys.stdout)
#     t.addChannel("AODV", g)
#     #t.addChannel("AODV_DBG2", sys.stdout)
#     #t.addChannel("TossimPacketModelC", sys.stdout)
#     #t.addChannel("CpmModelC", sys.stdout)

#     noise = open("noise.txt", "r")
#     lines = noise.readlines()
#     for line in lines:
#       stripped = line.strip()
#       if (stripped != ""):
#         val = int(stripped)
#         for i in range(1, num_node+1):
#           t.getNode(i).addNoiseTraceReading(val)

#     for i in range(1, num_node+1):
#       print "Creating noise model for ",i;
#       t.getNode(i).createNoiseModel()
#       t.getNode(i).bootAtTime(1000);

#     while True:
#       t.runNextEvent()
#       if t.time() > end_time * 10000000000:
#         break

#     f.close()
#     g.close()

#     g = open("testTopologies/consoleOutput.txt", "r")
#     lines = g.readlines();

#     numberOfMessages = numberOfMessages + len(lines);
#     avgStretch = numberOfMessages/float(num_node - 1);
#     lineToWrite = "," + str(avgStretch)
#     g.close()

#   h = h.write(lineToWrite + "\n")





















