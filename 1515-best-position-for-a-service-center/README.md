# Best Position for a Service Centre
![](https://camo.githubusercontent.com/858e8f536149809d4ef763c54488c004b3e5bf3623d521f874534b27820acd09/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f446966666963756c74792d486172642d726564)

A delivery company wants to build a new service center in a new city. The company knows the positions of all the customers 
in this city on a 2D-Map and wants to build the new center in a position such that the **sum of the euclidean distances to 
all customers is minimum.**

Given an array ```positions``` where ```positions[i] = [xi, yi]``` is the position of the ```ith``` customer on the map, 
*return the minimum sum of the euclidean distances to all customers.*

In other words, you need to choose the position of the service center ```[xcentre, ycentre]``` such that the following 
formula is minimized:

![](https://assets.leetcode.com/uploads/2020/06/25/q4_edited.jpg)


