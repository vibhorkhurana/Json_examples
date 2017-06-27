var jsonob = {
    device_id:"sample Json",
    measurements:{
        temperature:25,
        humidity:45
    },
    date:"25-05-2014"
};

console.log(jsonob); //to print the object as it is.
//here stringify will change the javascriot object to JSON
var reqJson = JSON.stringify(jsonob," ",4)
console.log("Required JSON is: \n"+reqJson);