CC = g++
TARGET = uniqueLine

all: $(TARGET)

$(TARGET): UniqueLine.cpp
	$(CC) UniqueLine.cpp -o $(TARGET)

clean:
	rm -f $(TARGET)