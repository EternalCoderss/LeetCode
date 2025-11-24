class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        triangle = []

        for row in range(numRows):
            new_row = []
            for col in range(row+1):
                if col == 0 or col == row:
                    new_row.append(1)
                else:
                    new_row.append(triangle[row-1][col-1] + triangle[row-1][col])
            triangle.append(new_row)
        return triangle           

            
        