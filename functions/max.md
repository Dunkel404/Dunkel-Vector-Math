#### **max** - returns the maximum of two scalars or each respective component of two vectors

## Code usage:
`DMath.max(a,b);`

## Math example: 
$$with Scalars:$$

$$c = \begin{cases}  a & \text{if } a > b \\  b & \text{otherwise}  \end{cases}$$

$$with Vectors:$$

$$c_x = \begin{cases}  a_x & \text{if } a_x > b_x \\  b_x & \text{otherwise}  \end{cases}$$
$$c_y = \begin{cases}  a_y & \text{if } a_y > b_y \\  b_y & \text{otherwise}  \end{cases}$$
$$c_z = \begin{cases}  a_z & \text{if } a_z > b_z \\  b_z & \text{otherwise}  \end{cases}$$
$$c=(cx,cy,cz)$$

### parameters:
**a** - { Scalar or vector }
b - { Scalar or vector}

# Description
Returns the maximum of two same-typed scalars a and b or the respective components of two same-typed vectors a and b. The restul is a three-component vector.

# Code Implementation
**abs** implementation for a **float3** vector.

```
float3 max(float3 a, float3 b)
{
  return float3(a.x > b.x ? a.x : b.x,
                a.y > b.y ? a.y : b.y,
                a.z > b.z ? a.z : b.z);
}
```

# Performance Info

max is sometimes recognized as a compiler built-in code in certain graphic compilers.

 When the compiler encounters a call to a built-in function, it can choose to generate inline code to perform the operation instead of a function call, which can lead to more efficient code.

