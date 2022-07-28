ublic static void removeNode(Node n) {



Node p = n.prev;

Node q = n.next;



p.next = q;

q.prev = p;


n.next = n.prev = null;



n.element = null;

}
