in 49th line i made modifier. this modifier give only permission to Owner of contract.
mulDiv function requires three elements.if elements are x,y and z then it will return (x*y)/z for access specifier we can use internal or public we should use 
internal access specifier because we will only use it in contract itself. we can use (view or pure ) its is optional we can use whatever we wish.
getcompoundInterest() this function requires three element . principle amount that one want ot take as loan. second argument rate of interest in percentage. and third is
in years . After one years principle amount will change to (principle +(principle*rate)/100;
so in this function i run a for loop "time" times .the net ammount of interest (principle value after t time  - initial principle value);
IN reqloan() one we call this function from another account who is requesting for loan from Owner of our contract ; function caller will pass three elements to this function
by calling this function balance of Owner of contract's account will decrease by ammount "toPay" basically we assuming that we have two users one is Owner of our contract
and another is the user who is calling this reqloan() function so amount "toPay" will increase in account of calling user and by this Owner is paying his loan by that 
 ammount so his loan[Owner] will decrease and loans[msg.sender] will incrase by that ammount.
 
getOwner() balance is made public and view because we are not changing the value of any member variable and this function will return the balance[Owner] of Owner of the 
contract the account with wich we deployed this contract.
vieDues() function will return the value of loans ammount the Owner owes from second user. here we used isOwner() access specifier because we can only call this function
by account with wich deployed this contract; and this function will return loan[Owner] ammount;
SettleDues() we call this function by another account; if loan[Owner] ammount is less than or equal to balances[Owner] then we will call sencoin() function of its parent 
class caller of this function will become the reciever of the ammount Owner of this function contract will become sender for sendcoin() function.
so here we can see that by interitance function of parent class is inherit in child class.
