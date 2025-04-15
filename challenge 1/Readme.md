The approach to this problem is pretty straight forward, we just need to implement the conditions using if statements.
If the number is multiple of 3, we print Foo
If the number is multiple of 5, we print Baa
If the number is simulteneously multiple of 3 and 5, we print FooBaa (which is the concatenation of the above strings).
Else, we just print the number.
If we think in a naive way, we just translate these statements to C/C++, but we can code this with just 3 checks.
Taking advantage of the string concatenation mentioned above, if the number is multiple of 3 and 5, the conditions in lines 5 and 6 will be true, so we will have FooBaa.