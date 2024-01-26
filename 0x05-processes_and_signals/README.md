# 0x05. Processes and signals

## General

- What is a PID
- What is a process
- How to find a process’ PID
- How to kill a process
- What is a signal
- What are the 2 signals that cannot be ignored

**PID (Process ID):**
PID stands for Process ID. It is a unique numerical identifier that is assigned to each process in a computer system. Processes are instances of running programs, and the PID helps the operating system keep track of them. PIDs are used for various system management tasks, such as identifying, monitoring, and controlling processes.

**Process:**
A process is an executing instance of a program in a computer system. It includes the program code, data, and system resources. Each process has its own address space, and it runs independently of other processes. Processes are fundamental to the functioning of an operating system, allowing multiple tasks to be performed simultaneously.

**Finding a Process' PID:**
You can find a process's PID using various commands depending on your operating system. For example, in Unix-like systems, you can use the `ps` command:

```bash
ps aux | grep <process_name>
```

This will display a list of processes, and you can find the PID associated with the specific process.

**Killing a Process:**
To terminate a process, you can use the `kill` command in Unix-like systems. For example:

```bash
kill <PID>
```

This sends a default signal (`SIGTERM`) to the specified process, asking it to terminate gracefully. If that doesn't work, you can use:

```bash
kill -9 <PID>
```

This sends a `SIGKILL` signal, forcefully terminating the process.

**Signal:**
A signal is a software interrupt delivered to a process by the operating system. Signals are used to communicate with processes, allowing actions such as process termination, suspension, or modification of behavior.

**Two Signals That Cannot Be Ignored:**
1. **SIGKILL (signal number 9):** This signal forces the process to terminate immediately. It cannot be caught, blocked, or ignored by the process.
  
2. **SIGSTOP (signal number 19 or 17):** This signal suspends the process immediately. Like SIGKILL, it cannot be caught, blocked, or ignored by the process.

Both SIGKILL and SIGSTOP are powerful signals that override the normal signal handling mechanisms of a process, making them essential for certain situations where immediate termination or suspension is required.
