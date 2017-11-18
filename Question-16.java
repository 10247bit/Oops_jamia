import java.util.Scanner;

class calculator
{
	public Double memory=0.00;

	 void updateMemory(Double num)
	{
		memory=memory+num;
	}

	public Double addition(Double num1,Double num2)
	{
		return num1+num2;
	}
	public Double substraction(Double num1,Double num2)
	{
		return num1-num2;
	}
	public static void main(String args[])
	{
		calculator c=new calculator();
		Scanner s = new Scanner(System.in);
		Double number1,number2,lastOperation=0.00;		
		char ch;
		int flag=1;
		while(flag!=0)
		{
			System.out.println("Number-1");
			number1=s.nextDouble();

			System.out.println("Number-2");
			number2=s.nextDouble();

			System.out.println("Operator");
			ch=s.next().charAt(0);

			if(ch=='+')
			{
				lastOperation=c.addition(number1,number2);
				System.out.println("The sum of " + number1 + " and " + number2 + " is - " + lastOperation);
			}
			else if(ch=='-')
			{
				lastOperation=c.substraction(number1,number2);
				System.out.println("The difference of " + number1 + " and " + number2 + " is - " +lastOperation);
			}
			else
			{
				c.updateMemory(lastOperation);
				System.out.println("The memory value is - " + c.memory);

			}

			System.out.println("Continue?");
			flag=s.nextInt();

		}
	}
}