// ------------- First Solution -------------
/*
var isPalindrome = function (x) {
  y = x.toString();

  let stop = Math.floor(y.length / 2);
  if (y.length % 2 == 0) stop = y.length / 2 - 1;

  for (let idx = 0; idx <= stop; ++idx) {
    if (y[idx] !== y[y.length - idx - 1]) return false;
  }
  return true;
};
*/

// ------------- Second Solution -------------
var isPalindrome = function (x) {
  return x == `${x}`.split("").reverse().join("");
};

// 121 => 1 2 1 => 1 2 1 => 121 .. 121 == 121 ? true
