class Solution:
    def canVisitAllRooms(self, rooms: List[List[int]]) -> bool:
        seen, n = [0], len(rooms)
        q = deque([0])
        while q:
            room = rooms[q.popleft()]
            for i in range(len(room)):
                if room[i] not in seen:
                    seen.append(room[i])
                    q.append(room[i]) 


        return len(seen) == n