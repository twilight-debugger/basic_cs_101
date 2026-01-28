def vowels(sen):
    vowel_count = 0
    for i in sen:
        if(i in ['a','e','i','o','u']):
            vowel_count+= 1    
    return vowel_count

sentence = "I am Max Verstappen"
result = vowels(sentence)
print(result)
