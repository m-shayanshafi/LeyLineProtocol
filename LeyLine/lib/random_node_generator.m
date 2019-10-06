clear all

f_coordinates = fopen('coordinates.txt', 'wt');
f_topology    = fopen('topology.txt', 'wt');

X = 200;
Y = 200;

% Channel Model
ETA = 3.3;
PATH_LOSS = -58.5;
d0 = 8;
SIGMA = 0;
P_RX_TH = -95;

num_node = 10;
distance = 0;
rss = 0;

for i=1:num_node;
    node_coord(i, 1) = round(rand(1)*X);
    node_coord(i, 2) = round(rand(1)*Y);
    fprintf(f_coordinates, '%d\t%d\t%d\t%d\n', i, node_coord(i, 1), node_coord(i, 2));
end

for i=1:num_node;
    for j=1:num_node;
        if( i ~= j )
            distance(i, j) = sqrt( (node_coord(j,1)-node_coord(i,1))^2 + (node_coord(j,2)-node_coord(i,2))^2 );
            rss(i, j) = PATH_LOSS - 10*ETA*log10(distance(i,j)/d0) - SIGMA*randn(1);
            
            if ( rss(i, j) > P_RX_TH )
                fprintf(f_topology, '%d\t%d\t%.2f\n', i, j, rss(i,j));
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