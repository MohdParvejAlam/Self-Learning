
const add = (a , b) => {
    return a+b;
};

const sub = (a , b) => {
    return a-b;
};
const mul = (a , b) => {
    return a*b;
};
const div = (a , b) => {
    return a/b;
};

let name = "Parvej Alam"

// module.exports.add= add;
// module.exports.sub=sub;
// module.exports.name=name;

module.exports = {add , sub, mul, div, name};