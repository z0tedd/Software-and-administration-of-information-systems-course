cd ..
g++ -o lab01.exe lab01.cpp
./lab01.exe <input/01-example.input.txt >output/01-example.actual.txt 2>/dev/null
cmp test/01-example.expected.txt output/01-example.actual.txt
diff test/01-example.expected.txt output/01-example.actual.txt
if [ -z "$(diff test/01-example.expected.txt output/01-example.actual.txt)" ]; then
	echo "Файлы не отличаются"

fi
