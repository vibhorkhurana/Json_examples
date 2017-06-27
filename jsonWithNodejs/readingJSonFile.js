//Codeto read a JSON object from file and display on screen

var file = require('fs');
var rawData = file.readFileSync("payload.json");
var data = JSON.parse(rawData)
console.log(data.d.type);