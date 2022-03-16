int my_atoi ( char * arr) {

   int result = 0;

 	 while (*arr != '\0' ) {
           
           	if(*arr >= '0' && *arr <= '9') {
                         
	 	result = result * 10;
		result = result + *arr - '0';
		arr++;
		} 
 		else {
		
		return 0;
		}

	}
 
 	return result;
}
