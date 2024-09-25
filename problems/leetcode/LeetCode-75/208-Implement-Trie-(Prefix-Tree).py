class Trie:

    def __init__(self):
        self.children = {}

    def insert(self, word: str) -> None:
        current = self.children
        for each in word+'$':
            if each not in current:
                current[each] = {}
            current = current[each]

    def search(self, word: str) -> bool:
        return self.startsWith(word+'$')

    def startsWith(self, prefix: str) -> bool:
        current = self.children
        for each in prefix:
            if each not in current:
                return False
            current = current[each]
        return True

# Your Trie object will be instantiated and called as such:
# obj = Trie()
# obj.insert(word)
# param_2 = obj.search(word)
# param_3 = obj.startsWith(prefix)