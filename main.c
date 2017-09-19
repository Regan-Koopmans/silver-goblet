# include <stdio.h>
# include <string.h>
# include <unistd.h>

int main(int argc, char ** argv) {
    char buffer[1024];
    setuid(0);
    printf("\n################################\n");
    printf("# THE UNIVAC INSECURITY SYSTEM #\n");
    printf("#    By Ernst and Regan.       #\n");
    printf("################################\n\n");
    strcpy(buffer, argv[1]);
    printf("You entered the text : %s\n\n", buffer);
    return 0;
}
