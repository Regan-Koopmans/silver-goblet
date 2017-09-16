make:
	gcc -z execstack -mpreferred-stack-boundary=4 main.c -o main -g -fno-stack-protector

run:
	./main
