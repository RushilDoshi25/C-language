/* pattern
1 
22 
333 
4444 
55555 
444 
333 
22 
1
*/

#include <stdio.h>
void main()
{
int r, c;
for (r = 1; r <= 5; r++)
{
for (c = 1; c <= r; c++)
{
printf("%d ", r);
}
printf("\n");
}
for (r = 4; r >= 1; r--)
{
for (c = r; c >= 1; c--)
{
printf("%d ", r);
}
printf("\n");
}
}
