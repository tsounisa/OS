#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void signal_handler(int sig) {
    printf("Child received signal %d from parent.\n", sig);
}

int main() {
    pid_t pid = fork();
    if (pid == 0) {
        // Child process
        signal(SIGUSR1, signal_handler);
        pause(); // Wait for a signal
    } else {
        // Parent process
        printf("Parent sending signal to child...\n");
        sleep(1);
        kill(pid, SIGUSR1);
    }
    return 0;
}
