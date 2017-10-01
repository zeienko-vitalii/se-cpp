/**
* @file Output.h
* Declaration of the Output class.
* @author Vitalii Zeienko
* @version 0.0.1
* @date 2017.09.24
*/

#ifndef OUTPUT_H_
#define OUTPUT_H_

/**
* The base class for all other classes which are responsible 
* for output.
*/
class Output{
public :

	/**
	 * Default constructor. 
	 * It contains nothing and was made for explicit showing the default constructor.
	 * */
	Output();

	/**
	 * Outputs header, content and the footer.
	 * */
	virtual void Display();


	/**
	* If memory was allocated for an Output`s object destructor
	* clears this memory.
	* */
	virtual ~Output();
protected:
	/**
	 * Outputs the Header. 
	 * */
	virtual void ShowHeader();
	/**
	 * Outputs the Content.
	 * */
	virtual void ShowContent();
	/**
	 * Outputs the Footer.
	 * */
	virtual void ShowFooter();

};


#endif /* OUTPUT_H_ */
