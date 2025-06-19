const express = require("express");
const app = express();
const port = 8080;
const path = require("path");


app.use(express.urlencoded({ extendedd: true }));
app.set("view engine", "ejs");
app.set("views", path.join(_dirname, "views"));
app.set(express.static("views", path.join(_dirname, "public")));

app.get("/", (req, res) => {
    res.send("Hello AYUSH...");
});

app.listen(port, () => {
    console.log("Listening to port : 8080");
});