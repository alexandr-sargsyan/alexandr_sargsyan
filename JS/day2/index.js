//1
function UpperCase_1(ttext) {
    const temp1 = ttext.split(" ");
    let temp2 = temp1[0].toUpperCase();
    ttext = ttext.replace(temp1[0], temp2);

    return ttext;
}

let a = "Javascript is a programming language";
console.log(UpperCase_1(a));



//2.1
function subarr (str , count ){
    let temp = str.length % count;
    let temp1 = (str.length - temp) / count;
    let j = temp1;
    let arr = [];
    for (var i = 0; i < str.length - temp ; i+=j ,temp1+= j) {
        arr.push(str.slice(i,temp1));
        
    }

    arr.push(str.slice(i,i+temp))

    return arr;

}

let q = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23];
console.log(subarr(q,9));



//2.2

function subarr (str , count ){
    let temp = str.length % count;
    let j = count;
    let arr = [];
    for (var i = 0 ; i < str.length - temp ; i+=count ,j+= count) {
        arr.push(str.slice(i,j));
        
    }

    arr.push(str.slice(i,i+temp))

    return arr;

}

let q1 = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23];

console.log(subarr(q1,9));



//3

function sumNumberTyp(object){
    let sum = 0;
    for(let key in object){

        if (!isNaN(object[key])){
            sum += object[key];
        };
    }

    return sum;
}

let object = {
    name: "alexandr",
    surname: 'sargsyan',
    a: 10, 
    b: 20, 
    c: 'string', 
    d: 12 
};

console.log(sumNumberTyp(object));



//4
function vowel(str) {
    let temp = 0;
    for (let i of str) {
        if (i == "a" || i == "e" || i == "i" || i == "o" || i == "u" ||
            i == "A" || i == "E" || i == "I" || i == "O" || i == "U") {
            temp++;
        }
    }
    return temp;
}
let b = "Today is the best day of my life ";
console.log('vowel ===', vowel(b));

//5
function SumPozitiveNegative(numbers) {
	let object = {
		positive: 0,
		negative: 0,
	}

	for(let i = 0; i < numbers.length; i++) {
		if(!isNaN(numbers[i])){
            if(numbers[i] < 0) {
		    	object.negative += numbers[i];
		    } else {
		    	object.positive += numbers[i];
		    }
        }
	}
	return object;
}
let arr = [4,5,'alex',-9,6,1,'bek',2,5,'artur',4,-20];
console.log(SumPozitiveNegative(arr));



//7
function anagram(str1, str2) {
    
    if (str1.length !== str2.length) {
        return false;
    }

    for (let i = 0; i < str1.length; i++) {


        for (let j = 0; j < str2.length; j++) {

            if (str1[i] == str2[j]) {
                str1 = str1.replace(i, "");
                str2 = str2.replace(j, "");
                break;
            }
            if (j == str2.length - 1) {
                return false;
            }
        }
    }
    return true;
}

console.log(anagram('rail safety', 'fairy tales'));
console.log(anagram('Hi there', 'Bye there'));
