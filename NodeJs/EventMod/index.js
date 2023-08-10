const EventEmitter = require('events');
const event = new EventEmitter();

event.on('sayName',()=>{
     console.log("Your name is Parvej");
})
event.on('sayName',()=>{
    console.log("Your name is Alam");
})
event.on('sayName',()=>{
    console.log("Your name is Aman");
})
// event.emit('sayName');

event.on('checkPage',(sc,msg)=>{
    console.log(`status code is ${sc} and the page is ${msg}`)
})
event.emit('checkPage',200,'ok');