clc;
clear;
close all;

X = 200;
Y = 200;

% Channel Model
noOfTopologies = 10;
threshold = 1.1;

ETA = 3.3;
PATH_LOSS = -58.5;
d0 = 8;
SIGMA = 0;
P_RX_TH = -95;

num_node = 490;
distance = 0;
rss = 0;
maxiMin = 0;
thresholdDistance = 0;


for k = 1:1
    
    num_node = num_node + 10;

    for j = 1:noOfTopologies
        maxiMin = 0;
        f_coordinates = fopen(["testTopologies1/coordinates_" num2str(num_node) "_" num2str(j) ".txt"]  , "wt")
        f_topology = fopen(["testTopologies1/topology_" num2str(num_node) "_" num2str(j) ".txt"]  , "wt")
        
        for i=1:num_node;
            node_coord(i, 1) = round(rand(1)*X);
            node_coord(i, 2) = round(rand(1)*Y);
            fprintf(f_coordinates, '%d\t%d\t%d\t%d\n', i, node_coord(i, 1), node_coord(i, 2));
        end

       for i=1:num_node;
        	min = 10000000;
        	for j=1:num_node;
				if (i ~= j)
                	distance(i,j) = sqrt( (node_coord(j,1)-node_coord(i,1))^2 + (node_coord(j,2)-node_coord(i,2))^2 );
               	end
            end
       end

        for i=1:num_node;
        	min = 10000000;
        	for j=1:num_node;
        		if(i~=j)
					if (distance(i,j) < min)
	                		min = distance(i,j);
	               	end
	            end
            end
            if (min > maxiMin)
            	maxiMin = min
            end
        end

        thresholdDistance = threshold * maxiMin

		for i=1:num_node;
            for j=1:num_node;
                if( i ~= j )                   
                    if ( distance(i, j) <= thresholdDistance )
                        fprintf(f_topology, '%d\t%d\t%.2f\n', i, j, 0.0);
                    end
                end
            end
        end


        % graph
        figure; hold on;

        axis([0 X 0 Y])
        grid on;

        for i=1:num_node
            plot(node_coord(i,1), node_coord(i,2),'bo','markersize', 10);
                text(node_coord(i,1), node_coord(i,2), int2str(i));
        end

        hold off;

        fclose('all');
        close all;
    end
end