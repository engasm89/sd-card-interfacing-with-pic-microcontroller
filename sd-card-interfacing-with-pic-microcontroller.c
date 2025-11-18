// Simulate PIC SD card filesystem writes and reads
#include <stdio.h> // Logs

static void fs_write(int n, int v) { // Write record
  printf("FS WRITE rec=%d val=%d\n", n, v); // Log
}

static void fs_read(int n) { // Read record
  printf("FS READ rec=%d val=%d\n", n, (n*7)%100); // Log
}

int main(void) { // Entry
  printf("SD Card Interfacing with PIC Microcontroller\n"); // Title
  for (int i = 1; i <= 10; ++i) { fs_write(i, (i*3)%50); } // Write records
  for (int i = 1; i <= 5; ++i) { fs_read(i); } // Read records
  return 0; // Exit
} // End main
