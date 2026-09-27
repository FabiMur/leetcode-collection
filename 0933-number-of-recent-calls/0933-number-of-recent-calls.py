from collections import deque

class RecentCounter:
    def __init__(self):
        self.q = deque()

    def ping(self, t: int) -> int:
        self.q.appendleft(t)
        while self.q[-1] < t - 3000:
            self.q.pop()
        return len(self.q)