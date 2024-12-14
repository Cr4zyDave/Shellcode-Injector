# Shellcode Injector
This Shellcode Injector is a Windows-based program that injects shellcode into a target process using only NTAPI functions. The shellcode is provided as a binary file and is injected into the target process by creating a remote thread in the target's memory. The program accepts two command-line arguments:
Process Name: The name of the target process to inject the shellcode into. The injector will locate the process by its name, retrieve its Process ID (PID), and use it for the injection.
Binary File: The path to a binary file containing the raw shellcode. This shellcode will be injected into the target process memory.
