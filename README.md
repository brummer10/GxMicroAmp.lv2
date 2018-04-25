# GxMicroAmp.lv2
The MicroAmp is designed to be a transparent clean volume booster.

![GxMicroAmp](https://raw.githubusercontent.com/brummer10/GxMicroAmp.lv2/master/GxMicroAmp.png)


###### BUILD DEPENDENCY’S 

the following packages are needed to build GxMicroAmp:

- libc6-dev
- libgtk2.0-dev
- libstdc++6-dev
- lv2-dev

note that those packages could have different, but similar names 
on different distributions. There is no configure script, 
make will simply fail when one of those packages isn't found.

## BUILD 

$ make install

will install into ~/.lv2

$ sudo make install

will install into /usr/lib/lv2

