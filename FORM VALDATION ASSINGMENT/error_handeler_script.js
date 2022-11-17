// This function will throw an error message if condition isnt satisfied in 'validationForm' function
function seterror(div_id, error_class, error) {
    var element = document.getElementById(div_id);
    element.getElementsByClassName(error_class)[0].innerHTML = error;
}

// This is the main funtion. It'll start after user press submit button.
// This function will catch user input in a variable and check whether all condition is satisfird or not.
// if all condition satisfied it'll accept submition else itll call 'seterror' function.
// if return value of validationform is true, submit button will accept all data. else it will not accept data.
function validationForm() {
    var returnval = true;
    var f_name = document.getElementById('f_name').value;
    var l_name = document.getElementById('l_name').value;
    var mof_name = document.getElementById('mof_name').value;
    var mol_name = document.getElementById('mol_name').value;
    var faf_name = document.getElementById('faf_name').value;
    var fal_name = document.getElementById('fal_name').value;
    var address = document.getElementById('yr_address').value;
    var hobby = document.getElementById('yr_hobby').value;


    // here iv'e used if or statement
    if (f_name.length > 15 || isNaN(f_name) == false) {
        seterror("stu_name", "formError_sf", "INVALID!*");
        returnval = false;
    }

    if (l_name.length > 12 || isNaN(l_name) == false) {
        seterror("stu_name", "formError_sl", "INVALID!*.");
        returnval = false;
    }
    if (mof_name.length > 15 || isNaN(mof_name) == false) {
        seterror("stu_mo_name", "formError_mf", "INVALID!*");
        returnval = false;
    }

    if (mol_name.length > 12 || isNaN(mol_name) == false) {
        seterror("stu_mo_name", "formError_ml", "INVALID!*.");
        returnval = false;
    }
    if (faf_name.length > 15 || isNaN(faf_name) == false) {
        seterror("stu_fa_name", "formError_ff", "INVALID!*");
        returnval = false;
    }

    if (fal_name.length > 12 || isNaN(fal_name) == false) {
        seterror("stu_fa_name", "formError_fl", "INVALID!*.");
        returnval = false;
    }

    if (address.length < 5 || isNaN(address) == false) {
        seterror("stu_address", "formError_address", "Please Enter full address*");
        returnval = false;
    }
    if (hobby.length == 0) {
        seterror("stu_hobbies", "formError_hobby", "Enter your Hobbies*");
        returnval = false;
    }

    // returnval is Boolean here, it meanes either its true or false.
    return returnval;
}
