CC = clang
CFLAGS = -Wall -O0 -g
LFLAGS = -O0 -g
LIBS = -lm

main: main.o caesar.o
	${CC} $(LFLAGS) -o main main.o caesar.o
	
main.o caesar.o:

clean:
	rm -f *.o *~

veryclean: clean
	rm -f main
