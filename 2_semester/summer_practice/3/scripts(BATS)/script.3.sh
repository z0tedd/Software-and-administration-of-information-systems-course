cd ..
g++ -o lab01.exe lab01.cpp
./lab01.exe <input/03-scaling.input.txt >output/03-scaling.actual.txt 2>/dev/null
cmp test/03-scaling.expected.txt output/03-scaling.actual.txt
diff test/03-scaling.expected.txt output/03-scaling.actual.txt
if [ -z "$(diff test/03-scaling.expected.txt output/03-scaling.actual.txt)" ]; then
	echo "Файлы не отличаются"

fi
