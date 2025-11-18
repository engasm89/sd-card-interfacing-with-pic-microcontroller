/*
 * Course: Sd Card Interfacing With Pic Microcontroller
 * Platform: Raspberry Pi
 * Author: Ashraf S A AlMadhoun
 * 
 * Description:
 * This code demonstrates the core concepts taught in the "Sd Card Interfacing With Pic Microcontroller" course.
 * It provides a practical implementation that students can study, modify, and
 * use as a foundation for their own projects.
 * 
 * Learning Objectives:
 * - Understand the fundamental principles covered in this course
 * - Practice implementing the concepts with real code
 * - Build a working example that can be extended
 * 
 * Hardware Requirements:
 * - Development board (Raspberry Pi)
 * - Components as specified in CIRCUIT.md
 * - USB cable for programming
 * 
 * Pin Connections:
 * Refer to CIRCUIT.md for detailed wiring diagrams and pin assignments.
 * 
 * Usage:
 * 1. Review the code structure and comments
 * 2. Connect hardware according to CIRCUIT.md
 * 3. Upload code to your development board
 * 4. Monitor serial output for debugging
 * 
 * Course Link: https://www.udemy.com/course/sd-card-interfacing-with-pic-microcontroller/
 * Repository: https://github.com/engasm89/sd-card-interfacing-with-pic-microcontroller
 * 
 * Copyright (c) 2025 Ashraf S A AlMadhoun
 * Licensed under MIT License
 */

// Simulate PIC SD card filesystem writes and reads
#include <stdio.h> // Logs

static void fs_write(int n, int v) { // Write record
  printf("FS WRITE rec=%d val=%d\n", n, v); // Log
}

static void fs_read(int n) { // Read record
  printf("FS READ rec=%d val=%d\n", n, (n*7)%100); // Log
}

int main(void) { // Program entry point
  printf("SD Card Interfacing with PIC Microcontroller\n"); // Title
  for (int i = 1; i <= 10; ++i) { fs_write(i, (i*3)%50); } // Write records
  for (int i = 1; i <= 5; ++i) { fs_read(i); } // Read records
  return 0; // Exit
} // End of main function
