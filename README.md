#Utility Libraries Collection
Welcome to the Utility Libraries Collection repository! This repository hosts a suite of libraries designed to provide essential functions and utilities for various programming tasks. 

## Libraries Included
## 1- clsDate C++ Library

### Introduction

`clsDate` is a C++ utility class designed to simplify date handling and management in your applications. With `clsDate`, you can effortlessly manage dates, perform date arithmetic, and validate date inputs.

### Key Features

- **Date Initialization:** Initialize dates using various constructors including system date, date string parsing, and custom date components. Easily access and modify day, month, and year components.
  
- **Date Validation:** Check the validity of a date instance using static and instance methods. Validate leap years, month boundaries, and day-of-week order.

- **Date Formatting:** Convert dates to string format with customizable formatting options. Get short names for days of the week and months.

- **Date Arithmetic:** Perform arithmetic operations like adding days, weeks, months, or years to a date. Calculate the difference in days between two dates. Determine if a date is before, after, or equal to another date.

- **Calendar Generation:** Generate month and year calendars for easy visualization. Print calendars with customizable formatting and styling.

- **Business Day and Week Detection:** Identify weekends and business days. Calculate business days between two dates. Determine if a date falls on the end of a week.

- **Utility Methods:** Calculate age in days from a birthdate. Handle date increases by decades, centuries, and millennia. Swap dates and perform comparisons for date ordering.

## 2- clsString C++ Library

### Introduction

`clsString` is a C++ utility class designed to provide essential string manipulation functions for your applications. With `clsString`, you can easily perform tasks like counting words, changing letter cases, trimming strings, joining strings, and more.

### Key Features

- **String Initialization:** Initialize string values using various constructors, including an empty string or a specified string value.
  
- **String Value Access:** Access and modify the string value directly using the `Value` property or specific getter and setter methods.

- **Length:** Get the length of the string using both static and instance methods.

- **Count Words:** Count the number of words in a string, either by providing the string or using the instance method.

- **Change Letter Cases:** Convert letters to uppercase, lowercase, or invert the case of each letter in the string.

- **Count Letters:** Count the number of capital letters, small letters, or specific letters in the string.

- **Vowel Detection:** Identify vowels in the string and count their occurrences.

- **String Splitting:** Split the string into substrings using a delimiter and return a vector of substrings.

- **String Trimming:** Trim leading, trailing, or both leading and trailing spaces from the string.

- **Join Strings:** Join multiple strings or an array of strings using a specified delimiter.

- **Reverse Words:** Reverse the order of words in the string while maintaining word boundaries.

- **Replace Words:** Replace specific words in the string with another word, optionally ignoring case sensitivity.

- **Remove Punctuations:** Remove punctuations from the string, leaving only alphanumeric characters.

## 3- clsInputValidate C++ Library

### Introduction

`clsInputValidate` is a C++ utility class designed to validate input data such as numbers and dates in various ranges and formats. This class provides functions to check if a number falls within a specified range, if a date is valid, and to read input numbers from the user while handling errors.

### Key Features

- **Number Validation:**
  - Check if a number (short, int, float, double, or string representation of a number) is within a specified range.
  - Read integer and double numbers from the user, ensuring valid input and range validation.

- **Date Validation:**
  - Validate dates using the `clsDate` class, ensuring they are within a specified range.
  - Check if a date is valid based on its format and components.

- **Input Reading:**
  - Read integer and double numbers from the user, handling input errors and prompting for valid input until received.


## 4- clsUtil C++ Library

### Introduction

`clsUtil` is a C++ utility class designed to provide various useful functions for generating random data, manipulating arrays, handling encryption, and more. This class offers methods to generate random numbers, words, and keys, swap elements, shuffle arrays, handle tabs, and encrypt/decrypt text.

### Key Features

- **Random Data Generation:**
  - Generate random numbers within a specified range.
  - Generate random words and keys of desired lengths and character types.
  - Fill arrays with random numbers, words, or keys.

- **Array Manipulation:**
  - Swap elements of different types within arrays.
  - Shuffle the elements of an array randomly.

- **Text Manipulation:**
  - Encrypt and decrypt text using a simple encryption key.
  - Add tabs to text for formatting purposes.

## 5- clsPeriod C++ Library

### Introduction

`clsPeriod` is a C++ class designed to represent and manage date periods. This class includes functionalities to set start and end dates for a period, check for overlap between periods, and print period details.

### Key Features

- **Period Initialization:**
  - Initialize a period with a start date and an end date.

- **Overlap Checking:**
  - Check if two periods overlap with each other.

- **Print Period Details:**
  - Print the start and end dates of a period.

