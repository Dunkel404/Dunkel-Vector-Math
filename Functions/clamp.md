#### **clamp** - returns smallest integer not less than a scalar or each vector component.


## Code usage:
`DMath.clamp(x,a,b);`

## Math formula: 
$$\text{x} =  \begin{cases}  a & \text{if } x < a \\  b & \text{if } x > b \\  x & \text{otherwise}  \end{cases}​$$


### parameters:
x - { Scalar or vector to be clamped }
**a** - { Scalar or vector for bottom of clamp range }
b - { Scalar or vector for top of clamp range }

# Description
Returns **x** clamped to the range [a,b] as follows:

1) Returns **a** if **x** is less than **a**; else

2) Returns **b** if **x** is greater than **b**; else

3) Returns **x** otherwise.

For vectors, the returned vector contains the clamped result of each element of the vector **x** clamped using the respective element of vectors **a** and **b**.

# Code Implementation
**clamp** implementation for a **float** scalar.

```
float clamp(float x, float a, float b)
{
  return max(a, min(b, x));
}
```

# Performance Info

**Clamp** is extremely inexpensive in coding. 

# references
[max](./max.md),[min](./min.md)