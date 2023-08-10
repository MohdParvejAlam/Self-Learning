const express = require('express');
const app = express();
const path = require('path');

const staticPath = path.join(__dirname,'../public');


//relative absolute
//console.log(__dirname);

//builtin middleware
app.use(express.static(staticPath));

app.get('/',(req,res)=>{
    res.send('hello world from the express js');
})

app.get('/about',(req,res)=>{
    res.send('hello world from the about page');
})

app.listen(8000,()=>{
    console.log("listening to the port number 8000");
})