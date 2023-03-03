# Displaying a dialog box

C programs can produce graphical components using special functions, on Windows these are provided by the WINAPI (Windows Application Programming Interface) - which is made available to the program by adding the compiler directive to include the Windows specific `<window.h> header file.

<br>

In a C program specifically for a Window OS, the `main()` function is replaced by a WinMain() function:

```C
int WINAPI WinMain (HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
```

These arguments are a requirement for the program to communicate with the operating system:

- hInstance: a 'handle' reference to the program
- hPrevInstance: use in earlier Windows programming (can usually now be ignored)
- lpCmdLine: represents all items used on the command line to compile the application
- nCmdShow: control how the window will be displayed

<br>

The most simple graphical component to create in Windows is a basic dialog box with an "OK" button, and is created by calling the `MessageBox()` function: 

int MessageBox(HWND hWnd, LPCTSTR lpText, LPCTSTR lpCaption, UINT uType);

- hWnd: a 'handle' reference to the parent window (without a parent window is specified as NULL)
- lpText: the message string to be displayed
- lpCaption: the title to be displayed on the dialog box
- uType: can specify icons and buttons using special constant values in a pipe-delimited list e.g. MB_OK adds an OK button and an exclamation icon can be added with the constant MB_ICONEXCLAMATION.

<br>

After complication a program that creates a dialog box can be run as normal from the command line but additionally also by double-clicking on it executable file icon (this will open with both a Command Prompt window and dialog box). The GNU C Complier has a `-mwindows` option that can be added to the end of the compilation command to stop the Command Prompt window from appearing when the program is run by double-click.	