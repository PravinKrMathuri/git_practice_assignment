let num, temp, rev = 0, rem, x = 0;
temp = num = 1221;
while (num != 0) {
  rem = num % 10;
  rev = rev * 10 + rem;
  num = Math.floor(num / 10);
}
if (temp == rev)
  console.log("Yes");
else
  console.log("No");