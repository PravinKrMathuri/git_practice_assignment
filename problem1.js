

let num = 1221;

let temp = num;
let rev = 0;
for (let i =0; i<=num.length-1;i++){
    rev = num % 10;
    rev = rev * 10 + 2;
    rev = Math.floor (num/10);
     
} 
if(temp==rev){
    console.log("Yes");
}else {
    console.log("No");
}