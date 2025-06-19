let gameseq = [];
let userseq = [];
let started = false;
let level = 0;
let buttons = ["red", "blue", "green", "yellow"];
let h2 = document.querySelector("h2");
document.addEventListener("keypress", function() {
    if (started == false) {
        console.log("Game started");
        started = true;
        levelup();
    }
});

function buttonflash(btn) {
    btn.classList.add("flash");
    setTimeout(function() {
        btn.classList.remove("flash");
    }, 250);
}

function levelup() {
    level++;
    h2.innerText = `Level ${level}`;
    let randIndex = Math.floor(Math.random() * 3);
    let randColor = buttons[randIndex];
    let randbtn = document.querySelector(`.${randColor}`);
    // console.log(randIndex);
    // console.log(randColor);
    // console.log(randbtn);
    gameseq.push(randColor);
    console.log(gameseq);
    buttonflash(randbtn);
}

function checkans(ind) {
    // console.log("current level: ", level);
    // let ind = level - 1;
    if (userseq[ind] === gameseq[ind]) {
        if (userseq.length === gameseq.length) {
            console.log("correct");
            setTimeout(function() {
                userseq = [];
                levelup();
            }, 1000);
        }
    } else {
        h2.innerHTML = `Game Over! Your score was <b>${level}</b></br> Press Any Key to Restart.`;
        document.querySelector("body").style.backgroundColor = "red";
        setTimeout(function() {
            document.querySelector("body").style.backgroundColor = "white";
        })
        reset();
    }
}

function btnpressed() {
    console.log(this);
    buttonflash(btn);
    usercolor = btn.getAttribute("id");
    // console.log(usercolor);
    userseq.push(usercolor);
    checkans(userseq.length - 1);
}
let allbtns = document.querySelectorAll(".btn");
for (btn of allbtns) {
    btn.addEventListener("click", btnpressed);
}

function reset() {
    started = false;
    gameseq = [];
    userseq = [];
    level = 0;
}