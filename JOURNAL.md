---
title: "ESP USP"
author: "Cyao"
description: "Tiny esp32 usb dev board"
created_at: "2024-05-17"
---

# ESP-USB - The esp32 dev board that goes straight into your USB port

TOTAL TIME: ~36.5h (Prob more w/ the time i spent at school reading docs...)

## 17/05/25 - Making v1 of the board!

Just made the repo! Real excited for this project: It will be my first RF board!

-----------------

I've started my project, and decided that this is going to be a USB-A board! To save on costs, I've made my own PCB USB A foorprint :D

I've saw this cool on-pcb USB contact on the web a few weeks ago, and it looked real cool. I guess I'll try it out :D

![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/d80d4f54c4114677d4d448b1ec4456e86590895b_image.png)

The PCB must be 2.0mm thick and EING plated for this to work tho.

- Time spent: 1.5h

-----------------

Started the schematic! Also started reading the ESP32 docs on [their site](https://docs.espressif.com/projects/esp-hardware-design-guidelines/en/latest/esp32c3/pcb-layout-design.html#rf), quite a good resource.

Problem: D+ and D- Time spent: are crossing... This will be some emc hell

![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/9f9cec34ffb6fb7508cffd30bc78926ca95d50a8_image.png)

- Time spent: 1h

-----------------

Sooo I asked around and it seems like full speed usb doesn't mind vias & stuff, was too paranoid on my icepi zero lol, though I'm still going to match impedance to make my project high-qality.

Okay I've did some impedance calculation for the RF trace - Time spent: it has a coplanar wave guide w/ ground plane. Turns out I need a 0.370612mm trace with a 0.3mm gap:

![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/48bd5e69cfd12062d904cd2485cc070b37d6b070_image.png)

- Time spent: 1h

-----------------

## 18/05/25 - Compleating v1 and start of v2

Just made the board outline and worked a bit more on the schematic! It's going to be yubikey size atm. I hope that's enough place for all the traces :D

![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/9aab2844d5dfcd605ec18df9afb104715ed6ba58_image.png)

- Time spent: 1h

-----------------

I've managed to reduce the size! Also I found out that the esp32 has limited io pins...

Current progress:

![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/e14b10915268c17fb4942b5ac8fc6c0ebea1bdef_image.png)

Had to read a lot about rf traces, but this was fuuuun.

I'm not really satisfied though, so I am going to redo routing...

- Time spent: 5h

-----------------

Start of v2!!! Quite nice :D This is certanly better start then the last time

![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/89b3835c8fea91cd50a967428c5770f1669340a2_image.png)

I've decided to put the entire rf antenna on the edge with a large keepout to ensure reliable transmission

- Time spent: 4h

-----------------

After a whole afternoon of routing, I'm almost done!!! I've also switched to a 4 layer board since it costs the same.

![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/1d34798af5f7429257562ff5829b0e4cc3bed335_image.png)

The routing and part placement was real tight - Time spent: almost had no place left for a few traces, I also had to fix a few bugs in the schematic

Schematic is here, prettied it up :p 

![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/673a860c1b66dca19a258d45d84fec9f5fc9b2e5_image.png)

- Time spent: 4.5h

-----------------

Now I'm asking for a reddit review :yay: https://www.reddit.com/r/PrintedCircuitBoard/comments/1kptk6i/review_request_tiny_usb_esp32_wifi_board_first/

Wow my reddit post blew up, got 200+ upvotes which is a ton for this sub. I had to respond to a lot of reviews though, and fixed a lot of bad design choices.

Okaaaaaaaaaaaaaaay, so i guess I'm onto v3... A redditor convinced me to do it

- Time spent: 3.5h

-----------------

## 19/05/25 - V3 and final cleanup!

And v3 is done!!!! This is the cristalization of the experience gained from v1 and v2. Love the design this time, though I probably can do better in some places

![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/b19e3f3b8a28b3babceeb8b243d15109274d887f_image.png)
- Time spent: 5h

-----------------

Added some small fixes... It's really important to review your schematic after sleeping. Found a few traces that could be better routed.

![](https://hc-cdn.hel1.your-objectstorage.com/s/v3/0a95e10848faf162e861499aae798dcaf59fbabb_image.png)

- Time spent: 1h

Okay ig I'm done? Time to submit!!!

-----------------

## 29/05/25

Beefed up the readme :dinothumbsup: :p

- Time spent: 1h

-----------------

## 03/07/25
Reflowed ths PCB (multiple times sob)! And posted on reddit :)

https://www.reddit.com/r/PrintedCircuitBoard/comments/1lq77ep/tiny_usb_esp32_wifi_board_came_back_looking_great/

- 7h
