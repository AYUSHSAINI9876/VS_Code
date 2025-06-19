// let a = 6;
// console.log(a);
// let b = 7;
// console.log(b);
// console.log(`The total sum is ${a + b}`);
// console.log("Ayush");

// let number;

// console.log("enter the number: ", number);

// if (number % 5 == 0) {
//     console.log("the number is a multiple of 5.");
// } else {
//     console.log("the number is not a multiple of 5.")
// }
// let marks = 92;
// console.log("enter the marks: ", marks);

// if (marks >= 80 && marks <= 100) {
//     console.log("the student has got A grade.")
// } else if (marks >= 70 && marks <= 79) {
//     console.log("the student has got B grade.")
// } else if (marks >= 60 && marks <= 69) {
//     console.log("the student has got C grade.")
// } else if (marks >= 50 && marks <= 59) {
//     console.log("the student has got D grade.")
// } else(
//     console.log("the student has got F grade.")
// )
// let color = "green";
// if (color == "red") {
//     console.log("Stop");
// }
// if (color == "yellow") {
//     console.log("Slow Down");
// }
// if (color == "green") {
//     console.log("Go");
// }
// let size = 'S';
// if (size == 'XL') {
//     console.log("The price is 250");
// } else if (size == 'L') {
//     console.log("The price is 200");
// } else if (size == 'M') {
//     console.log("The price is 100");
// } else {
//     console.log("The price is 50");
// }
// let str = "ayush";
// if (str[0] === 'a' && str.length > 3) {
//     console.log("The str is a good string");
// } else {
//     console.log("The str is not a good string");
// }
// let day = 7;
// switch (day) {
//     case 1:
//         console.log("Monday");
//         break;
//     case 2:
//         console.log("Tuesday");
//         break;
//     case 3:
//         console.log("Wednesday");
//         break;
//     case 4:
//         console.log("Thursday");
//         break;
//     case 5:
//         console.log("Friday");
//         break;
//     case 6:
//         console.log("Saturday");
//         break;
//     case 7:
//         console.log("Sunday");
//         break;
//     default:
//         console.log("Invalid day");
// }
// alert("This webpage is created by Ayush");
// console.log("This is a message ");
// console.error("This is an error message");
// console.warn("This is a warning message");

// let name = prompt("Enter your name: ");
// let age = prompt("Enter your age: ");
// alert(name + " is " + age + " years old... ");

// let str = "            ayush     ";
// console.log(str);
// newstr = str.trim().toUpperCase();
// console.log(newstr);

// let students = ["ayush", "sachin", "rohit", "virat", "dhoni"];
// let i = 2;
// while (i <= 20) {
//     console.log(i);
//     i += 2;
// }
// let fruits = ["apple", "banana", "orange", "grape", "mango"];

// for (let i = 0; i < fruits.length; i++) {
//     console.log(i, fruits[i]);
// }
// for (let i = fruits.length - 1; i >= 0; i--) {
//     console.log(i, fruits[i]);
// }
//divisibility by 10

// let number = 5;
// if (number % 10 == 0) {
//     console.log("The number is good");
// } else {
//     console.log("The number is bad");
// }

// let quarter = 1;
// switch (quarter) {
//     case 1:
//         console.log("Months in quater " + quarter + ": January,February,March");
//         break;
//     case 2:
//         console.log("Months in quater " + quarter + ": April,May,June");
//         break;
//     case 3:
//         console.log("Months in quater " + quarter + ": July,August,September");
//         break;
//     case 4:
//         console.log("Months in quater " + quarter + ": October,November,December");
//         break;
//     default:
//         console.log("Invalid quarter");
// }

// let str = "Spples";
// if ((str[0] == 'a' || str[0] == 'A') && str.length > 5) {
//     console.log("The string is a golden string");
// } else {
//     console.log("The string is not a golden string");
// }

// let a = 2476,
//     b = 1343,
//     c = 2453;
// let arr = [];
// arr.push(a);
// arr.push(b);
// arr.push(c);
// arr.sort();
// console.log(arr[arr.length - 1]);

// let a = 31,
//     b = 2342;
// if ((a % 10) == (b % 10)) {
//     console.log("The last digit is same i.e. ", a % 10);
// } else {
//     console.log("The last digit is not same");
// }

// let arr = [7, 0, 9, 1, 342];
// let n = 3;
// let ans1 = arr.slice(0, n);
// let ans2 = arr.slice(arr.length - n);
// console.log(ans1);
// console.log(ans2);

// let str = " ";
// if (str.length == 0) {
//     console.log("The string is empty");
// } else {
//     console.log("The string is not empty");
// }

// let i = 0;
// let str = "Ayush";
// if (str[i] >= 'a' && str[i] <= 'z') {
//     console.log("The charecter at index " + i + " is lowercase...");
// } else {
//     console.log("The charecter at index " + i + " is uppercase...");
// }
// let str = " ayush     ";
// let newstr = str.trim();
// console.log("original string : ", str);
// console.log("new string : ", newstr);

// let arr = [1, 2, 4, 3];
// let item = 3;
// if (arr.indexOf(item) == -1) {
//     console.log("The item is not present in the array");
// } else {
//     console.log("The item is present in the array");
// }

// let arr = [1, 2, 3, 4, 5, 6, 7, 8, 9];
// let num = 2;
// for (let i = 0; i < arr.length; i++) {
//     if (arr[i] == num) {
//         arr.splice(i, 1);
//     }
// }
// console.log(arr);

// let num = 35;
// let arr = [];
// while (num > 0) {
//     arr.push(num % 10);
//     num = Math.floor(num / 10);
// }
// console.log(arr.length);

// let num = 35532735;
// let arr = [];
// while (num > 0) {
//     arr.push(num % 10);
//     num = Math.floor(num / 10);
// }
// let sum = 0;
// for (let i = 0; i < arr.length; i++) {
//     sum += arr[i];
// }

// console.log(sum);

// let num = 15;
// if (num == 0 || num == 1) {
//     console.log(1);
// } else {
//     let fact = 1;
//     for (let i = 2; i <= num; i++) {
//         fact *= i;
//     }
//     console.log(fact);
// }

// let arr = [1, 23, 7, 4, 8, 2, 90, 0, 43, 6, 7, 5, 3];
// let largest = 0;
// for (let i = 0; i < arr.length; i++) {
//     if (arr[i] > largest) {
//         largest = arr[i];
//     }
// }
// console.log(largest);

// function sum(num1, num2) {
//     let sum = num1 + num2;
//     console.log("The sum is: ", sum);
// }
// sum(2, 5);

// function avg(num1, num2, num3) {
//     let avg = (num1 + num2 + num3) / 3;
//     console.log("The average is: ", avg);
// }
// avg(2, 3, 7);

// function mul(n) {
//     for (let i = n; i <= 10 * n; i += n) {
//         console.log(i);
//     }
// }
// mul(10);

// function sum(n) {
//     let sum = 0;
//     for (let i = 1; i <= n; i++) {
//         sum += i;
//     }
//     return sum;
// }
// console.log(sum(67));

// let str = ["ayush", "sachin", "rohit", "virat", "dhoni"];

// function concatenate(str) {
//     let newstr = "";
//     for (let i = 0; i < str.length; i++) {
//         newstr += str[i];
//     }
//     return newstr;
// }
// console.log(concatenate(str));

// const student = {
//     name: "ayush",
//     maths: 90,
//     english: 80,
//     hindi: 70,
//     avg() {
//         console.log(this);
//         let avg = (this.maths + this.english + this.hindi) / 3;
//         console.log("The average is: ", avg);
//     }
// }

// try {
//     console.log("This is a try block");
// } catch {
//     console.log("This is a catch block");
// }

//arrow functions

// const sum = (num1, num2) => {
//     let sum = num1 + num2;
//     console.log("The sum is: ", sum);
// }
// sum(45, 32);

//set timeout
// console.log("This is AYUSH");
// setTimeout(() => {
//     console.log("This is a message after 5 seconds");
// }, 5000);
// setInterval(() => {
//     console.log("This is a message after 2 seconds");
// }, 2000);

// const student = {
//         name: "ayush",
//         marks: 90,
//         prop: this,
//         getname: function() {
//             console.log(this);
//             return this.name;
//         },
//         getmarks: () => {
//             console.log(this);
//             return this.marks;
//         }
//     }
//arrow function to return aquare of a number
// const square = (num) => {
//         return num * num;
//     }
//set timeout
// console.log("HELLO WORLD!");

// let id = setInterval(() => {
//     console.log("HELLO WORLD!");
// }, 2000);
// setTimeout(() => {
//     clearInterval(id);
//     console.log("Interval cleared");
// }, 10000);

let url = "https://catfact.ninja/fact";
// fetch(url)
//     .then((res) => {
//         console.log(res);
//         res.json().then((data) => {
//             console.log(data);
//         })
//     })
//     .catch((err) => {
//         console.log("error-", arr);
//     });

// async function getfacts() {
//     let res = await fetch(url);
//     console.log(res);
// }

// let randint = Math.floor(Math.random() * 6) + 1;
// console.log(randint);

// const person = {
//     name: "AYUSH",
//     age: "20",
//     city: "UP"
// };
// person.city = "New York";
// person.country = "USA";
// console.log(person);

// let arr = [1, 2, 3, 5, 4, 7];
// let val = 3;
// for (let i = 0; i < arr.length; i++) {
//     if (arr[i] > val) {
//         console.log(arr[i]);
//     }
// }

// let str = "adfsasaddgsfdarfgsdfd";
// let ans = "";
// for (let i = 0; i < str.length; i++) {
//     let currchar = str[i];
//     if (ans.indexOf(currchar) == -1) {
//         ans += currchar;
//     }
// }
// console.log(ans);

//longest name
// let country = ["Australia", "Germany", "United States of America"];
// let ind = 0;
// for (let i = 0; i < country.length; i++) {
//     let anslen = country[ind].length;
//     let currlen = country[i].length;
//     if (currlen > anslen) {
//         ind = i;
//     }
// }
// console.log(country[ind]);

//count of vowels
// let str = "Aakanksha";
// let count = 0;
// for (let i = 0; i < str.length; i++) {
//     if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
//         count++;
//     }
// }
// console.log(count);

//random number in any range
// let st = 2,
//     end = 50;
// let randint = Math.floor(Math.random() * (end - st)) + st;
// console.log(randint);

//arrow function
// const avgfunc = (arr) => {
//     let sum = 0;
//     for (let i = 0; i < arr.length; i++) {
//         sum += arr[i];
//     }
//     return sum / arr.length;
// }
// let arr = [4, 3, 55, 3];
// console.log(avgfunc(arr));

// const func = (num) => {
//     if (num % 2 == 0) {
//         return "even";
//     }
//     return "odd";
// }
// let num = 20;
// console.log(func(num));

// const object = {
//     message: 'Hello World!',
//     logmessage() {
//         console.log(this.message);
//     }
// };
// setTimeout(object.logmessage, 1000);

// let len = 3;

// function callback() {
//     console.log(this.length);
// }
// const object = {
//     length: 5,
//     method(callback) {
//         callback();
//     },
// };
// object.method(callback, 1, 2);

// let arr = [1, 2, 4, 6, 7];
// const sqr = arr.map(num => (num * num));
// console.log(sqr);
// let sum = sqr.reduce((acc, cur) => acc + cur, 0);
// let avg = sum / arr.length;
// console.log(sum);
// console.log(avg);

// let arr = [1, 2, 4, 6, 7];
// const plusFive = arr.map(num => (num + 5));
// console.log(plusFive);

// let arr = ["ayush", "avi", "ani"];
// const toUpper = arr.map(str => (str.toUpperCase()));
// console.log(toUpper);

// const doubleAndReturnsArgs = (arr, ...args) => [
//     ...arr,
//     ...args.map((v) => (v * 2)),
// ];
// doubleAndReturnsArgs([1, 2, 3], 4, 4);
// doubleAndReturnsArgs([2], 10, 4);

// const mergeObjects = (obj1, obj2) => ({...obj1, ...obj2 });
// mergeObjects({ a: 1, b: 2 }, { c: 3, d: 4 });

// let button = document.createElement("button");
// let input = document.createElement("input");
// button.innerHTML = "click me";
// document.querySelector("body").append(input);
// document.querySelector("body").append(button);
// button.setAttribute("id", "btn");
// input.setAttribute("placeholder", "username");

// let btn = document.querySelector("#btn");
// btn.classList.add("btnStyle");

// let h1 = document.createElement("h1");
// h1.innerHTML = "<u>DOM PRACTICE</u>";
// document.querySelector("body").append(h1);

// let p = document.createElement("p");
// p.innerHTML = "AYUSH SAINI <b>THE BOSS</b>";
// document.querySelector("body").append(p);

class mammal {
    constructor(name) {
        this.name = name;
        this.type = "warm-blooded";
    }
    eat() {
        console.log("I'm eating.");
    }
}
class Dog extends mammal {
    constructor(name) {
        super(name);
    }
    bark() {
        console.log("woofff");
    }
}

class Cat extends mammal {
    constructor(name) {
        super(name);
    }
    meow() {
        console.log("meowwww");
    }
}