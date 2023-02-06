// function leap(year){
//     if(year%4 === 0)
//         console.log("LEAP YEAR");
//     else if(year%100 !== 0)
//         console.log("NOT LEAP YEAR");
//     else if(year%400 === 0)
//         console.log("LEAP YEAR");
// }

// leap(2009);

function fizz(){
    var output = [];
    for(i = 1;i<=100;i++){
        if(i%3 === 0 && i%5 === 0)
            output.push("FizzBuzz");
        else if(i%3  === 0)
            output.push("Fizz");
        else if(i%5 === 0)
            output.push("Buzz");
        else    
            output.push(i);
    }
    console.log(output);
}

fizz();