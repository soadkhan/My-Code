pritected access specifier
__________________________

member of this access specifier is not accessable bu DOT(.) operator.

inheritance      base class    deriver class
___________________________________________________
public           public        public     no change        
                 private       private    no change
				 protected     protected  no change
___________________________________________________
private         public        private   changed to private
                protected     private   changed to private
                private       :(        NOT ACCESSABLE
___________________________________________________
protected       public        protected changed to protected
			    protected     protected  remains   protected
			    private       :(         NOT ACCESSABLE
			    
private members of base class are not accessable to derived class unless inherited in public.
private converts to private.
protected converts to protected.

why protected is needed?
when a member is needed that is -> not accessable bu DOT(.) operator.
								-> can be found in derived class.








