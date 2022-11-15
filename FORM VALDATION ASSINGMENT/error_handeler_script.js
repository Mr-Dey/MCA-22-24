function seterror(id, error) {
    var element = document.getElementById(id);
    element.getElementsByClassName("formError")[0].innerHTML = error;

}

function validationForm() {
    var returnvalue = true;
    var name = document.forms["myForm"]["f_name"].value;
    if (isNaN(name)){
        null;
    }
    else{
        seterror("stu_name", "Please enter your name.");//this is id and error message!
    }

    
    // addEventListener("click",function(event){event.preventDefault()});
    // return returnvalue;

}