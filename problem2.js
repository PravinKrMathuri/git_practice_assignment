let num = 7, count = 0;
for (i = 2; i <= num / 2; i++)
  if (num % i == 0)
    count++;

if (count == 0)
  console.log("Prime")
else
  console.log("Not Prime")