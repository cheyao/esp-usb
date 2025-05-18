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

Just made the board outline! It's going to be yubikey size.

![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/9aab2844d5dfcd605ec18df9afb104715ed6ba58_image.png)

Current progress:

![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/e14b10915268c17fb4942b5ac8fc6c0ebea1bdef_image.png)

I'm not really satisfied so going to redo routing...

Start of v2!!! Quite nice :D

![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/89b3835c8fea91cd50a967428c5770f1669340a2_image.png)

After a whole afternoon of routing, I'm almost done!!! I've also switched to a 4 layer board since it costs the same.

![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/673a860c1b66dca19a258d45d84fec9f5fc9b2e5_image.png)

Schematic is here, prettied it up :p 

![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/673a860c1b66dca19a258d45d84fec9f5fc9b2e5_image.png)

Now I'm asking for a reddit review :yay: https://www.reddit.com/r/PrintedCircuitBoard/comments/1kptk6i/review_request_tiny_usb_esp32_wifi_board_first/
