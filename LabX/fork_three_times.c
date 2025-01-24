#include <stdio.h>
#include <unistd.h>

int main() {
    for (int i = 0; i < 3; i++) {
        pid_t pid = fork();
        if (pid == 0) {
            // Child process
            printf("Child Process PID: %d\n", getpid());
        } else {
            // Parent process
            printf("Parent Process PID: %d\n", getpid());
        }
    }
    return 0;
}
