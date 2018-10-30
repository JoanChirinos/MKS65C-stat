compile: stat.c yaboi.txt
	gcc stat.c

run:
	./a.out

clean:
	-rm -rf *.o a.out
