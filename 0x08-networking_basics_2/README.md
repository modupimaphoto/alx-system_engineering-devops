# 0x08. Networking basics #1

## General

- What is localhost/127.0.0.1
- What is 0.0.0.0
- What is /etc/hosts
- How to display your machine’s active network interfaces

**localhost/127.0.0.1:**
- `localhost` is a hostname that refers to the current device used to access the network. The IP address associated with `localhost` is `127.0.0.1`. This IP address is reserved for loopback testing, meaning it allows a device to communicate with itself.

**0.0.0.0:**
- The IP address `0.0.0.0` is used to represent an unspecified or unknown address. In the context of network programming, it can be used to bind a server socket to all available network interfaces or to indicate a "wildcard" address, meaning any address.

**/etc/hosts:**
- `/etc/hosts` is a system file on Unix-like operating systems that maps hostnames to IP addresses. It is used for local hostname resolution before querying DNS. Entries in this file allow you to associate IP addresses with hostnames, effectively bypassing the need for DNS for specific mappings.

**Displaying Active Network Interfaces:**
- To display your machine’s active network interfaces, you can use the `ifconfig` command or the more modern `ip` command.

  - Using `ifconfig`:
    ```bash
    ifconfig
    ```

  - Using `ip`:
    ```bash
    ip addr show
    ```

  Both commands will provide information about the active network interfaces on your machine, including their IP addresses, MAC addresses, and other configuration details. Note that the exact command may vary based on your operating system and distribution. For example, on systems using `systemd`, you might use `ip a` instead of `ip addr show`.
  
  ## Conclusion
  
  **ifconfig:**
The `ifconfig` (interface configuration) command is used to configure and display information about network interfaces on Unix-like operating systems. It provides details such as the IP address, MAC address, network masks, and other network-related parameters for each active network interface on the system.

Example:
```bash
ifconfig
```

This command displays information about all active network interfaces on the machine.

**telnet:**
`telnet` is a network protocol and a command-line tool that allows you to establish interactive text-based communication with another device over a network. It's commonly used for remote login or accessing network services. However, it's important to note that telnet is insecure, as it transmits data, including login credentials, in plain text.

Example:
```bash
telnet example.com 80
```

This command connects to the HTTP port (port 80) on the server `example.com`.

**nc (netcat):**
`nc` (netcat) is a versatile networking utility that can be used for various purposes, such as creating network connections, port scanning, and data transfer. It operates at the transport layer of the OSI model and can function as a simple TCP or UDP client or server.

Example:
```bash
nc -l -p 1234
```

This command starts a netcat server listening on port 1234.

**cut:**
The `cut` command is used for extracting sections from each line of a file or input. It's often used to manipulate text data by selecting specific columns or fields.

Example:
```bash
echo "apple,orange,banana" | cut -d ',' -f 2
```

This command takes the input string "apple,orange,banana," uses ',' as the delimiter, and prints the second field, resulting in "orange."

In general, `cut` is useful for working with structured text data, where fields are separated by a specific delimiter.
