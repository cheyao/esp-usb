# ESP-USB!

17/15

Just made the repo! Gonna merge to master now :333

-----------------

I've started my project, and decided that this is going to be a USB-A board! To save on costs, I've made my own PCB USB A foorprint :D

![](https:/hc-cdn.hel1.your-objectstorage.com/s/v3/d80d4f54c4114677d4d448b1ec4456e86590895b_image.png)

The PCB must be 2.0mm thick and EING plated for this to work tho.

Problem: D+ and D- are crossing...

![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/9f9cec34ffb6fb7508cffd30bc78926ca95d50a8_image.png)

Sooo full speed usb doesn't mind vias & stuff, was too paranoid on icepi zero lol, though I'm going to continue matching impedance.

Okay I've did some impedance calculation for the RF trace that has a coplanar wave guide w/ ground plane. Turns out I need a 0.370612mm trace with a 0.3mm gap:

![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/48bd5e69cfd12062d904cd2485cc070b37d6b070_image.png)
