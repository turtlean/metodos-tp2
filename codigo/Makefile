CC = g++

main : folder obj/main.o obj/bridge.o obj/BandMatrix.o
	$(CC) -o bin/main obj/main.o obj/bridge.o obj/BandMatrix.o

folder:
	mkdir -p ./bin
	mkdir -p ./obj

obj/main.o : src/main.cpp
	$(CC) -c src/main.cpp -o obj/main.o

obj/bridge.o : src/bridge.cpp
	$(CC) -c src/bridge.cpp -o obj/bridge.o

obj/BandMatrix.o : src/BandMatrix.cpp
	$(CC) -c src/BandMatrix.cpp -o obj/BandMatrix.o

clean:
	rm -f -r bin obj