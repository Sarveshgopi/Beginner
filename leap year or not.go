package main
import "fmt"
func main()
{
    var year int
    _,year:= fmt.scanf("%d",&i)
    if(year%4==0 || (year%100!=0 && year%400==0))
    {
        fmt.print("LEAP YEAR")
    }
    else
    {
        fmt.print("NOT A LEAP YEAR")
    }
}
