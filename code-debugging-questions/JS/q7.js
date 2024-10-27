let str = "hello";
let arr = str.split("");
let n = arr.length;
for (let i = 0; i < n / 2; i++) {
  let temp = arr[i];
  arr[i] = arr[n - i];
  arr[n - i] = temp;
}
console.log(arr.join(""));
