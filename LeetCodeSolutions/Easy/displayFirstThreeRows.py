import pandas as pd # type: ignore --> disregard ignore, this was just for pasting

def selectFirstRows(employees: pd.DataFrame) -> pd.DataFrame: 
    result = employees.head(3)
    return result