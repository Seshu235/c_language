#include <stdio.h>
#include <stdarg.h>
#include <sys/time.h>

struct timeval start_time; // Global variable to store the program start time

// Function to get the current time and calculate the elapsed time since the start
double get_elapsed_time() {
    struct timeval current_time;
    gettimeofday(&current_time, NULL);

    double elapsed_seconds = (current_time.tv_sec - start_time.tv_sec) +
                             (current_time.tv_usec - start_time.tv_usec) / 1000000.0;
    return elapsed_seconds;
}

// Custom printf function that prints the elapsed time along with the message
int my_printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    double elapsed_time = get_elapsed_time();
    printf("[%.6f] ", elapsed_time);

    int result = vprintf(format, args);

    va_end(args);
    return result;
}

int main() {
    // Get the program start time
    gettimeofday(&start_time, NULL);

    my_printf("Program started\n");

    // Do some work...
    for (int i = 0; i < 3; i++) {
        sleep(1); // Simulate some work
        my_printf("Iteration %d\n", i);
    }

    my_printf("Program finished\n");
    return 0;
}