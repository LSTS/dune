# RTIMULibvrpn - RTIMULib with vrpn integration

RTIMULibvrpn shows how to integrate RTIMULib with vrpn (http://www.cs.unc.edu/Research/vrpn/). The integration code was generously supplied by Lucas Matias Angarola (lucasangarola@gmail.com).

### Setting up vrpn

Download vrpn from:

    http://www.cs.unc.edu/Research/vrpn/downloads/
    
Unzip the file into some directory. Navigate to that directory and enter:

    mkdir build
    cd build
    cmake ..
    make
    sudo make install
    
This will create and install the vrpn libraries.

### Build and run RTIMULibvrpn

Navigate to the RTIMULibvrpn directory and enter:

    make
    sudo make install
    RTIMULibvrpn
    
This will start the vrpn and RTIMULib. To view the output, enter:

    ./<build_directory>/client_src/vrpn_print_devices Tracker0@<ip_address>
    
where <build_directory> is the directory where vrpn was built and <ip_address> is the address of the system running RTIMULibvrpn. If this is run on the same machine, then:

    ./<build_directory>/client_src/vrpn_print_devices Tracker0@localhost
   
works fine.
 
