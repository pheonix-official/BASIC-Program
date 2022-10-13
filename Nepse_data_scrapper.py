import requests
import pandas as pd
from  bs4 import BeautifulSoup
r= requests.get("https://www.sharesansar.com/today-share-price")
soup = BeautifulSoup(r.text, 'html.parser')
company_code=[]
company_name=[]
spans = soup.find_all('td', {'class' : 'success-index'})
for span in spans:
    children = span.findChildren("a" , recursive=False)
    for child in children:
        company_code.append(child.get_text())
        company_name.append(child.get('title'))
        #print(f"{child.get('title')}:{child.get_text()}")
#print(company_name)
#print(company_code)
# field names 
# dataframe Name and Age columns
df = pd.DataFrame({'Company_Code': company_code,
                   'Company_Name': company_name})
# Create a Pandas Excel writer using XlsxWriter as the engine.
writer = pd.ExcelWriter('Data.xlsx', engine='xlsxwriter')
# Convert the dataframe to an XlsxWriter Excel object.
df.to_excel(writer, sheet_name='Sheet1', index=False)
# Close the Pandas Excel writer and output the Excel file.
writer.save()
