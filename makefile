make:
	gcc main.c -o main -g -fno-stack-protector -m32

run:
	./main
