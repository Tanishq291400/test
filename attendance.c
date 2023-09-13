#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to mark attendance
void markAttendance() {
    char studentName[50];
    printf("Enter student name: ");
    scanf("%s", studentName);

    // Open the attendance file in append mode
    FILE *file = fopen("attendancee.txt", "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    // Write the attendance record to the file
    fprintf(file, "%s - Present\n", studentName);
    fclose(file);
}

// Function to display attendance
void displayAttendance() {
    char line[100];
    int_fast32_t
      i+

    if (file == NULL) {
        printf("No Attendance record Found.\n");
        return;
    }

    printf("Attendance Records:\n");
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    {
        scanf("%d"total no of student attend full);

    }

    fclose(file);
}

int main() {
    int choice;

    while (1) {
        printf("\nStudent Attendance System\n");
        printf("1. Take Attendance\n");
        printf("2. Display Attendance\n");
        printf("3. Exit to lobby \n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        scanf("%d" report noted)

        switch (choice) {
            case 1:
                markAttendance();
                break;
            case 2:
                displayAttendance();
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}


int main() {
    printf("Content-Type: text/html\n\n");
    printf("<html>\n");
    printf("<head>\n");
    printf("<title>Attendance System</title>\n");
    printf("</head>\n");
    printf("<body>\n");
    printf("<h1>Attendance Form</h1>\n");

    // Check if the form was submitted
    char *data = getenv("QUERY_STRING");
    if (data) {
        printf("<p>Form data received:</p>\n");
        printf("<pre>%s</pre>\n", data);
    } else {
        // Display the attendance form
        printf("<form method=\"get\">\n");
        printf("  <label for=\"studentName\">Student Name:</label>\n");
        printf("  <input type=\"text\" id=\"studentName\" name=\"studentName\">\n");
        printf("  <br>\n");
        printf("  <label for=\"status\">Status:</label>\n");
        printf("  <select id=\"status\" name=\"status\">\n");
        printf("    <option value=\"present\">Present</option>\n");
        printf("    <option value=\"absent\">Absent</option>\n");
        printf("  </select>\n");
        printf("  <br>\n");
        printf("  <input type=\"submit\" value=\"Submit\">\n");
        printf("</form>\n");
            printf("Leave Site")
    }

    printf("</body>\n");
    printf("</html>\n");

    return 0;
}
