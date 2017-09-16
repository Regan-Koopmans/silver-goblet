make:
	gcc -z execstack -mpreferred-stack-boundary=2 main.c -o main -g -fno-stack-protector -m32

run:
	./main
