cd ..
g++ -o lab01.2.exe lab01.2.cpp
./lab01.2.exe <input/02-alignment.input.txt >output/02-alignment.actual.txt 2>/dev/null
cmp test/02-alignment.expected.txt output/02-alignment.actual.txt
diff test/02-alignment.expected.txt output/02-alignment.actual.txt
if [ -z "$(diff test/02-alignment.expected.txt output/02-alignment.actual.txt)" ]; then
	echo "Файлы не отличаются"
fi
