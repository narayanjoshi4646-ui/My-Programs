
function SumFactors(iNo)
{
  let iCnt = 0;
  iSum =0;

    console.log("Factors of :",iNo );

  for(let iCnt = 1; iCnt <= iNo/2; iCnt++)
  { 
    if(iNo % iCnt ==0)
  {
    iSum = iSum+ iCnt
  }
}
}
function main()
{
   let iRet = 0
   iRet =  SumFactorsFactors(12);

   console.log("Summation of factors :",iRet);

}

main()