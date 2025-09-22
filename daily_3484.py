class Spreadsheet:

    def __init__(self, rows: int):
        self.sheet = {}
        self.rows = rows

    def setCell(self, cell: str, value: int) -> None:
        self.sheet.update ({cell : value})
        
    def resetCell(self, cell: str) -> None:
        self.sheet[cell] = 0
        
    def getValue(self, formula: str) -> int:
        plus_index = formula.index("+")
        x = formula[1:plus_index]
        y = formula[plus_index+1:]
        def value_calculator(s,dictionnary) :
            if s.isdigit():
                return int(s.lstrip("0") or "0")
            if s in dictionnary:
                return dictionnary[s]
            return 0
              
        return value_calculator(x,self.sheet) + value_calculator(y,self.sheet)