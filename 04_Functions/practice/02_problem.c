#include <stdio.h>
// convertion of temperature units

void print_available_convertions()
{
    printf("You can convert the temperatures through this system!!\n");
    printf("Type '01' to convert Celsius to Fahrenheit & '10' to reverse\n");
    printf("Type '02' to convert Celsius to Kelvin & '20' to reverse\n");
    printf("Type '03' to convert Kelvin to Fahrenheit & '30' to reverse\n");
}

float celsius_To_fahrenheit(float temp)
{
    return (9 * temp / 5) + 32;
}

float fahrenheit_To_celsius(float temp)
{

    return 5 * (temp - 32) / 9;
}

float celsius_To_kelvin(float temp)
{

    return temp + 273;
}

float kelvin_To_celsius(float temp)
{

    return temp - 273;
}

float kelvin_To_fahrenheit(float temp)
{

    return celsius_To_fahrenheit(kelvin_To_celsius(temp));
    // return (9 * (temp - 273) / 5) + 32;
}

float fahrenheit_To_kelvin(float temp)
{
    return celsius_To_kelvin(fahrenheit_To_celsius(temp));
    // return (5 * (temp - 32) * 9) + 273;
}

int main()
{
    print_available_convertions();
    int num;
    scanf("%d", &num);
    printf("Enter a temperature: ");
    float temperature;
    scanf("%f", &temperature);
    if (num == 1)
    {

        printf("%.2f degree Celsius = %.2f degree Fahrenheit\n", temperature, celsius_To_fahrenheit(temperature));
    }
    else if (num == 10)
    {

        printf("%.2f degree Fahrenheit = %.2f degree Celsius\n", temperature, fahrenheit_To_celsius(temperature));
    }
    else if (num == 2)
    {

        printf("%.2f degree Celsius = %.2f Kelvin\n", temperature, celsius_To_kelvin(temperature));
    }
    else if (num == 20)
    {

        printf("%.2f Kelvin = %.2f degree Celsius\n", temperature, kelvin_To_celsius(temperature));
    }
    else if (num == 3)
    {

        printf("%.2fKelvin = %.2f degree Fahrenheit\n", temperature, kelvin_To_fahrenheit(temperature));
    }
    else if (num == 30)
    {

        printf("%.2f degree Fahrenheit = %.2f Kelvin\n", temperature, fahrenheit_To_kelvin(temperature));
    }
    else 
    {
        printf("Invalid Choice!\n");
    }
    

    return 0;
}