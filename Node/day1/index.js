import { pbkdf2 } from "crypto";
import express from "express";
import path from "path";


const p1 = express();
p1.listen(3001);
p1.use(express.static("public"))

p1.get("/alex", (rec, res) => {
    res.send({
        name: "Alex",
        surname: "Aargsyan",
        age: 24,
    })
})

p1.get("/hello", (rec, res) => {
    res.send("Welcome !!!");
})



p1.get("/", (rec, res) => {
    res.sendFile(path.resolve("public/index.html"))
})

