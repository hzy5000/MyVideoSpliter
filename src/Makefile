CXX := c++
CXXFLAGS := -g
INCLUDES := -I/usr/include
LIBS := -L/usr/lib//usr/lib/x86_64-linux-gnu -lopencv_highgui

#Link Command
MyVideoSpliter: MyVideoSpliter.o
	$(CXX) MyVideoSpliter.o -o MyVideoSpliter $(LIBS) 

#Compilation command
MyVideoSpliter.o: MyVideoSpliter.cxx
	$(CXX) $(INCLUDES) -c MyVideoSpliter.cxx -o MyVideoSpliter.o

all: MyVideoSpliter


