cd .. && g++ -o a.out lab03test.cpp histogram.h histogram.cpp && ./a.out
if [ -z "$(./a.out)" ]; then
	echo "ВСЕ ХОРОШО"
fi
