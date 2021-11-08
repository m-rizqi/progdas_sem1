#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    // define file variable
    FILE *information, *warning, *error, *log;
    ifstream infile;
    infile.open("src//event_log_windows_1000.txt");
    information = fopen("src//infromation.txt", "w");
    warning = fopen("src//warning.txt", "w");
    error = fopen("src//error.txt", "w");
    log = fopen("src//log.txt", "w");
    string line;

    // check if input file is null
    if (!infile.is_open())
    {
        printf("sorry not found");
        exit(0);
    }

    // read file line by line and store it
    while (infile.peek() != EOF)
    {
        getline(infile, line);
        stringstream temp(line);
        string level;
        getline(temp, level, ',');
        if (level == "Information")
        {
            fprintf(information, "%s\n", line.c_str());
        }
        else if (level == "Warning")
        {
            fprintf(warning, "%s\n", line.c_str());
        }
        else if (level == "Error")
        {
            fprintf(error, "%s\n", line.c_str());
        }
        else
        {
            fprintf(log, "%s\n", line.c_str());
        }
    }

    // close file
    infile.close();
    fclose(information);
    fclose(warning);
    fclose(error);
    fclose(log);
    return 0;
}
