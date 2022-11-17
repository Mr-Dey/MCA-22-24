function seterror(id, error) {
    var element = document.getElementById(id);
    element.getElementsByClassName("formError")[0].innerHTML = error;
}


function validationForm() {
    var returnval = true;
    var f_name = document.getElementById('f_name').value;
    var l_name = document.getElementById('l_name').value;
    var mof_name = document.getElementById('mof_name').value;
    var mol_name = document.getElementById('mol_name').value;
    var faf_name = document.getElementById('faf_name').value;
    var fal_name = document.getElementById('fal_name').value;
    
    if (f_name.length >15 || isNaN(f_name)==false) {
        seterror("stu_name","Please enter a valid name.");
        console.log(f_name);
        returnval=false;    
    }




  return returnval;  
}
