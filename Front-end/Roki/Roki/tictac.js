let boxes=document.querySelectorAll(".box");
let resetBtn=document.querySelector("#reset-btn");

let arr0=true;
let arr=["apple", "litchi","pineapple"];
const winpattern=[
    [0,1,2],
    [3,4,5],
    [6,7,8],
    [0,3,6],
    [1,4,7],
    [2,5,8],
    [0,4,8],
    [6,4,2]
]

boxes.forEach((box)=>{
    box.addEventListener("click",()=>{
        console.log("box was clicked:");
        if (arr0){
            box.innerText="0";
            arr0=false;
        }
        else{
            box.innerText="X";
            arr0=true;
        }
        box.disabled=true;
        checkWinner();
    })
})
const checkWinner=(()=>{
    for (let pattern of winpattern){
        console.log(pattern);
        let pos1= boxes[pattern[0]].innerText;
        let pos2= boxes[pattern[1]].innerText;
        let pos3= boxes[pattern[2]].innerText;

        // let pos4= boxes[pattern[3]].innerText;
        // let pos5= boxes[pattern[4]].innerText;
        // let pos6= boxes[pattern[5]].innerText;

        // let pos7= boxes[pattern[6]].innerText;
        // let pos8= boxes[pattern[7]].innerText;
        // let pos9= boxes[pattern[8]].innerText;

        if (pos1!="" && pos2!="" && pos3!=""){
            if (pos1==pos2 && pos2==pos3 && pos3==pos1){
                console.log("winner");  
            }
        }
    }
})