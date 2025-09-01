class Solution:
    def generateParenthesis(self, n: int) -> str:
        
        result , current = [] , []
        lenght = 2*n

        def is_solution(current) :
            return len(current) == lenght
        
        def choices_for(current) :
            return ['(' , ')']
        
        def is_valid(choice , current) :
            open_count = current.count('(')
            close_count = current.count(')')
            if choice == '(' and open_count < n :
                return True
            if choice == ')' and close_count < open_count :
                return True
            
            return False
        
        def apply_choice(current , choice) :
            current.append(choice)
        
        def remove_choice(current , choice) :
            del current[-1]
        

        def backtrack(current) :
            if is_solution(current) :
                result.append(''.join(current))
                return
            
            for choice in choices_for(current) :
                if is_valid(choice,current) :
                    apply_choice(current,choice)
                    backtrack(current)
                    remove_choice(current,choice)
        
        backtrack(current)
        return result
        
            

        
        

    
     
            

        
        

