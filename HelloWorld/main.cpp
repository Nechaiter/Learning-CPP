#include <iostream>

int main()
{
	std::cout << "Hello, world!";
	return 0;
    
}






//Cambiando la version de c++ para el compilado

// Setting a language standard for VS Code

// For VS Code, you can follow the rules above for setting a language standard in GCC/G++/Clang.

// Place the appropriate language standard flag (including the double quotes and comma) in the tasks.json configuration file, in the "args" section, on its own line before "${file}".

// We also want to configure Intellisense to use the same language standard. For C++20, in settings.json, change or add the following setting on its own line: "C_Cpp.default.cppStandard": "c++20".





//Build configurations

// For VS Code users

// When you first ran your program, a new file called tasks.json was created under the .vscode folder in the explorer pane. Open the tasks.json file, find “args”, and then locate the line “${file}” within that section.

// Above the “${file}” line, add a new line containing the following command (one per line) when debugging:
// "-ggdb",

// Above the “${file}” line, add new lines containing the following commands (one per line) for release builds:
// "-O2",
// "-DNDEBUG",



//Compiler extenxions

// For VS Code users

//     Open the tasks.json file, find "args", and then locate the line "${file}" within that section.
//     Above the "${file}" line, add a new line containing the following commands:

// "-pedantic-errors",

// As of the time of writing, VS Code does not automatically add a newline to the end of code files that are missing it (something that is pedantically required by the C++ standard). Fortunately, we can tell VS Code to do so:

//     Open VS Code and go to File (Code if using a Mac) > Preferences > Settings. This will open a settings dialog.
//     Enter insert final newline into the search bar.
//     In both the Workspace Settings and User Settings tabs, ensure the checkbox labeled Files: Insert Final Newline is checked.



//Deja la consola abierta
// #include <limits>

// std::cin.clear(); // reset any error flags
// std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any characters in the input buffer until we find an enter character
// std::cin.get(); // get one more char from the user
