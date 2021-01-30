test: clean main.o
	bash test.sh "2.2 1.1 1.0" "2.42"
	bash test.sh "3.00 4 5.00 " "60.00"

main.o:
	gcc main.c -o main.o

clean:
	rm -rf *.o *~ main
	
