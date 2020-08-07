///////////////////////////////Logic//////////////////////////////////////////////////////
template<class T>
class AddElements
{
     T element;
    public:
            AddElements(T i)
            {
                element=i;
            }
            T add(T i)
            {
                return element+i;
            }
            T concatenate(T i)
            {
                return element+i;
            }
};
///////////////////////////////end////////////////////////////////////////////////////////
