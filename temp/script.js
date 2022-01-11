const divs=document.querySelectorAll("div");
// console.log(divs);
divs.forEach((div)=>
{
    div.addEventListener("click",function(event)
    {
        console.log(div.classList.value);
        event.stopPropagation();

    },
    {
        // capture:true,
    });

});