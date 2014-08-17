mudsling
========

A C++ implementation of a MUD-like game

Read more about the implementation here: https://docs.google.com/a/ldlibra.com/document/d/1kIXaFedalvoZa7UDxZ_ycoGMtPCIIkOx2UCqBUQjjuw/edit

To run the example server, cd into src/ and run this:

```g++ -O3 -o mudsling_server -I../include/dlib-18.9 ../include/dlib-18.9/dlib/all/source.cpp -lpthread -lX11 -L /opt/X11/lib/ -I /usr/X11/include/ server.cpp```
