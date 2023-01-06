function getFridayThe13ths() {
    const fridayThe13ths = [];
  
    for (let year = 2001; year <= 2099; year++) {
      for (let month = 0; month < 12; month++) {
        const date = new Date(year, month, 13);
        if (date.getDay() === 5) {
          fridayThe13ths.push(date);
        }
      }
    }
  
    return fridayThe13ths;
  }
  
  const fridayThe13ths = getFridayThe13ths();
  console.log(fridayThe13ths.length);