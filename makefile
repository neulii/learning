learning: main.o functions.o
	g++ main.o functions.o -o learning

main.o: main.cpp 
	g++ main.cpp -c

functions.o: functions.cpp
	g++ functions.cpp -c

clean:
	rm *.o
	rm learning

run:

	./learning
