# Makefile para BrazoRobotico

CXX = g++
CXXFLAGS = -Wall -std=c++17

TARGET = brazo
OBJS = main.o BrazoRobotico.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

main.o: main.cpp BrazoRobotico.h
	$(CXX) $(CXXFLAGS) -c main.cpp

BrazoRobotico.o: BrazoRobotico.cpp BrazoRobotico.h
	$(CXX) $(CXXFLAGS) -c BrazoRobotico.cpp

clean:
	rm -f $(OBJS) $(TARGET)

test: $(TARGET)
	./$(TARGET)

