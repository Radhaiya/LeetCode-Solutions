function countAlphabetCharacters(num) {
    // Create an array of the words for the numbers from 1 to 19
    const words1To19 = ['one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight', 'nine', 'ten', 'eleven', 'twelve', 'thirteen', 'fourteen', 'fifteen', 'sixteen', 'seventeen', 'eighteen', 'nineteen'];
  
    // Create an array of the words for the tens from 20 to 90
    const wordsTens = ['twenty', 'thirty', 'forty', 'fifty', 'sixty', 'seventy', 'eighty', 'ninety'];
  
    // Create a variable to store the number of alphabet characters in the written form of the number
    let count = 0;
  
    // Check if the number is less than 20
    if (num < 20) {
      // If the number is less than 20, add the number of alphabet characters in the corresponding word from the words1To19 array
      count += words1To19[num - 1].length;
    } else {
      // If the number is 20 or greater, divide the number by 10 to get the tens digit
      let tens = Math.floor(num / 10);
  
      // If the tens digit is greater than 1, add the number of alphabet characters in the corresponding word from the wordsTens array
      if (tens > 1) {
        count += wordsTens[tens - 2].length;
      }
  
      // Get the ones digit by taking the remainder of the number when it is divided by 10
      let ones = num % 10;
  
      // If the ones digit is not 0, add the number of alphabet characters in the corresponding word from the words1To19 array
      if (ones > 0) {
        count += words1To19[ones - 1].length;
      }
    }
  
    // Add the number of alphabet characters in the word "hundred" if the number is 100 or greater
    if (num >= 100) {
      count += "hundred".length;
  
      // Add the number of alphabet characters in the word "and" if the number is not a multiple of 100
      if (num % 100 !== 0) {
        count += "and".length;
      }
    }
  
    // Return the number of alphabet characters in the written form of the number
    return count;
  }

  
  let total = 0;

// Loop through the numbers from 1 to 600
for (let i = 1; i <= 600; i++) {
    // Add the number of alphabet characters in the written form of the current number to the total
    total += countAlphabetCharacters
}

console.log(total);