# Sentiment Analysis

import nltk
from textblob import TextBlob
from textblob import Word

text = input("Enter the text you want to analyze\n")

obj = TextBlob(text)

sentiment, subjectivity = obj.sentiment
#print(sentiment, subjectivity)
print(obj.sentiment)

if sentiment == 0:
  print('The text is neutral')
elif sentiment > 0:
  print('The text is positive')
else:
  print('The text is negative')
