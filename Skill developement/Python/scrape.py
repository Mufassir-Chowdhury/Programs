from re import match
from bs4 import BeautifulSoup
import requests
import csv
source = requests.get('http://coreyms.com').text

soup = BeautifulSoup(source, 'lxml')

csv_file = open('cms_scrape.csv', 'w')

csv_writer = csv.writer(csv_file)
csv_writer.writerow(['headline', 'summary', 'video_link'])

for article in soup.find_all('article'):

    headline = article.h2.a.text
    print(headline)

    summary = article.find('div', class_='entry-content').p.text
    print(summary)

    vid_src = article.find('iframe', class_='youtube-player')
    if vid_src:
        vid_src = vid_src['src']

        vid_id = vid_src.split('/')[4].split('?')[0]
        vid_link = f'https://www.youtube.com/watch?v={vid_id}'
        print(vid_link)
    else:
        vid_link = ''
    print()

    csv_writer.writerow([headline, summary, vid_link])

csv_file.close()