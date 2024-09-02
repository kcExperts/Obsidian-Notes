Since the parts of an aggregate can also make up other classes, aggregates can have shared ownership over objects of type part. Consider:

![[Pasted image 20240403102542.png]]

Here `Image` displays a still image of the position of a particle on the screen whilst `Video` will play a video of the particle moving across the screen. Now to play the video, it will need a constant feed of updated `Position` objects. Now suppose I start by displaying an `Image` of the particle but then I also want to make a video of it so I feed into `Video` the same `Position` object as the one in `Image`. Then updating the `Position` object for the `Video` will invertedly update the `Image` as well, which is not what we wanted (suppose `Image` had no method to update `Position` whilst `Video` does). 

In essence, one should be careful while using aggregation to ensure that this does not occur. 

