# City Temperature Analyzer

## Overview
A C++ program to manage city information and count cities with temperatures above a specific threshold.

## Features
- Store city details including name, population, area, and temperature
- Input multiple city information dynamically
- Count cities with temperature above 20 degrees

## Prerequisites
- C++ Compiler (g++)
- Standard C++ Library

## Compilation
```bash
g++ -std=c++11 city_temperature_analyzer.cpp -o city_temperature_analyzer
```

## Usage
1. Run the compiled executable
2. Input number of cities
3. For each city, input:
   - Name
   - Population
   - Area
   - Temperature
4. Program outputs count of cities with temperature > 20°C

### Example
```
Enter number of cities: 3
City 1: 
Tokyo 13929286 2194 22.5
City 2:
New York 8804190 783.8 18.3
City 3:
Mumbai 12442373 603.4 26.7
Output: 2
```

## Code Structure
- `City` class with methods:
  - Input city information
  - Retrieve temperature
- Main function:
  - Dynamically create city array
  - Count cities above temperature threshold

## Potential Improvements
- Add input validation
- Implement more city-related operations
- Use dynamic memory allocation
- Add error handling
- Provide more detailed city analysis

## Temperature Threshold
- Current threshold: 20°C
- Easily modifiable in source code

## Author
Salman Hashemi
