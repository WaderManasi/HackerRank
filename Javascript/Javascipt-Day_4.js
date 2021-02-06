//Classes in javascript

class Polygon
{
    constructor(arr)
    {
        this.arr=arr;
    }
  perimeter() {
        return this.arr.reduce((a, b) => a + b);
    }
}   
