set terminal png
set output "graphGCC.png"
set style data histograms
set style fill solid border -1
set style histogram cluster gap 1
set yrange [0:*]
set ylabel "Valeur"
set xlabel "Donnée"
set xtics rotate by -90
plot "data.txt" using 2:xtic(1) title "Bytes", "" using 3 title "ns", "" using 4 title "ns", "" using 5 title "ns", "" using 6 title "MiB/s", "" using 7 title "%"
