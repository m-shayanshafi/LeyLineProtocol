## LeyLine Protocol => A routing protocol for wireless sensor networks

This repository contains the implementation of the [LeyLine Protocol](). It has implementations of AODV and S4 to be used as a baseline comparison.

The protocols are implemented in nesC and can be run on nodes running TinyOS. Alternatively, simulators like [TOSSIM](http://tinyos.stanford.edu/tinyos-wiki/index.php/TOSSIM) and [Cooja](https://sens-space.blogspot.com/2014/11/contki-and-cooja-installation-in-ubuntu.html) can be used to simulate the running of the protocol.

### Requirements:
You will have to setup the following to be able to run a simulation. The links contain guides on how to install and setup the following:.

1. [TinyOS](http://tinyos.stanford.edu/tinyos-wiki/index.php/TOSSIM)
2. [TOSSIM](http://tinyos.stanford.edu/tinyos-wiki/index.php/TOSSIM)
3. [Cooja](https://sens-space.blogspot.com/2014/11/contki-and-cooja-installation-in-ubuntu.html) 

### Compiling:

After the setup instructions are completed, you can use the following command to compile one of the above protocols:

```
make micaz sim
```

The compile command should be run in ``LeyLine/LeyineTest``, ``AODV/apps/AODV25nodeTest`` or  `s4-tinyos-2.x/apps/TestS4Simple``. If setup is done correctly, each of the above protocols should compile without errors. 

### Simulation:

#### TOSSIM

To simulate the protocol using TOSSIM, you will need to write a simulation script in Python. Sample simulation scripts are available at ``LeyLine/LeyLineTest/testOverhead.py`` and ``LeyLine/LeyLineTest/test.py``

Run the python script e.g `` python testOverhead.py`` to run the script.

#### Cooja

To simulate the protocol, using Cooja please follow the guide [here](https://sens-space.blogspot.com/2014/11/contki-and-cooja-installation-in-ubuntu.html)
