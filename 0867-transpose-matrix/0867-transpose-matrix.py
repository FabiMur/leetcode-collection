class Solution:
    def transpose(self, matrix: List[List[int]]) -> List[List[int]]:
        depth = len(matrix)
        width = len(matrix[0])

        new_matrix = []

        for x in range(width):
            next_row = []
            for y in range(depth):
                next_row.append(matrix[y][x])
            new_matrix.append(next_row)

        return new_matrix