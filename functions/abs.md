#### **abs** - Returns absolute value of scalars and vectors.

## Code example:
`DMath.abs(a);`

## Math example: 
$$Symbol: |a|$$

$$|-3| = 3$$
$$|2| = 2$$
![abs.webp](../source/abs.webp)


### parameters:
**a** - { Value to determine the absolute value to be returned. } 

# Description
Returns the absolute value of a scalar or vector.

The absolute value, or modulus, represents the distance from a scalar to 0

# Code Implementation
**abs** implementation for a **float**.

```
float abs(float a)
{
	return max(-a, a)
}
```
# Performance Info

Abs is extremely inexpensive in coding. 

# references
[max](./max.md)
