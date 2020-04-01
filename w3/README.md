# Python Challenge

Man this was fun!!!

Even as a veteran Python dev, this has its fair share of challenges, especially since it's mostly about the base modules versus the packages that I'm used to. Great fun to work this together with Mark on the more difficult ones, too.

### Challenge 0:
Try to change the address. This took forever. I almost outsmarted myself and used Selenium to manipulate the browser.

But, just using Python to calculate 2^38 and using that in the URL manually was the trick.

### Challenge 1:
A photo of 6 letters with arrows between them clearly representing a Caesar cipher. I used a for-in ennumerate loop to build the full cipher and applied another for loop to make a new string.

This worked, but the translation had a hint to use string.maketrans() and string.translate() which was indeed easier.

### Challenge 2:

The hint said the characters we want were in the page source. There's a big string of garbled characters, and instructions to find rare ones. Ok. That's a job for collections counter. The characters [e,q,u,a,l,i,t,y] all have only 1 instance. Equality!

### Challenge 3:
Picture of candles. One small letter surrounded by exactly 3 big bodyguards on each of its sides.

aAAAaAAAa should be what we look for. 

Can use string.islower() and string.isupper() with a shifting slice window. Code is in the page source comments again. This time, rather than copy and pasting manually, I'll use beautiful soup and requests to grab that comment text.

Then validate each sliding window, printing out the small character within the middle.

linkedlist!

### Challenge 4:
http://www.pythonchallenge.com/pc/def/linkedlist.html

http://www.pythonchallenge.com/pc/def/linkedlist.php

There's a picture of wooden toys... sawing? Title text is "follow the chain" and the source code has the hint: "urllib may help. DON'T TRY ALL NOTHINGS, since it will never end. 400 times is more than enough." Clicking the image leads to http://www.pythonchallenge.com/pc/def/linkedlist.php?nothing=12345 and a message with a line to the next nothing. Clearly indicating I should keep going. Very well! Requests again!

### Challenge 5:
Peak hell!

There's a pickle file in the source code. Must download and process. Can download with requests again, and use the pickle file to process.

It was a 2-d list, with characters and the number of repetitions of that character per row. Had to essentially pretty print it.

And it came up with "channel"

### Challenge 6:
"now there are pairs"

Source code has <--zip-->
http://www.pythonchallenge.com/pc/def/zip.html says "yes. find the zip."
http://www.pythonchallenge.com/pc/def/channel.zip is where it lives. 
But, pairs? Are there 2?

In the zip, there's a bunch of text files. And a readme.txt.
Readme says start at 90052, and answer is inside the zip. Ok... a lot more next nothings.

Then a note to look into the comments. Mark discovered that zipped files have comments! Major breakthrough. Then just draw the contents of the comments.

### Challenge 7:
http://www.pythonchallenge.com/pc/def/hockey.html
http://www.pythonchallenge.com/pc/def/oxygen.html

It's an image with a greyscale band across the center. Title smarty. No other content. A "center" tag but that's it.

The greyscale images clearly are what we're after here. Using Pillow to get the greyscale values and converting to Ascii got the next step.