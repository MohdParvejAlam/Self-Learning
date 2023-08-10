const fs = require("fs");

//create a file read.txt
// fs.writeFile('read.txt','Hello Sir What are you doing :)',(err)=>{
//     if (err) {
//         console.error('Error creating folder:', err);
//       } else {
//         console.log('File created successfully!');
//       }
// });

//add data to read.txt file
// fs.appendFile(
//   "read.txt",
//   "Nothing! I am just thinking how to solve this problem usinf recursive:",
//   (err) => {
//     if (err) {
//       console.error("Error creating folder:", err);
//     } else {
//       console.log("Data added successfully!");
//     }
//   }
// );


//read the read.tst file
fs.readFile('read.txt','utf8',(err,data)=>{
    console.log(data);
});

