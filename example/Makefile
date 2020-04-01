LIBGLOG=../install

INC=\
	-I$(LIBGLOG)/include
LIB=\
	-L$(LIBGLOG)/lib

GCC=g++
CPPFLAGS= -std=c++11 -g -Wall -pipe -msse -msse2 -fpermissive \
	-Wno-sign-compare -Wno-unused-local-typedefs -Winit-self \
	-O0 -ggdb
TARGET= glogdemo
OBJ= speech.o
all:clean $(TARGET) output

$(TARGET): $(OBJ) 
	$(GCC) $(CPPFLAGS) -o $@ $^ $(INC) $(LIB) -lglog -lpthread
%.o : %.cc
	$(GCC) $(INC) $(CPPFLAGS) -c $< -o $@

clean:
	- rm *.o
	- rm $(TARGET)

output:
	rsync -av ../install/lib/* ./
