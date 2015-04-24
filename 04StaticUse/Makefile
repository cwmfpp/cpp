CROSS_COMPILE?=
OBJC:=main.cpp StaticUse.cpp
LDS:=
TARGET:=target

AS	= $(CROSS_COMPILE)as
LD	= $(CROSS_COMPILE)ld
CC	= $(CROSS_COMPILE)g++
CPP = $(CC) -E
AR	= $(CROSS_COMPILE)ar
NM	= $(CROSS_COMPILE)nm
STRIP	= $(CROSS_COMPILE)strip
OBJCOPY	= $(CROSS_COMPILE)objcopy
OBJDUMP	= $(CROSS_COMPILE)objdump
a_flags =
dump_file=dump.txt

all:$(TARGET) dump
$(TARGET):$(OBJC)
	$(CC) $(a_flags) $^ -o $@ 
	#$(LD) -Tcwm.lds $(OBJC:.c=.o) -o $@
	
	echo $(CURDIR)

dump:
	$(OBJDUMP) -Dxz $(TARGET) > $(dump_file) 
clean:
	rm -rf $(OBJC:.cpp=.o) $(TARGET) $(TARGET:=.dump) *.swp $(dump_file)

.PHONY:clean
