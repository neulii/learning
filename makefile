learning: bin/main.o bin/functions.o bin/material.o
	g++ bin/main.o bin/functions.o bin/material.o -o learning

bin/main.o: src/main.cpp 
	g++ src/main.cpp -c -o bin/main.o

bin/functions.o: src/functions.cpp
	g++ src/functions.cpp -c -o bin/functions.o

bin/material.o: src/material.cpp
	g++ src/material.cpp -c -o bin/material.o

clean:
	rm bin/*.o
	rm learning

run: learning

	./learning
