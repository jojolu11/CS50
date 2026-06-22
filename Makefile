CC = clang
CFLAGS = -I/usr/local/include
LIBS = /usr/local/lib/libcs50.a

hello: gud/hello.c
	$(CC) $(CFLAGS) gud/hello.c $(LIBS) -o gud/hello

compare: compare.c
	$(CC) $(CFLAGS) compare.c $(LIBS) -o compare

meow: gud/meow.c
	$(CC) $(CFLAGS) gud/meow.c $(LIBS) -o gud/meow

maio: maio.c
	$(CC) $(CFLAGS) maio.c $(LIBS) -o maio

cal: cal.c
	$(CC) $(CFLAGS) cal.c $(LIBS) -o cal

contracts: contracts.c
	$(CC) $(CFLAGS) contracts.c $(LIBS) -o contracts

count: count.c
	$(CC) $(CFLAGS) count.c $(LIBS) -o count

run: hello
	./gud/hello

run-compare: compare
	./compare

run-meow: meow
	./gud/meow

run-maio: maio
	./maio

run-contracts: contracts
	./contracts

run-count: count
	./count

clean:
	rm -f hello compare gud/meow maio cal contracts count
