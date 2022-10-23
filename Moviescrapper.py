from bs4 import BeautifulSoup
import requests
li=[]
i=1
for page_count in range(1,1168):
    url=f"https://bflix.gg/movie?page={page_count}"
    r=requests.get(url)
    data=BeautifulSoup(r.text,"html.parser")
    h1=data.find_all('h2' , {"class":'film-name'})
    for a in h1:
        name=(a.find('a'))
        data=name.get('title')
        print(f"we are in page {page_count} : {i}>{data}")
        li.append(data)
        i+=1
