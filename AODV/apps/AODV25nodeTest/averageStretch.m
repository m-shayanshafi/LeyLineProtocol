clc;
clear;
close all;
numberOfEntries = 100;
skipBy = 10;
load "testTopologies/results.txt";
x = [transpose(unique(results(:,1)))];
y1 = [];
numberNodes = 0;
entries = [];
for i = 1:rows(results)
  if (numberNodes != results(i,1))
    numberNodes = results(i,1)    
    if length(entries) != 0
      y1 = [y1, mean(entries)]
      entries = []
    endif    
  else
    entries = [entries, results(i,2)]
  endif
end
y1 = [y1, mean(entries)]
plot(x,y1,'o-r');
ylabel("Average stretch (# of hops)")
xlabel("Numberof nodes")

hold on;
numberOfEntries = 100;
skipBy = 10;
load "results1.txt";
x = [transpose(unique(results1(:,1)))];
y1 = [];
numberNodes = 0;
entries = [];
for i = 1:rows(results1)
  if (numberNodes != results1(i,1))
    numberNodes = results1(i,1)    
    if length(entries) != 0
      y1 = [y1, mean(entries)]
      entries = []
    endif    
  else
    entries = [entries, results1(i,2)]
  endif
end
y1 = [y1, mean(entries)]
plot(x,y1,'o-b');
ylabel("Average stretch (# of hops)")
xlabel("Numberof nodes")
legend("AODV","LeyLine")