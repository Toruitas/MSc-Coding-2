# Week 4 - Make a scraper in Python

This week's task was to create a web scraper which integrated gensim for text summarization.

It had been a very very very long time since I last wrote a scraper. Somewhere in the range of 3-5 years. It was nice to do it again with more modern tools, though some of the tools were the same.

Key modules:
* `gensim`
* `beautiful soup`
* `pandas`
* `numpy`
* `requests`
* `datetime`

The scraper loads or creates a Pandas dataframe to store rows of: [source_url, text_summary, outbound_links]. 

Starting at the right-wing news aggregator Drudge Report, the scraper looks for mentions of "corona" or COVID-19. It originally tried to look exclusively at right-wing websites that make Drudge Report look like Bernie Sanders. It's a window into an alternate reality. If this scraper had been running nonstop over the crisis's evolution (and society's devolution), it could have seen these websites' versions of the crisis. 

It would look something like... originally something not to worry about as it's a Chinese problem, to a Democratic party hoax, to something trending towards 0 in a week, to a drag on the stock market that seniors should sacrifice themselves for, to the current "200,000 deaths and 32% unemployment should be expected."

But Drudge Report doesn't always link to other right-wing sources, rather preferring to use a clickbait title and a normal source. 

The most difficult part of the project was actually using Pandas to assemble a dataframe for organization, surprisingly. Getting data out of an existing dataframe was less straightforward than expected, as it by default formats links as an object. Took some hunting, but there's a converter for that.

Another diffult case was the fact that websites like to link to themselves. I could exclude those from the candidates for next links since the scraper may end up looping in on itself, but instead I just keep a list of scraped sites. If it's been scraped, I ignore it.

The scraper scrapes to a depth of 5 degrees. This can aggregate millions of links and summaries if the "un-trusted sources" are prolific.