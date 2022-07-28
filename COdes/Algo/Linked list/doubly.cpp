public static Node insertAfter(Node p, Object elem) {



Node n = new Node(elem, null, null);



Node q = p.next; // q will refer to the next node

n.next = q;

n.prev = p;

p.next = n;

q.prev = n;



return n;

}
