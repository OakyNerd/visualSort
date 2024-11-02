SOURCES = main.cpp functions.cpp
OBJECTS = main.o functions.o
EXECUTABLE = main

CXX = g++
CXXFLAGS = -lGL -lGLU -lglut

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(EXECUTABLE) $(CXXFLAGS)

%.o: %.cpp
	$(CXX) -c $< -o $@

.PHONY:
	clean

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
