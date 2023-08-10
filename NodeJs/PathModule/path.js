const path = require('path');


//to find the  directory
console.log(path.dirname('C:/Users/mohdpala/Desktop/Project/Practice/NodeJs/PathModule/path.js'));

//to find the extension
console.log(path.extname('C:/Users/mohdpala/Desktop/Project/Practice/NodeJs/PathModule/path.js'));

//to find the basename
console.log(path.basename('C:/Users/mohdpala/Desktop/Project/Practice/NodeJs/PathModule/path.js'));

//to return the object 
console.log(path.parse('C:/Users/mohdpala/Desktop/Project/Practice/NodeJs/PathModule/path.js'));


//acces the properties of objects
const myPath = path.parse('C:/Users/mohdpala/Desktop/Project/Practice/NodeJs/PathModule/path.js');
console.log(myPath.name);




