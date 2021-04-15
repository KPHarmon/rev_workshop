# Reverse Engineering Workshop

## Installation

*Note: Ghidra requires JDK 11 to be installed on the system path*

### Windows
1. Download JDK 11 (.zip) [here](https://www.oracle.com/java/technologies/javase-jdk11-downloads.html).
    1. Note: You may need to register a free Oracle account.
2. Extract the JDK to a directory of your choice.
3. Edit environment variables.
    1. Right-click on Windows start button, then click "System"
    2. Click "Advanced System Settings"
    3. Click "Environment Variables"
4. Add the JDK "bin" directory to the PATH variable.
    1. Under System variables highlight Path and click "Edit..."
    2. At the end of the Variable value field, add a semicolon followed by \<path of extracted JDK dir\>\bin
    3. Click OK
    4. Click OK
    5. Click OK
5. Reopen the Command Prompt.
    1. Press "win+r" then enter "cmd" in the box
6. [Download Ghidra.](https://ghidra-sre.org/)
7. Run Ghidra (UI)
    1. Navigate to the Ghidra install directory via the Command Prompt.
    2. Run "ghidraRun.bat"

### Linux & macOS
1. Download JDK 11 (.tar.gz) [here](https://www.oracle.com/java/technologies/javase-jdk11-downloads.html).
    1. Note: You may need to register a free Oracle account.
2. Extract the JDK to a directory of your choice.
    1. Using the command "tar xvf \<filename\>.tar.gz" will extract the contents
3. Add the JDK to the Path
    1. Edit ~/.bashrc with an editor of your choice.
        1. Ex: Open the "Terminal" and type "vi ~/.bashrc" to edit the file using vi.
    2. Append "export PATH=\<path of extracted JDK dir\>/bin:$PATH" to the file
    3. Save the file
4. Reopen the Terminal.
5. [Download Ghidra.](https://ghidra-sre.org/)
6. Run Ghidra (UI)
    1. Navigate to the Ghidra install directory via the Terminal.
    2. Run "./ghidraRun"

[Detailed Installation Guide](https://ghidra-sre.org/InstallationGuide.html#Install)
[Troubleshooting](https://ghidra-sre.org/InstallationGuide.html#Troubleshooting)
