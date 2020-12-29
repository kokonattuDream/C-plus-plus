CC = g++
 
  # compiler flags:
  #  -g     - this flag adds debugging information to the executable file
  #  -Wall  - this flag is used to turn on most compiler warnings
CFLAGS  = -g -Wall
 
  # The build target 
TARGET = goal
 
all: $(TARGET)
 
$(TARGET): 2.8_multile_file.cpp 2.8_multile_file1.cpp
	$(CC) $(CFLAGS) -o $(TARGET) 2.8_multile_file.cpp 2.8_multile_file1.cpp
 
clean:
	$(RM) $(TARGET)