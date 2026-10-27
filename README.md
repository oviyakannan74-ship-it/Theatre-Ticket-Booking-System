# Theatre Ticket Booking System in C

## About the Project
The Theatre Ticket Booking System is a menu-driven, console-based application developed using the C programming language. It allows users to view seat availability, book theatre seats, and cancel existing bookings.

## Features
- **View Seating:** Displays the seating arrangement of 10 rows and 10 columns.
- **Book Seats:** Allows users to book multiple seats by entering row and column numbers.
- **Cancel Bookings:** Enables users to cancel previously booked seats.
- **Reserved Seating:** The first row is reserved for persons with disabilities.
- **Input Validation:** Checks whether the entered seat positions are within the valid range.
- **Menu-Driven Interface:** Provides options to view seats, book seats, cancel bookings, or exit the program.

## Technologies Used
- C Programming Language
- Standard C Libraries: `stdio.h` and `stdlib.h`
- Two-dimensional arrays
- Functions
- Loops and conditional statements
- `switch` statement

## How to Run
1. Download or clone this repository.
2. Open the C source file in a C compiler or IDE, such as Code::Blocks.
3. Compile and run the program.
4. Follow the on-screen menu to manage theatre seat bookings.

## Seating Arrangement
- The theatre has **100 seats** arranged in 10 rows and 10 columns.
- `0` indicates an available seat.
- `1` indicates a booked seat.
- Row 1 is reserved for persons with disabilities.

## Limitations
- Booking information is stored in memory and is lost when the program terminates.
- The application runs in the console and does not use a graphical user interface.

## Future Improvements
- Store booking details permanently using file handling.
- Add customer details and booking confirmation.
- Display a more user-friendly seating layout.

## Author
Oviya Kannan
