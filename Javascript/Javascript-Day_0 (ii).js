//Datatypes

function performOperation(secondInteger, secondDecimal, secondString) {
    const firstInteger = 4;
    const firstDecimal = 4.0;
    const firstString = 'HackerRank ';
    const sumInt=firstInteger+(+secondInteger);
    const sumDec=firstDecimal+(+secondDecimal);
    const sumStr=firstString+secondString;

    console.log(sumInt);
    console.log(sumDec);
    console.log(sumStr);
}
