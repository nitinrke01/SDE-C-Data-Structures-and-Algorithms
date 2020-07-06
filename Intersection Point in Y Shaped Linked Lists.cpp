//Given two singly linked lists of size N and M, 
//write a program to get the point where two linked lists intersect each other.
///////////////////////////////////////////////////////////////////////////////
int find_length(Node *start)
{
	int cnt=0;
	Node *p;
	p=start;
	while(p!=NULL)
	{
		cnt++;
		p=p->next;
	}
return cnt;
}
int intersectPoint(Node* p,Node* q)
{
Node *larger,*smaller;
	int m,n,d,cnt;
	m=find_length(p);   
	n=find_length(q);
	d=abs(m-n);
	if(m>n){
		larger=p;
		smaller=q;
		}
	else{
		larger=q;
		smaller=p;
		}
	cnt=0;
	while(cnt<d)
	{
		larger=larger->next;
		cnt++;
	}
	while(larger!=smaller)
	{
		larger=larger->next;
		smaller=smaller->next;
	}
	return larger->data;
}
