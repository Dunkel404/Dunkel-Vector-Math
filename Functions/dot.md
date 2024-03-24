#### **dot** - returns the scalar dot product of two vectors.

## Code usage:
`DMath.dot(a,b);`

## Math formula: 

$${x} = {a_x · b_x +  a_y · b_y + a_z · b_z}$$

### parameters:
**a** - { First vector }
b - { Second vector}

# Description
Returns the scalar dot product of two same-typed vectors **a** and **b**.

# Code Implementation
**dot** implementation for a **float3** vector.

```
float dot(float3 a, float3 b)
{
  return a.x*b.x + a.y*b.y + a.z*b.z;
}
```

# Performance Info

**dot** is usually very inexpensive, but it can get a little more expensive if used in loops, but nothing that creates major bottlenecks.

