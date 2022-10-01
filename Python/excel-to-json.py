import pandas as pd
import os

excel_path = "dummy.xlsx"
json_path = 'new_json.json'

sheet = 'Sheet1'
def format_json(excel_path, json_path, sheet):
    excelFile = pd.read_excel(excel_path, sheet_name=sheet)
    excelFile.to_json(json_path)

format_json(excel_path=excel_path, json_path=json_path, sheet=sheet)
