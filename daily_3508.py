from collections import deque

class Router:
    def __init__(self, memoryLimit: int):
        self.memoryLimit = memoryLimit
        self.queue = deque()
        self.seen = set()
        self.dest_map = {}
        self.dest_ptr = {}  

    def addPacket(self, source: int, destination: int, timestamp: int) -> bool:
        packet = (source, destination, timestamp)

        if packet in self.seen:
            return False

        if len(self.queue) >= self.memoryLimit:
            old_src, old_dst, old_time = self.queue.popleft()
            self.seen.remove((old_src, old_dst, old_time))
            self.dest_ptr[old_dst] += 1
            if self.dest_ptr[old_dst] >= len(self.dest_map[old_dst]):
                del self.dest_map[old_dst]
                del self.dest_ptr[old_dst]

        self.queue.append(packet)
        self.seen.add(packet)

        if destination not in self.dest_map:
            self.dest_map[destination] = []
            self.dest_ptr[destination] = 0
        self.dest_map[destination].append(timestamp)

        return True

    def forwardPacket(self) -> list[int]:
        if not self.queue:
            return []

        src, dst, ts = self.queue.popleft()
        self.seen.remove((src, dst, ts))

        self.dest_ptr[dst] += 1
        if self.dest_ptr[dst] >= len(self.dest_map[dst]):
            del self.dest_map[dst]
            del self.dest_ptr[dst]

        return [src, dst, ts]

    def getCount(self, destination: int, startTime: int, endTime: int) -> int:
        if destination not in self.dest_map:
            return 0

        arr = self.dest_map[destination]
        start_index = self.dest_ptr[destination]

        def lower_bound(x):
            l, r = start_index, len(arr)
            while l < r:
                m = (l + r) // 2
                if arr[m] < x:
                    l = m + 1
                else:
                    r = m
            return l

        def upper_bound(x):
            l, r = start_index, len(arr)
            while l < r:
                m = (l + r) // 2
                if arr[m] <= x:
                    l = m + 1
                else:
                    r = m
            return l

        left = lower_bound(startTime)
        right = upper_bound(endTime)
        return right - left
