const http = require('http');
const fs = require('fs');
const server = http.createServer((req,res)=>{
    // console.log(req.url)
    if(req.url=='/'){

        res.end('hello from the home sides');
    }
    else if(req.url =='/about'){
        res.end('Hello from the about sides');
    }
    else if(req.url =='/contact'){
        res.end('Hello from the contact sides');
    }
    else if(req.url =='/userapi'){
        fs.readFile(`${__dirname}/UserApi/userapi.json`,'utf-8',(err,data)=>{
            if (err) {
                console.error(`Error occurred while reading the file: ${err}`);
              } else {
                console.log(data);
                res.end(data);
              }
        })
        
    }
    else{
        res.writeHead(404,{"content-type":"text/html"});
        res.end('404 page does not exist');
    }
})
server.listen(8000, '127.0.0.1', ()=>{
    console.log('listeninig to the port number 8000');
})