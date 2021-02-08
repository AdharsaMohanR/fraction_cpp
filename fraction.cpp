#include"fraction.h"
/**
 * @brief Construct a new Fraction:: Fraction object
 * 
 */
Fraction::Fraction():numer(1),denom(1)
{
}
Fraction::Fraction(int num,int den):numer(num),denom(den)
{
}
 Fraction::Fraction(int val):numer(val),denom(val){



 }
 /**
  * @brief operator overloading for addition
  * 
  * @param ref 
  * @return Fraction 
  */
 Fraction Fraction::operator+(const Fraction& ref)
  {
  return Fraction((this->numer*ref.denom)+(this>denom*ref.numer),this->denom*ref.denom);
  }
  /**
   * @brief operator overloading for subtraction
   * 
   * @return Fraction 
   */
  Fraction Fraction::operator-(const Fraction&)
  {
  return Fraction((this->numer*ref.denom)-(this>denom*ref.numer),this->denom*ref.denom);
  }
  
  Fraction Fraction::operator+(int val)
  {
  return Fraction(this->numer+(val*this->denom),this->denom);
  }
  /**
   * @brief 
   * 
   * @param val 
   * @return Fraction 
   */
  Fraction Fraction::operator-(int val)
  {
  return Fraction(this->numer-(val*this->denom),this->denom);
  /**
   * @brief operator overloading for ==
   * 
   * @param ref 
   * @return true 
   * @return false 
   */
  bool Fraction::operator==(const Fraction& ref)
  {
  return(numer==ref.numer)&&(denom==ref.denom);
  }
  /**
   * @brief operator overloading for <
   * 
   * @param ref 
   * @return true 
   * @return false 
   */
  bool Fraction::operator<(const Fraction& ref)
  {
  return(numer/denomi)<(ref.numer/ref.denom);
  }

  /**
   * @brief operator overloading for >
   * 
   * @param ref 
   * @return true 
   * @return false 
   */
  bool Fraction::operator>(const Fraction& ref)
  {
  return(numer/denom)>(ref.numer/ref.denom);
  }
  /**
   * @brief 
   * 
   * @return Fraction 
   */
  Fraction Fraction::simplify()
  {
  for(int i=numer/1;i>1;i--)
  {
  if((numer%i==0)&&(denom%i==0))
    {
    numer/=i;
    denom/=i;
    }
   }
   return Fraction(numer,denom);
  }
  /**
   * @brief function simplest
   * 
   * @return true 
   * @return false 
   */
  bool Fraction::Simplest() const{
   return(denom%numer!=0);
   }
  void Fraction::dispay() const{
  std::cout<<numer<<"/"<<denom<<"\n";
  }
  std::ostream& operator<<(std::ostream&, const Fraction& ref)
  {
  return cout<<ref.numer<<"/"<<ref.denom;
  }