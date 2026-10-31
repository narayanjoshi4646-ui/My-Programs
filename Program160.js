
class Demo
{

  constructor(A,B)
  {
    this.No1 = A;
    this.No2 = B
    console.log("Inside constructor")
  }
  Display()
  {
    console.log("Inside display")
  }
}

function main()
{
  dobj1 = new Demo(11,21)
  
  console.log(dobj.No1)
  console.log(dobj.No2)

  dobj.Display();
}

main()