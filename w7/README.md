# Week 7 - Explore Deep Dream and Neural Style Transfer

Week 7's labs were to explore (Deep Dream)[https://research.google.com/seedbank/seed/deepdream] and (Neural Style Transfer)[https://research.google.com/seedbank/seed/neural_style_transfer_with_tfkeras] with Tensorflow and Keras, and some (additional examples)[https://colab.research.google.com/notebooks/intro.ipynb#scrollTo=P-H6Lw1vyNNd].

### Neural Style Transfer

First, I tackled NST. I'm still not entirely sure how it works, but I am sure how to use it. This example we went through is utilizing a pre-trained VGG19 model, which is simpler than ResNet and better for this sort of task. The features are less precise. 

The code required some massaging to get working on my local machine. Colab has some automagic macros within it specifically for TensorFlow. For example, the line `%tensorflow_version 1.x` doesn't work locally, and must be replaced with 

```
import tensorflow.compat.v1 as tf

tf.disable_v2_behavior()
```

There's a style source image, for which I used a Hubble image of a stellar nursery. Not the Pillars of Creation. Or perhaps a newer one. At any rate, it's not the famous image! I found a cat image with some interesting contrast in colors and objects in frame to be the content image. The resulting image worked quite well, although my partner didn't recognize it as a cat. Below are the source images and the final output image.

!(cat image)[catsunscreen_thesun.jpg]
!(stars image)[starnursery.jpg]
!(output image)[meow.png]

Image source: https://www.spacetelescope.org/images/opo0932a/
Image source: https://www.thesun.co.uk/news/9206031/suncream-cats-dogs-heatwave-burns/ 

### DeepDream

Next, DeepDream. The "trippy" one. This workbook also needed these lines added:
```
import tensorflow.compat.v1 as tf

tf.disable_v2_behavior()
```

The control surfaces are interesting in DeepDream. Defaut settings: Octave_n=4, octave_scale=1.4, iter_n=10, strength=200, layer=mixed4c, feature_channel = 139, and layer=mixed4d_3x3_bottleneck_pre_relu. The latter two control each individual neuron's activity. 

Feature channel seems to control what kind of "thing" makes up the palette. For example, 42 uses what can be described as wrinkles. This may be an incorrect assumption. 

!(wrinkly dog)[wrinklydog.jpg]

Re-running the notebook with the cat, the out-of-focus areas of the image get rendered with creepy lizard eyes. Just a wall of them. 

!(lizard wall)[lizardwall.jpg]

And alternatively, this version looks like it's made of fabric, after tweaking feature channel 125 and layer mixed4d_3x3_bottleneck_pre_relu.

!(fabric kitty)[fabrickitty.jpg]

Of the two approaches, I think that Neural Style Transfer is the more predictable approach, and probably more useful as a result. Both approaches certainly don't treat "style" like humans do, which is good to be aware of. 

And why always eyeballs? Guess the training set didn't have much exposure to round-shaped but non-eye objects. Even the cat's eye isn't made of ONE eyeball but at least 3. 