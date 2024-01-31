# 0x07. Networking basics #0

## OSI Model

- What it is
- How many layers it has
- How it is organized

The OSI Model, or Open Systems Interconnection model, is a conceptual framework that standardizes the functions of a telecommunication or computing system into seven abstraction layers. It was developed by the International Organization for Standardization (ISO) to ensure that different systems could work together seamlessly. The OSI Model serves as a guide for product developers and facilitates communication between different systems.

The seven layers of the OSI Model, from the bottom (Layer 1) to the top (Layer 7), are:

1. **Physical Layer (Layer 1):** This layer deals with the physical connection between devices. It includes the hardware components such as cables, switches, and network interface cards.

2. **Data Link Layer (Layer 2):** The Data Link Layer provides node-to-node communication, and it ensures that data is delivered error-free over the physical layer. It also manages access to the physical medium.

3. **Network Layer (Layer 3):** The Network Layer is responsible for logical addressing, routing, and forwarding of data packets between devices across different networks. The Internet Protocol (IP) operates at this layer.

4. **Transport Layer (Layer 4):** This layer ensures end-to-end communication and is responsible for error detection, flow control, and data segmentation and reassembly. Transmission Control Protocol (TCP) operates at this layer.

5. **Session Layer (Layer 5):** The Session Layer manages sessions or connections between applications. It establishes, maintains, and terminates connections, allowing data to be exchanged.

6. **Presentation Layer (Layer 6):** The Presentation Layer is concerned with data format translation, encryption, and compression. It ensures that data is presented in a readable format for the application layer.

7. **Application Layer (Layer 7):** The Application Layer is the topmost layer and is directly in contact with end-user applications. It provides network services like email, file transfer, and remote login.

The OSI Model is organized in a hierarchical manner, with each layer relying on the services provided by the layer directly beneath it. This modular design makes it easier to understand, implement, and troubleshoot network protocols and communication processes. It's important to note that the OSI Model is a conceptual framework and is not tied to any specific networking technology; instead, it serves as a guide for the development and understanding of network protocols.

## What is a LAN

- Typical usage
- Typical geographical size

A LAN, or Local Area Network, is a network of interconnected computers and devices within a limited geographical area, such as a home, office building, or campus. LANs are designed to facilitate communication and resource sharing among the connected devices. Here are some characteristics of LANs:

**Typical Usage:**
1. **Resource Sharing:** One of the primary purposes of a LAN is to enable the sharing of resources among connected devices. This includes sharing files, printers, and other peripheral devices.
2. **Communication:** LANs provide a platform for local communication, allowing connected devices to exchange data and information quickly and efficiently.
3. **Collaboration:** LANs support collaboration among users within the same physical location, making it easier for them to work on shared projects and access common resources.
4. **Internet Access:** While LANs are confined to a local area, they often provide a gateway for connected devices to access the internet. This is typically achieved through a router or gateway device.

**Typical Geographical Size:**
- LANs are characterized by their limited geographical size. The range can vary, but in general, a LAN encompasses a relatively small area, such as a single building, a floor within a building, or a campus. The devices within a LAN are typically in close physical proximity to each other.

- The size of a LAN is often constrained by the limitations of the underlying technologies used to connect devices. Ethernet is a common technology for LANs, and it typically supports effective communication within a range of a few hundred meters. However, technologies like Wi-Fi can extend the coverage area wirelessly, making it feasible to have LANs cover larger spaces.

It's important to note that LANs are just one type of network, and their scope is limited to a specific geographical area. In contrast, Wide Area Networks (WANs) cover larger geographical areas, such as cities, countries, or even global networks, connecting multiple LANs.

## What is a WAN

- Typical usage
- Typical geographical size

A WAN, or Wide Area Network, is a type of network that extends over a large geographical area, connecting multiple local area networks (LANs) or other types of networks. Unlike LANs, which are confined to a limited geographical area, WANs cover a broader region and often involve the use of various telecommunication technologies to connect devices. Here are some characteristics of WANs:

**Typical Usage:**
1. **Interconnecting LANs:** One of the primary purposes of WANs is to connect multiple LANs and enable communication and resource sharing between them. This allows organizations with multiple locations to establish a network that spans across different cities, regions, or even countries.
2. **Remote Access:** WANs facilitate remote access to resources, applications, and data. Users located at distant locations can connect to the WAN to access centralized servers, databases, and other shared resources.
3. **Internet Connectivity:** WANs are often used to provide internet connectivity to connected networks. This enables users within the WAN to access the internet and external services.
4. **Corporate Networks:** Many large corporations use WANs to connect their branch offices, regional offices, and headquarters. This ensures seamless communication and collaboration across different locations.

**Typical Geographical Size:**
- WANs cover a large geographical area, connecting networks that can be situated far apart. The geographical size of a WAN can range from covering a city, a country, or even span across continents.
  
- WANs make use of various technologies to cover such extensive distances. These technologies include dedicated leased lines, satellite links, fiber-optic cables, and virtual private networks (VPNs). The choice of technology depends on factors such as cost, bandwidth requirements, and the specific needs of the connected networks.

- The internet itself can be considered a global WAN that connects networks worldwide. Service providers and telecommunications companies play a crucial role in establishing and maintaining the infrastructure that forms the backbone of WANs.

## What is the Internet

- What is an IP address
- What are the 2 types of IP address
- What is localhost
- What is a subnet
- Why IPv6 was created

**What is the Internet:**
The Internet is a global network of interconnected computers and computer networks that communicate using standardized protocols. It is a vast network that enables the exchange of information, resources, and services among users and devices worldwide. The Internet facilitates various applications, including web browsing, email, file sharing, online gaming, and more. It is a decentralized network, and its infrastructure is composed of a multitude of interconnected routers, switches, servers, and other networking devices.

**What is an IP Address:**
An IP address (Internet Protocol address) is a numerical label assigned to each device connected to a computer network that uses the Internet Protocol for communication. IP addresses serve two primary purposes: host or network interface identification and location addressing. They allow devices to be uniquely identified on a network and enable the routing of data between devices. IP addresses can be either IPv4 (32-bit) or IPv6 (128-bit).

**What are the 2 types of IP Address:**
There are two main types of IP addresses:

1. **IPv4 (Internet Protocol version 4):** IPv4 addresses are 32-bit numerical labels expressed in dotted-decimal format (e.g., 192.168.0.1). Due to the increasing number of devices connected to the internet, the available IPv4 addresses have become exhausted, leading to the development and adoption of IPv6.

2. **IPv6 (Internet Protocol version 6):** IPv6 addresses are 128-bit numerical labels written in hexadecimal format (e.g., 2001:0db8:85a3:0000:0000:8a2e:0370:7334). IPv6 was introduced to address the limitations of IPv4 and provide a vastly larger pool of unique IP addresses, ensuring continued growth of the Internet.

**What is localhost:**
"Localhost" refers to the loopback network interface on a device, typically assigned the IP address 127.0.0.1. It allows a device to communicate with itself. When the term "localhost" is used in a URL or network configuration, it directs the device to connect to its own network services. It is commonly used for testing and development purposes.

**What is a Subnet:**
A subnet, short for subnetwork, is a division of an IP network into smaller, more manageable segments. Subnetting allows for better organization and management of IP addresses within a network. Devices within the same subnet can communicate directly with each other without the need for routing through a gateway. Subnetting helps improve network security, optimize network performance, and facilitate efficient use of IP address space.

**Why IPv6 was created:**
IPv6 (Internet Protocol version 6) was created to address the limitations of IPv4, mainly the exhaustion of available IP addresses. The IPv4 address space is limited to approximately 4.3 billion unique addresses, which became insufficient as the number of connected devices on the Internet rapidly increased. IPv6 was developed to provide a vastly larger pool of unique IP addresses (2^128 addresses), ensuring the continued growth of the Internet and accommodating the increasing number of devices, especially with the proliferation of IoT (Internet of Things) devices. Additionally, IPv6 includes improvements in network security, configuration, and performance over IPv4.

## TCP/UDP

- What are the 2 mainly used data transfer protocols for IP (transfer level on the OSI schema)
- What is the main difference between TCP and UDP
- What is a port
- Memorize SSH, HTTP and HTTPS port numbers
- What tool/protocol is often used to check if a device is connected to a network

**2 Mainly Used Data Transfer Protocols for IP:**
- The two main data transfer protocols for IP (Internet Protocol) at the transport layer (Layer 4 of the OSI model) are TCP (Transmission Control Protocol) and UDP (User Datagram Protocol).

**Main Difference Between TCP and UDP:**
1. **Connection-Oriented vs. Connectionless:** TCP is connection-oriented, meaning it establishes a reliable and ordered connection between two devices before data transfer. It ensures that data is delivered accurately and in the correct order. UDP, on the other hand, is connectionless, providing a simpler, faster, and more lightweight communication method but without the reliability and ordering guarantees of TCP.

2. **Reliability and Error Handling:** TCP ensures reliable data delivery by using mechanisms such as acknowledgments and retransmissions to recover from lost or corrupted data. UDP does not provide these features, making it faster but less reliable.

3. **Order of Delivery:** TCP guarantees the order of delivery of data, meaning that data sent from one system to another will be received in the same order it was sent. UDP does not guarantee the order of delivery.

**What is a Port:**
- A port is a logical endpoint for communication in a computer network. It is used to uniquely identify a specific process or service to which the data is being sent. Ports are associated with IP addresses, allowing multiple services to run on a single device.

**Memorize SSH, HTTP, and HTTPS Port Numbers:**
- Memorizing port numbers can be helpful for network administrators and developers. Here are the port numbers for SSH, HTTP, and HTTPS:
  - SSH (Secure Shell): Port 22
  - HTTP (Hypertext Transfer Protocol): Port 80
  - HTTPS (Hypertext Transfer Protocol Secure): Port 443

**Tool/Protocol Often Used to Check if a Device is Connected to a Network:**
- Ping is a commonly used tool/protocol to check if a device is connected to a network. The Ping tool sends a small packet of data (ICMP echo request) to a specific IP address, and if the target device is reachable and responsive, it sends back a reply (ICMP echo reply). This tool helps in troubleshooting network connectivity issues and verifying the status of devices on a network.

## Conclusion

1. **OSI Model:**
   - The OSI (Open Systems Interconnection) model is a conceptual framework that standardizes the functions of a telecommunication or computing system into seven abstraction layers. It guides product developers and facilitates communication between different systems.

2. **Different Types of Network:**
   - Networks can be categorized into various types, including LANs (Local Area Networks), WANs (Wide Area Networks), and MANs (Metropolitan Area Networks). The classification is based on the geographical scope and size of the network.

3. **LAN (Local Area Network):**
   - A LAN is a network of interconnected computers and devices within a limited geographical area, such as a home, office, or campus.

4. **WAN (Wide Area Network):**
   - A WAN is a network that covers a larger geographical area, connecting multiple LANs or other networks over long distances.

5. **Internet:**
   - The Internet is a global network of interconnected computers and networks that communicate using standardized protocols, allowing worldwide information exchange.

6. **MAC Address:**
   - A MAC (Media Access Control) address is a unique identifier assigned to a network interface controller (NIC) for communications on a network. It is a hardware address burned into the NIC during manufacturing.

7. **IP Address:**
   - An IP (Internet Protocol) address is a numerical label assigned to each device on a computer network. It serves two primary purposes: host identification and location addressing.

8. **Private and Public Address:**
   - Private IP addresses are used within a private network and are not routable on the public internet. Public IP addresses are assigned to devices that need to be directly reachable from the internet.

9. **IPv4 and IPv6:**
   - IPv4 (Internet Protocol version 4) and IPv6 (Internet Protocol version 6) are addressing schemes used to identify devices on a network. IPv6 was introduced to address the limitations of IPv4, including its limited address space.

10. **Localhost:**
    - Localhost refers to the loopback network interface of a device, typically assigned the IP address 127.0.0.1. It allows a device to communicate with itself.

11. **TCP and UDP:**
    - TCP (Transmission Control Protocol) and UDP (User Datagram Protocol) are transport layer protocols. TCP is connection-oriented, providing reliable and ordered delivery, while UDP is connectionless, offering faster but less reliable communication.

12. **TCP/UDP Ports List:**
    - Common TCP/UDP port numbers include:
      - SSH (Secure Shell): 22
      - HTTP (Hypertext Transfer Protocol): 80
      - HTTPS (Hypertext Transfer Protocol Secure): 443

13. **Ping/ICMP:**
    - Ping is a network utility tool that sends ICMP (Internet Control Message Protocol) echo requests to a target IP address to check network connectivity and measure round-trip times.

14. **Positional Parameters:**
    - Positional parameters refer to command-line arguments provided to a script or command, typically accessed using variables like `$1`, `$2`, etc.

15. **man or help:**
    - `man` is a command used in Unix-like operating systems to display the manual pages for a given command. `help` is a command in various shells (like Bash) that provides information on built-in shell commands.

16. **netstat:**
    - `netstat` is a command-line tool used to display network-related information such as active network connections, routing tables, interface statistics, masquerade connections, and more.

17. **ping:**
    - `ping` is a network utility tool used to test the reachability of a host on an Internet Protocol (IP) network and measure the round-trip time for messages sent from the originating host to a destination computer.

