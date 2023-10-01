class Solution(object):
    def findSubstring(self, s, words):

        if not s or not words:
            return []

        word_length = len(words[0])
        total_length = word_length * len(words)
        word_count = Counter(words)
        result = []

        for i in range(len(s) - total_length + 1):
            substring = s[i:i + total_length]
            substring_words = [substring[j:j + word_length] for j in range(0, total_length, word_length)]
            substring_count = Counter(substring_words)

            if substring_count == word_count:
                result.append(i)

        return result
            