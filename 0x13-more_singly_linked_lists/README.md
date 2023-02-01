You can only declare a maximum of two variables in your function                                                            
                                                                                                                            
12. Print (safe version)                                                                                                    
Write a function that prints a listint_t linked list.                                                                       
                                                                                                                            
Prototype: size_t print_listint_safe(const listint_t *head);                                                                
Returns: the number of nodes in the list                                                                                    
This function can print lists with a loop                                                                                   
You should go through the list only once                                                                                    
If the function fails, exit the program with status 98                                                                      
Output format: see example                                                                                                  
                                                                                                                            
13. Free (safe version)                                                                                                     
Write a function that frees a listint_t list.                                                                               
                                                                                                                            
Prototype: size_t free_listint_safe(listint_t **h);                                                                         
This function can free lists with a loop                                                                                    
You should go though the list only once                                                                                     
Returns: the size of the list that was free’d                                                                               
The function sets the head to NULL                                                                                          
                                                                                                                            
14. Find the loop                                                                                                           
Write a function that finds the loop in a linked list.                                                                      
                                                                                                                            
Prototype: listint_t *find_listint_loop(listint_t *head);                                                                   
Returns: The address of the node where the loop starts, or NULL if there is no loop                                         
You are not allowed to use malloc, free or arrays                                                                           
You can only declare a maximum of two variables in your function
