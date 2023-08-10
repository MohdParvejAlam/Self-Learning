const fs = require('fs');

fs.writeFileSync('bio.txt',"Hello How are you");



//CRUD operations

//create a folder name CrudUsingNode
//fs.mkdirSync("CrudUsingNode");

//creata a file name bio.txt in the CrudUsingNode folder
// fs.writeFileSync('CrudUsingNode/bio.txt','Hello My name is Parvej Alam');

//add more data into the bio.txt file
//fs.appendFileSync('CrudUsingNode/bio.txt',' How are you');

//read the file without gettin buffer data
// const buf_data = fs.readFileSync("CrudUsingNode/bio.txt");
// const org_data = buf_data.toString();
// console.log(org_data);


//rename the file bio to mybio
//fs.renameSync('CrudUsingNode/bio.txt','CrudUsingNode/mybio.txt');


// delete the mybio.txt file
// fs.unlinkSync('CrudUsingNode/mybio.txt');


// delete the folder CrudUsingNode
// fs.rmdirSync('CrudUsingNode');