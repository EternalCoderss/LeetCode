class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        triangle = [] # empty tringle structure

        #creating empty rows 
        for row in range(numRows):
            #create empty row based on the - range
            new_row = [] # new row == range.
            for col in range(row + 1):
                if col == 0 or row == col:
                    new_row.append(1)
                else:
                    new_row.append(triangle[row - 1][col -1] + triangle[row-1][col])
            triangle.append(new_row)
        return triangle