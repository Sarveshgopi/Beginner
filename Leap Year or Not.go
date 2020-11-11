/*              
                        ALGORITHM TO CHECK WHETHER A YEAR IS A LEAP YEAR OR NOT
                          
                        If the given year is divisible by 4 OR divisible by 400 but not 100, then it is known as LEAP YEAR
                         
                         if year%4==0 or (year%400==0 and year%100!=0) then
                                write "LEAP YEAR"
                         else then
                                write "NOT A LEAP YEAR"
                                                                                          */


package main
import "fmt"
// START OF THE SCRIPT

func main()
{
    var year int
    _,year:= fmt.scanf("%d",&i)             //READING THE USER INPUT
    if(year%4==0 || (year%100!=0 && year%400==0))
    {
        fmt.print("LEAP YEAR")
    }
    else
    {
        fmt.print("NOT A LEAP YEAR")
    }
}

// ### END OF THE SCRIPT ### //
