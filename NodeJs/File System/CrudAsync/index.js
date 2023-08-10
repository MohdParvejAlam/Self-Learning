const fs = require('fs');

//create a folder called crud asynch
// fs.mkdir('CrudAsync',(err,data)=>{
//     if (err) {
//         console.error('Error creating folder:', err);
//       } else {
//         console.log('Folder created successfully!');
//       }
// })


//create a file into it name bio.txt and add the data into it
// fs.writeFile('CrudAsync/bio.txt','Hello How are you',(err,data)=>{
//     if (err) {
//         console.error('Error creating file:', err);
//       } else {
//         console.log('File created successfully!');
//       }
// })


//add more data into the file 
// fs.appendFile('CrudAsync/bio.txt',' Yes i am fine',(err,data)=>{
//   if (err) {
//     console.error('Error adding the data into file:', err);
//   } else {
//     console.log('data added successfully!');
//   }
// })


//read tha file without getting the buffer data
//  fs.readFile('CrudAsync/bio.txt','utf-8',(err,data)=>{
//   if (err) {
//     console.error('Error creating folder:', err);
//   } else {
//     console.log(data);
//   }
// })



//rename the bio.txt file to mybio.txt
// fs.rename('CrudAsync/bio.txt','CrudAsync/mybio.txt',(err,data)=>{
//   if(err){
//     console.error('error rename the file');
//   }
//   else{
//     console.log('reaname the file succecssfully');
//   }
// })


//delete the mybio.txt file
// fs.unlinkSync('CrudUsingNode/mybio.txt');


// delete the folder CrudUsingNode
// fs.rmdirSync('CrudUsingNode');