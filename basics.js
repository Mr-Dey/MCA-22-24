//This is first javascript code
console.log("Hello world");
let name='subhasish'; //reassignable
const lastName= "dey"; //Constant is static, You cant reassign Lastname again after here
// name="LOLOLOL";
let selectedColour=["red","Blue","Green"];
selectedColour[selectedColour.length]="black";
// selectedColour[selectedColour.findIndex]="black";

console.log(selectedColour);

 //Its a function
function loop_a_word(word,times){
    //While loop is dope and same as c
    let x=0
    while (x<times)
    {
    console.log(word);
    x+=1    
    }
}
loop_a_word("Hello mr dey!",100);


