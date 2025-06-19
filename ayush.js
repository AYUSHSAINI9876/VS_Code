// let number;
// console.log("enter the number: ", number);

// if (number % 5 == 0) {
//     console.log("the number is a multiple of 5.");
// } else(
//     console.log("the number is not a multiple of 5.")
// )

// let marks;
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

// for (let i = 1; i <= 100; i++) {
//     if (i % 2 == 0) {
//         console.log("i")
//     };
// }

// str1 = "ayush";
// str2 = "saini"
// str = str1.concat(str2);
// console.log(str);

// let arr = [85, 44, 97, 37, 50, 76];
// let sum = 0;
// for (let val of marks) {
//     sum += val;
// }
// let avg = sum / marks.length;
// console.log(sum);
// console.log(avg);

// let arr = ["bloomberg", "microsoft", "uber", "google", "ibm", "netflix"]
// console.log(shift.arr)
// arr.splice(2, 1, "ola")

function countvowels(str) {
    let count = 0;
    for (const char of str) {
        if (char === 'a' || char === 'e' || char === 'i' || char === 'o' || char === 'u') {
            count++;
        }
    }
    console.log(char);
    console.log(count);
}