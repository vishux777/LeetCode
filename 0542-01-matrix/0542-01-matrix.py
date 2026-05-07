from collections import deque

class Solution:
    def updateMatrix(self, mat):
        r = len(mat)
        c = len(mat[0])

        q = deque()
        d = [[-1] * c for _ in range(r)]

        for i in range(r):
            for j in range(c):
                if mat[i][j] == 0:
                    d[i][j] = 0
                    q.append((i, j))

        a = [(1, 0), (-1, 0), (0, 1), (0, -1)]

        while q:
            x, y = q.popleft()

            for dx, dy in a:
                nx = x + dx
                ny = y + dy

                if 0 <= nx < r and 0 <= ny < c and d[nx][ny] == -1:
                    d[nx][ny] = d[x][y] + 1
                    q.append((nx, ny))

        return d