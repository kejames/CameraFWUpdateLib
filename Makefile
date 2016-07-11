LIBS += -Lx86_64 -lrtsuvc -lrtscamkit -lpthread

all:dlfw

dlfw:dlfw.c
		gcc -o $@ $^ $(LIBS)

clean:
		rm dlfw
