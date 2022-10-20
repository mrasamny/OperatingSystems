default: producer consumer pipe_example np_consumer np_producer

np_consumer: named_pipe_consumer.o
	gcc -o np_consumer named_pipe_consumer.o
	
named_pipe_consumer.o: named_pipe_consumer.c
	gcc -c named_pipe_consumer.c
	
np_producer: named_pipe_producer.o
	gcc -o np_producer named_pipe_producer.o
	
named_pipe_producer.o: named_pipe_producer.c
	gcc -c named_pipe_producer.c

producer: shm_producer.o
	gcc -o producer shm_producer.o -lrt

shm_producer.o: shm_producer.c
	gcc -c shm_producer.c

consumer: shm_consumer.o
	gcc -o consumer shm_consumer.o -lrt

shm_consumer.o: shm_consumer.c
	gcc -c shm_consumer.c

pipe_example: pipe_example.o
	gcc -o pipe_example pipe_example.o
	
pipe_example.o: pipe_example.c
	gcc -c pipe_example.c
clean:
	-rm -rf *.o producer consumer pipe_example
