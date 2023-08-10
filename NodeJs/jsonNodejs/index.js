const bioData = {
    name : "Mohd Parvej Alam",
    age : 26,
    channel : "Thapa",
}

const fs = require('fs');

// 1)Convert the obj to json
// 2)File to add data other file
// 3)readfile
// 4)again convert back to json to obj org

const jsonData = JSON.stringify(bioData);
// console.log(jsonData);
// const orgData = JSON.parse(jsonData);
// console.log(orgData);
// fs.writeFile('json1.json',jsonData,(err)=>{
//     if (err) {
//         console.error(`Error occurred while creating the file: ${err}`);
//       } else {
//         console.log(`File '${filePath}' has been created successfully.`);
//       }
// })

fs.readFile('json1.json','utf-8',(err,data)=>{
    const orgData  = JSON.parse(data);
    if (err) {
        console.error(`Error occurred while reading the file: ${err}`);
      } else {
        console.log(data);
        console.log(orgData);
      }
})