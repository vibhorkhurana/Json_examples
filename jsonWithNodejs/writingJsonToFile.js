var jsonob = {
    device_id:"sample Json",
    measurements:{
        temperature:25,
        humidity:45
    },
    date:"25-05-2014"
};
var file = require("fs");
var fileOpen = file.open("test.json","w",(err,fd)=>{
    if(err)
    {
        console.log( 'error opening file ')
    }
});
var reqJson = JSON.stringify(jsonob," ",4);
var fileWrite = file.writeFile("test.json",reqJson,(err)=>{
    if(err)
    {
        console.log("Error while wriitng the file")
    }
}
);
