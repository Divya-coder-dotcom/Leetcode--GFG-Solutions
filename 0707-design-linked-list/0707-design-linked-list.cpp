class node{
    public:
    int value;
    node* next;
    
    node(int value1)
    {
        value=value1;
        next=nullptr;
    }

};




class MyLinkedList {
public:
    int size;
    node* head;
    node* tail;

    MyLinkedList( ) {
        size=0;
        head= nullptr;
        tail= nullptr;
    }
    
    int get(int index) {
        if(head==NULL || size<=index){
            return -1;
        }
        int count=0;
        node* temp= head;
        while(temp!=NULL)
        {
               
               if(count==index)
               {
                return temp->value;
               }
               else{
               count=count+=1;
               temp=temp->next;
               }
        }
        return -1;
    }
    
    void addAtHead(int val) {

        node* temp = new node(val);
        if(!head){
            head=temp;
        }
        else{
        temp->next=head;
        head=temp;
        }
        size++;
    }
    
    void addAtTail(int val) {
        node* temp= head;
        node* node1= new node(val);
        if(!head)
        {
            tail=node1;
            head=node1;
        }
        else{
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=node1;
        tail=node1;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
        
        if(index<0 || index>size)
        {
            return;
        }
        if(index==0)
        {
            addAtHead(val);

        }
        else if(index==size)
        {
            addAtTail(val);

        }
        else
        {
            node* newnode=new node(val);
            node* temp=head;
            for(int i=0;i<index-1;i++)
            {
                temp=temp->next;
            }
            newnode->next=temp->next;
            temp->next=newnode;
            size++;
        }
    }
    
    void deleteAtIndex(int index) {
        if(head==NULL)
        {
            return;
        }
        if(index<0 || index>=size)
        {
            return;
        }
        if(index==0)
        {
            node* temp=head;
            head=head->next;
            
            if(size==1)
            {
                tail=nullptr;
            }
            delete temp;
        }
        else
    {
        node*temp =head;
        for(int i=0;i<index-1;i++)
        {
            temp=temp->next;
        }
        node* nodedel=temp->next;
        temp->next=temp->next->next;
        if(index==size-1)
        {
            tail=temp;
        }
        delete nodedel;   
    }
    size--;
    }
};



/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna