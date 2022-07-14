const path = require("path");
const fs = require("fs");
const express = require("express");
// const server = require("server");
const cors = require("cors");


let users = [{userName:"alex17",isActive:false},{userName:"ani03",isActive:false}]

let user;

const server = express();
server.use(cors())
server.use(express.json());

server.post("/user", (req, res) => {

    console.log(req.body,"99999999999999999999999");       // stex piti stananq et imputy

});

server.get("/", (req, res) => {
    fs.promises.readFile(path.resolve("alex17"), "utf8").then((todos) => {
        console.log(todos)
        res.send(todos);
    })

})

server.post("/", (req, res) => {
    fs.promises.writeFile(path.resolve("alex17"), JSON.stringify(req.body, undefined, 2))
    console.log(req.body);
});


server.listen(3020);

