cd ..
g++ -o lab01.3.exe lab01.3.cpp
./lab01.3.exe <input/1t.txt >output/1t.txt 2>/dev/null
cmp test/1t.txt output/1t.txt
diff test/1t.txt output/1t.txt
if [ -z "$(diff test/1t.txt output/1t.txt)" ]; then
	echo "Файлы не отличаются"

fi
