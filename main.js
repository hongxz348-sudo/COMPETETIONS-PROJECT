const goTop_Btn = document.getElementById("Anchor-btn");
window.addEventListener("scroll",()=>{
    if (window.scrollY===0) {      //check scrolling on  the screen
        goTop_Btn.style.display = "none";
    } else {
        goTop_Btn.style.display = "block";
    }
});

