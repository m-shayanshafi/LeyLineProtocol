clc;
clear;
close all;
numberOfEntries = 5;
load numberMessages.txt;
x = [0, transpose(unique(numberMessages(:,1)))];
y1 = [0];
y2 = [0];
for i = 1:rows(numberMessages)
  if (i <= numberOfEntries)
    y1 = [y1, numberMessages(i,2)];
  else
    y2 = [y2, numberMessages(i,2)];
  endif
end
plot(x,y1,'o-r',x,y2,'o-b');
ylabel("Overhead (# of packets)")
xlabel("Numberof nodes")
legend("LeyLine", "AODV")
