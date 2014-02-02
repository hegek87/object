CC = g++
CFLAGS = -c -g -Wall -o
OBJECTS = 	bin/sphere.o 	\
		bin/shape.o 	\
		bin/polynomial.o	\
		bin/color.o		\
		bin/vector3d.o	\
		bin/test.o
		
all: sphere

sphere: $(OBJECTS)
	$(CC) -o bin/shape_test $(OBJECTS) -lUnitTest++
	
bin/sphere.o: sphere.cpp
	$(CC) $(CFLAGS) bin/sphere.o sphere.cpp
	
bin/shape.o: shape.cpp
	$(CC) $(CFLAGS) bin/shape.o shape.cpp
	
bin/polynomial.o: ../polynomial/polynomial.cpp
	$(CC) $(CFLAGS) bin/polynomial.o ../polynomial/polynomial.cpp
	
bin/color.o: ../color/color.cpp
	$(CC) $(CFLAGS) bin/color.o ../color/color.cpp
	
bin/vector3d.o: ../vector3d/vector3d.cpp
	$(CC) $(CFLAGS) bin/vector3d.o ../vector3d/vector3d.cpp
	
bin/test.o: test.cpp
	$(CC) $(CFLAGS) bin/test.o test.cpp
	
clean:
	rm -f ./bin/*
