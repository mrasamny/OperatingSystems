default: producer consumer

producer: shm_producer.o
	gcc -o producer shm_producer.o -lrt

shm_producer.o: shm_producer.c
	gcc -c shm_producer.c

consumer: shm_consumer.o
	gcc -o consumer shm_consumer.o -lrt

shm_consumer.o: shm_consumer.c
	gcc -c shm_consumer.c

clean:
	-rm -rf *.o producer consumer
