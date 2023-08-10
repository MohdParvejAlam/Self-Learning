const chalk = require("chalk");

// console.log(chalk.blue("Hello World"));

var validator = require('validator');

const res = validator.isEmail('foo@bar.com');

console.log(res ? chalk.green.inverse(res) : chalk.red.inverse(res));