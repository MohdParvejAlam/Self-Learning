//Declation of array

let book = ["Chemistry", "Physucs", "Bio", "Math"];
//  let book1 = new Array("Chemistry", "Physucs", "Bio", "Math","Geo");
//   book1[0] = "Science";
//  let asset = [1, 2, 1.5, 5,"Math"];

//  console.log(book1);

//Operations on array

//book.push("Science");
//book.unshift("Hindi");
// book.pop();
// book.
// console.log(book);


function add(){
    let sum=0;
    if(arguments.length==0){
        console.log("No arguments are there");
    }
    else{
    for(let i=0;i<arguments.length;i++){
            sum=sum+arguments[i];
        }
    }
    console.log(sum);
}

let addition = add;

addition(3, 6);

add(2,5,9,7);