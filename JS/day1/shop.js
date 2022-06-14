
let snickers_count = Number(prompt('how many snickers do yo want ?'));
let snickers_price = 200;

let cola_count = Number(prompt('how many cola do yo want ?'));
let cola_price = 400;

let jermuk_count = Number(prompt('how many Jermuk do yo want ?'));
let jermuk_price = 99.9;

let chocolate_count = Number(prompt('how many chocolate do yo want ?'));
let chocolate_price = 1200;

let candy_count = Number(prompt('how many candy do yo want ?'));
let candy_price = 350;


let client_many = Number(prompt('please pay for your purchases'));

let allOrderPrice = snickers_count * snickers_price + cola_count * cola_price +
    jermuk_count * jermuk_price + chocolate_count * chocolate_price + candy_count * candy_price;



if (!client_many) {
    console.log("wrong amount antry");
}
else if (!allOrderPrice) {
    console.log("you did not buy anything");
}

else if (0 > client_many - allOrderPrice) {
    console.log("your money is not enough to shop");
}
else {

    console.log('all: ', client_many + "dram");
    console.log('surrender: ', client_many - allOrderPrice + "dram");
    console.log('cost: ', allOrderPrice + "dram");
    console.log('products: ');
    !Boolean(snickers_count) || console.log('snickers - ' + snickers_count + "psc - " + snickers_price + "dram");
    !Boolean(cola_count) || console.log('cola - ' + cola_count + "psc - " + cola_price + "dram");
    !Boolean(jermuk_count) || console.log('jermuk - ' + jermuk_count + "psc - " + jermuk_price + "dram");
    !Boolean(chocolate_count) || console.log('chocolate - ' + chocolate_count + "psc - " + chocolate_price + "dram");
    !Boolean(candy_count) || console.log('candy - ' + candy_count + "psc - " + candy_price + "dram");


}





