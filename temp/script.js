const tabs=document.querySelectorAll('[data-tab-target]'); //individual li elements 
const tabcontents=document.querySelectorAll('[data-tab-content]'); // div contents 
tabs.forEach((tab)=>
{
    tab.addEventListener("click",(e)=>
    {
        tabs.forEach((tab)=>{tab.classList.remove("active")});
        tab.classList.add("active");

        const target=document.querySelector(tab.dataset.tabTarget);
        tabcontents.forEach((content)=> {content.classList.remove("active")});
        target.classList.add("active");
    });

});
const hometab=document.querySelector("#home");
hometab.classList.add("active");