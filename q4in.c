int fact5;
int factorial(int n){
int val;
if(n>1){
val=n*factorial(n-1);
return val;}
else
{
return(1);}}
int main()
{
printf("Factorial program");
fact5=factorial(5);
printf("fact5=%d",fact5);
return 0;
}
