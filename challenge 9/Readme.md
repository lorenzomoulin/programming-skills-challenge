The implementation is based on the XOR reverse algorithm. Chars are represented by single bytes, so it is actually an 8-bit integer. The XOR operation can store the differences of each bit of two numbers. Let's say we have a ^ b = c. If we do a ^ c we get b, because c = a ^ b, so a ^ (a ^ b) = (a ^ a) ^ b = 0 ^ b = b. And if we do b ^ c we get a, by the same reason. In this way, we can swap two numbers without a temporary variable, for example, let's swap(a, b): 
1 -> a = a ^ b; We temporarily store a ^ b in a. 
2 -> b = a ^ b; Now b has the original a value.
3 -> a = a ^ b; Now a has the original b value.
So to reverse a string, we maintain a pointer to start and end, swap(start, end) while start < end.