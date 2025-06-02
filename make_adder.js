function makeAdder(x) {
  return function(y) {
    return x + y;
  };
}

const adderThree = makeAdder(3);
console.log(adderThree(4));
console.log(adderThree("JS"));

function scopeDemo() {
  var a = 10;
  if (true) {
    var a = 20;
    let b = 30;
  }
  console.log(a);
}

scopeDemo();
