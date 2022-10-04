default: demo

demo: structDemo.o
	$(CC) -o $@ $?

structDemo.o: structDemo.c
	$(CC) -c $?
	
clean:
	-rm -f *.o demo
	@echo "All clean!"

