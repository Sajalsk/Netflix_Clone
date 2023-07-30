var content = document.getElementById("content");
var show = document.getElementById("show");

show.onclick = function () 
{
  if (content.className == "open") {
    content.className = "";
  }

  else {
    content.className = "open";
    
  }

}

