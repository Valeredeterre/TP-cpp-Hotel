#include <iostream>
#include <string>
#include <time.h>
#include <array>

class Date{
public:
    //constructor
    /*!
     *  \brief Default constructor of the Date class.
     *  \param day : the day of the date
     *  \param month : the month of the date
     *  \param year : the year of the date
     */
    Date(int day, int month, int year);
    /*!
     *  \brief Default constructor of the Date class.
     *  \param date : the date of the date
     */
    Date();
    //methods
    /*!
     *  \brief Getter allow to get the year of the date.
     *  \return Return the year of the date. 
     */
    int GetYear() const;
    /*!
     *  \brief Getter allow to get the month of the date.
     *  \return Return the month of the date. 
     */
    int GetMonth() const;
    /*!
     *  \brief Getter allow to get the day of the date.
     *  \return Return the day of the date. 
     */
    int GetDay() const;
    /*!
     *  \brief IO overload.
     *
     *  Show the date with std::cout.
     *
     */
    friend std::ostream& operator<<(std::ostream& os, const Date& date);
    //operators overload
    /*!
     *  \brief Operator overload.
     *
     *  Compare two dates.
     *
     */
    bool operator>(const Date& date) const;
    /*!
     *  \brief Operator overload.
     *
     *  Compare two dates.
     *
     */
    bool operator ==(const Date& date) const;

private:
    //private methods
    /*!
     *  \brief Check if the date is valid.
     *  \param day : the day of the date
     *  \param month : the month of the date
     *  \param year : the year of the date
     *  \return Return true if the date is valid, false otherwise.
     */
    bool dateIsValid(int day, int month, int year);
    //private variables
    int _year;
    int _month;
    int _day;
};