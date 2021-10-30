import numpy
import pandas as pd
import matplotlib.pyplot as pyplot
#Read the cars2.csv file 
df = pd.read_csv("cars2.csv")


def main():
    
        
        cars = df["Car"].to_numpy()
        car_name = ""
        #Create a loop for users to keep inputting car models  until they quit
        while car_name != "q":
            #Get the car model input from the user
            print(cars)
            car_name = input("Enter a car model from the array above:")
            if car_name != "q":
                #Filter the dataframe to the town specified by the user
                filtercar=filter_for_car(df,car_name)
                print(filtercar)
                
            elif car_name == "q":
                print("Thank you for using this program. Be safe!")
                show_origin_data(df)
                show_model(df)



def filter_for_car(df,car):
    """Enter a car and filter the dataframe 
    for all the car entered"""
    '''param df: The dataframe to be filtered by this function'''
    '''param town: car specified by the user, the df will be filtered so all the data will be for the car'''
    filter = (df["Car"] == car)
    filter_town = df[filter]
    return filter_town



def show_origin_data(df):
    """ Define a pie chart that shows all the cars in the data and the distrubution of their origin"""
    '''param df: The dataframe to be shown in this pie chart
    '''
    counts = df.groupby("Origin",)["Origin"].count()
    
    
    #Create a pie chart using the counts variable
    piechart = counts.plot(kind="pie", y="Origin",
    title="Origin of cars", label="", legend=None)
    pyplot.show()



def show_model(df):
    """Define a bar chart that shows the distribution of the car models
    param df: The dataframe to be shown in this pie chart

    """
    bar = df.groupby("Model",)["Model"].count()
    #Create a bar chart using the bar variable
    barplot = bar.plot(kind = "bar" , x = "Car" , y = "Model" , title = "Car Models", legend = None)
    pyplot.show()


 
main()